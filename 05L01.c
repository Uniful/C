/* 05L01.c Reading input by calling getc() */
#include <stdio.h>

int main()
{
	int	ch;
	printf("Please type in one character: \n");
	ch = getc(stdin);
	printf("The character you entered is: %c\n", ch);
	printf("It has a ASCII value: %d\n", ch);
	return 0;
}
