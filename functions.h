#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct {
    double x, y, radius;
} coordinates1;

typedef coordinates1 coordinates2;
typedef coordinates1 coordinates3;



int input(coordinates1* f1, coordinates2* f2, coordinates3* f3);

#endif