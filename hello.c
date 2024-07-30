#include <stdio.h>
#include <stdlib.h>
int main() {
printf("What is your name?\n");
int ch;
ch = getc(stdin);
printf("Hello %c\n", ch);
exit(0);
}
