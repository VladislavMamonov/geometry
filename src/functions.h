#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct {
    double x, y, radius, perimeter, area;
} circle;

void input(circle* f1, circle* f2, circle* f3);
int area_calculation(circle* f);
int perimeter_calculation(circle* f);
int intersection_definition(circle* f1, circle* f2);
void output(circle* f1, circle* f2, circle* f3);

#endif
