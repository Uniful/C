/* 05L01.c Reading input by calling getchar() */
#include <stdio.h>

int main() {
int ch1, ch2;
printf("Print two characters together: \n");
ch1 = getc(stdin);
ch2 = getchar();
printf("The character printed with getc function is: %i. \n", ch1);
printf("The character printed with getchar() function is %d \n", ch2);
return 0;
}


