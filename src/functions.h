#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct {
    double x, y, radius, perimeter, area;
} circle1;

typedef circle1 circle2;
typedef circle1 circle3;


void input(circle1* f1, circle2* f2, circle3* f3);
void area_calculation(circle1* f1, circle2* f2, circle3* f3);
void perimeter_calculation(circle1* f1, circle2* f2, circle3* f3);

#endif