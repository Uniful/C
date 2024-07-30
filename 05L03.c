/* 05L03.c Outputting a character with putc() */
#include <stdio.h>

int main() {
int ch;
ch = 65;
printf("65 ASCII value coresponds to a letter: \n");
putc(ch, stdout);
return 0;
}
