#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float mass;
    float height;
    float BMI;

    scanf("%f", &mass);
    scanf("%f", &height);



    BMI = (1.3)*(mass/(pow(height, 2.5)));
    printf("u are %0.02f kg \n", BMI);



    return 0;
}
