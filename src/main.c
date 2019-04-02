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

    if (intersection_definition(&f1, &f2) > 0) {
        f1.intersects++;
    }

    if (intersection_definition(&f1, &f3) > 0) {
        f1.intersects++;
    }

    if (intersection_definition(&f2, &f1) > 0) {
        f2.intersects++;
    }

    if (intersection_definition(&f2, &f3) > 0) {
        f2.intersects++;
    }

    if (intersection_definition(&f3, &f1) > 0) {
        f3.intersects++;
    }

    if (intersection_definition(&f3, &f2) > 0) {
        f3.intersects++;
    }

    return 0;
}