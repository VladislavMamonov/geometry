#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 30

void input(circle1* f1, circle2* f2, circle3* f3)
{
    char figure1[n], figure2[n], figure3[n];
    char CorrectData1[n] = "circle";
    char CorrectData2[n] = "Circle";
    char CorrectData3[n] = "CIRCLE";

    
    printf("Input three figures: ");
    scanf("%s %s %s", figure1, figure2, figure3);

    if ((strcmp(figure1, CorrectData1) != 0
         && strcmp(figure1, CorrectData2) != 0
         && strcmp(figure1, CorrectData3) != 0)
        || (strcmp(figure2, CorrectData1) != 0
            && strcmp(figure2, CorrectData2) != 0
            && strcmp(figure2, CorrectData3) != 0)
        || (strcmp(figure3, CorrectData1) != 0
            && strcmp(figure3, CorrectData2) != 0
            && strcmp(figure3, CorrectData3) != 0)) {
        printf("Unknown figure\n");
        _Exit (0);
    }

    printf("Input the coordinates of the first figure: ");
    scanf("%lf %lf %lf", &f1->x, &f1->y, &f1->radius);

    printf("Input the coordinates of the second figure: ");
    scanf("%lf %lf %lf", &f2->x, &f2->y, &f2->radius);

    printf("Input the coordinates of the third figure: ");
    scanf("%lf %lf %lf", &f3->x, &f3->y, &f3->radius);


}


void area_calculation(circle1* f1, circle2* f2, circle3* f3)
{
   f1->area = 3.14 * (f1->radius) * (f1->radius);     
   f2->area = 3.14 * (f2->radius) * (f2->radius);     
   f3->area = 3.14 * (f3->radius) * (f3->radius);     
}