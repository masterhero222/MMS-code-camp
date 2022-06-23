
#include<stdio.h>
double sqrt(double number);
int main() {
    int number;
    printf("Enter a Number : ");
    scanf("%d",&number);
    sqrt(number);
}
double sqrt(double number) {
    double temp, sqrt;
    sqrt = number / 2;
    temp = 0;
    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (number / temp + temp) / 2;
    }
    printf("%.2lf", temp);
}