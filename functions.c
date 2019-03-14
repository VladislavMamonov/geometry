#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 30

int input(coordinates1* f1, coordinates2* f2, coordinates3* f3)
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
        return 0;
    }

    printf("Input the coordinates of the first figure: ");
    scanf("%lf %lf %lf", &f1->x, &f1->y, &f1->radius);

    printf("Input the coordinates of the second figure: ");
    scanf("%lf %lf %lf", &f2->x, &f2->y, &f2->radius);

    printf("Input the coordinates of the third figure: ");
    scanf("%lf %lf %lf", &f3->x, &f3->y, &f3->radius);

    printf("%s(%.1lf %.1lf, %.1lf)\n", figure1, f1->x, f1->y, f1->radius);
    printf("%s(%.1lf %.1lf, %.1lf)\n", figure2, f2->x, f2->y, f2->radius);
    printf("%s(%.1lf %.1lf, %.1lf)\n", figure3, f3->x, f3->y, f3->radius);
}
