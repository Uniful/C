/* 05L06.c Specifying the minimum field width */

#include <stdio.h>

int main() {
int num1 = 12;
int num2 = 12345;
printf("%d\n", num1);
printf("%d\n", num2);
printf("%5d\n", num1);
printf("%05d\n", num1);
printf("%02d\n", num2);
return 0;

}
