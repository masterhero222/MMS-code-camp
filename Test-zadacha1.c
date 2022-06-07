#include <stdio.h>
#include <math.h>

int cylinder(double r, double h, double *V, double *S){

    if(r <= 0|| h <= 0){
        return -1;
    }

    *V = (M_PI * pow(r, 2));
    *S = 2 * M_PI * pow(r, 2)  + 2 * M_PI * r * h;
    return 0; 


}

int main (){

    double r, h, S, V;
    while(scanf("%lf %lf", &r, &h ) != EOF){
        if(cylinder(r, h, &S, &V) == 0){
            printf("S = %.2lf , V = %.2lf\n", S, V);

        }else{
            fprintf(stderr, "Invalid data, dont use negative numbers");
        }
    }

    return 0;
}
