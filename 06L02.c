#include <stdio.h>

int main() {
    int w, x, y, z, resultw, resultx, resulty, resultz;

    w = x = y = z = 1;
    printf("++w x++ --y z--\n");
    printf("%3d %3d %3d %3d\n", w, x, y, z);
    // ++w;
    // x++;
    // --y;
    // z--;
    resultw = ++w;
    resultx = x++;
    resulty = --y;
    resultz = z--;
    printf("%3d %3d %3d %3d result = +-\n", resultw, resultx, resulty, resultz);
    printf("%3d %3d %3d %3d values w/x/y/z after\n", w, x, y, z);
    return 0;
}
