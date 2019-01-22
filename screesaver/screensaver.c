#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h> // forgot this, error 1

// function that returns character based on number 

char getCHAR(int n){
	char ok[] = "~!@#$%^&*:;'\",{}|<>=";
	return ok[n];
}

// function that identifies key presses 
int keypress(void){
	// data structure containing terminal information 
	struct termios oldt, newt; // structure variables
	int ch; 
	int oldf;

	tcgetattr(STDIN_FILENO, &oldt); // assigning std in to oldt
	newt = oldt;

	newt.c_lflag &= ~(ICANON | ECHO);

	// lol look this up I have no clue 
	tcsetattr(STDIN_FILENO, TCSANOW, &newt);

	// something is going in not sure
	oldf = fcntl(STDIN_FILENO, F_GETFL, 0);

	fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

	ch = getchar();

	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	fcntl(STDIN_FILENO, F_SETFL, oldf);

	if(ch != EOF){
		ungetc(ch, stdin);
		return 1;
	}
	return 0;
}

// moves the cursor on specified position on screen
void gotoxy(int x, int y){
	printf("%c[%d;%df\n", 0x1B, y, x);
}

int main()
{
	int  x, y;
	long int i, j;
	i = j = 0;

	x = 1, y = 20;
	system("clear");

	// program will run until any key hit
	while(!keypress()){
		x = rand() % ((150 - 1 + 1) + 1);
		y = rand() % ((50 - 1 + 1)+ 1);

		gotoxy(x, y);
		printf("%c\n", getCHAR(rand() % ((20 - 1 + 1) + 1))); fflush(stdout);

		++i;

		if(i == 10000){
			++j; 
			i = 0;
		}

		if(j == 1000000){
			i = 0;
		}

		if(j <= 100){
			usleep(30000);
		}

		if(j <= 1000){
			usleep(3000);
		}

		if(j <= 10000){
			usleep(300);
		}
	}

	return 0;
}