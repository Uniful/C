/* Using precision specifier */

#include <stdio.h>
int main() {
int in_n;
double fl_n;
in_n = 123;
fl_n = 123.456789;
printf("Default integer format:		%d\n", in_n);
printf("With precision specifier:	%2.8d\n", in_n);
printf("Default double float format:	%f\n", fl_n);
printf("With precision specifier:	%-10.2f\n", fl_n);
return 0;
}

