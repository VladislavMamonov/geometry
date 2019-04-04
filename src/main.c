#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

#define n 30

int main()
{
    circle f1, f2, f3;

    input(&f1, &f2, &f3);
    area_calculation(&f1, &f2, &f3);
    perimeter_calculation(&f1, &f2, &f3);
    output(&f1, &f2, &f3);

    return 0;
}