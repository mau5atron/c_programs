#include <stdio.h>
#include <string.h>
#include <stdlib.h> // for srand and screen clear + echo off and on
#include <time.h> // for shuffling 

main()
{
	system("clear"); // clearning console screen
	int i, j, z, k, lp;
	char s, rc;

	struct card
	{
		// defining a card structure 
		char *value;
		char *suite;
	};

	struct card temp, list[52], player1[26], player2[26]; // temp for swapping

	char *value[] = {
		"A", "2", "3", "4", "5",
		"6", "7", "8", "9", "10",
		"K", "Q", "J"
	}; // defining character values for character value string literal 
	// struct array 
	
	char *suite[] = {"diamond", "spade", "heart", "club"}; // types of cards
	// defining string literal values for struct variable array

	for(i = 0; i < 52; ++i){
		if(i < 13){
			list[i].suite=*(suite); 
			list[i].value=*(value + i);
			// list is iterated over and assigned struct variables suite 
			// and value 
		} else if(i > 13 && i < 26){
			list[i].suite =* (suite + 1);
			list[].value =* (value + (i - 13));
		} else if(i >= 26 && i < 39){
			list[i].suite =* (suite + 2);
			list[i].value =* (value + (i - 26));
		} else if(i >= 39){
			list[i].suite =* (suite + 3);
			list[i].value =* (value + (i - 39));
		}
	}

	do { // do while to ask after the game is over whether player 
			 //wants to play again 


		// shuffling the cards 
		// shuffling all the cards :)

		int n = 52;
		srand(time(NULL));

		for(i = n-1; i > 0; --i){
			int j = rand() % (i + 1);
			// using the initialized variable temp when making a new card struct
			// to store the value of the array with the card values
			temp.value = list[i].value;
			temp.suite = list[i].suite;

			list[i].value = list[j].value;
			list[i].suite = list[j].suite;

			list[j].value = temp.value;
			list[j].suite = temp.suite;
		}
	}

	// Distribution of cards

	for(i = 0; i < 52; ++i){
		if(i < 26){
			player1[i].value = list[i].value;
			player1[i].suite = list[i].suite;
		} else if(i >= 26){
			player2[i - 26].value = list[i].value;
			player2[i - 26].suite = list[i].suite;
		}
	}

	// for cards info 
	printf("Player 1 has:\t\t\tPlayer2 has: \n");
	for(i = 0; i < 26; ++i){
		printf("%d\t%s\t%s\t%d\t%s\t%s\n",
		 i + 1, player1[i].value, player1[i].suite,
		 i + 1, player2[i].value, player2[i].suite);
	}

	printf("Your input will not be visible.\n");

	int p1score = 0, p2score = 0;
	char a[10], b[10];
	char c[10], d[10];

	for(j = 0; j < 26; ++j){
		system("stty -echo"); // echo off, input will not be visible
		if(j % 2 == 0){
			int x = 0;
			do{
				printf("Player1: type value and suite: \n> ");
				scanf("%s %s", &a[0], &b[0]);
				
			}
		}
	}

}