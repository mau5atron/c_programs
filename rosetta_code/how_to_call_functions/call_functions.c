// function with no argument
f();

// fixed number of arguments 
g(1, 2, 3);

// optional arguments: err

int op_arg();
int main()
{
	op_arg(1);
	op_arg(1, 2);
	op_arg(1, 2, 3);
	return 0;
}

int op_arg(int a, int b)
{
	printf("%d %d %d\n", a, b, (&b)[1]);
	return a;
}


// variadic function: how the arguments list is handled solely depends on the function 

void h(int a, ...)
{
	va_list ap;
	va_start(ap);
	...
}

h(1, 2, 3, 4, "abcd", (void*)0);

// named arguments: this is only possible through some preprocessor abuse

struct v_args {
	int arg1; 
	int arg2;
	char _sentinel;
};

void _v(struct v_args args)
{
	printf("%d, %d\n", args.arg1, args.arg2);
}

#define v(...) _v((struct v_args){__VA_ARGS__})

