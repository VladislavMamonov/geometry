#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct {
    double x, y, radius, perimeter, area;
} circle;

void input(circle *f1, circle *f2, circle *f3);
void area_calculation(circle *f1, circle *f2, circle *f3);
void perimeter_calculation(circle *f1, circle *f2, circle *f3);

#endif