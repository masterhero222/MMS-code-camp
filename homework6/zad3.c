#include<stdio.h>
	 
double sinDegree(double deg);
double sin(double rad);
	 
int main()
{
	double deg = 60.0;
	printf("Sin is: %lf\n",sin(2));
	 
	return 0;
}
	 
double sinDegree(double deg)
{
	double sign = 1;
	if(deg < 0)
	{
	 sign = -1.0;
	 deg = -deg;
	}
	if(deg > 360.0)
    deg -= (int)(deg/360) * 360;
    deg *= 3.14 / 180.0;
    double res = 0;
    double term = deg;
	int k = 1;
	 while(res + term != res)
	{
	 res += term;
	 k += 2;
	 term *= -deg * deg / k / (k-1);
	}
	 
	return sign * res; 
}
	 
double sin(double rad)
{
	return sinDegree(rad * 57.2958);
}