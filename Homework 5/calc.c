#include <stdio.h>



void sumFunc(double a, double b, int mode){

    

    double resultPlus = a+b;
    double resultMinus = a-b;
    double resultMulty = a*b;
    double resultDev = a/b;
    
    

    //summ
    if (mode == 1){
        printf("The result:");
        printf("%.2Lf\n" , resultPlus);
          return 1;
    }else if (a + b < 0){
        return 0;
    }

    if (mode == 2){
        printf("The result:");
        printf("%.2Lf\n" , resultMinus);
        return 1;
    }else if (a - b < 0){
        return 0;
    }

    if(mode == 3){   
        printf("The result:");
        printf("%.2Lf\n" , resultMulty);
        return 1;
    }else if (a * b < 0){
        return 0;
    }

    if(mode == 4){
         printf("The result:");
        printf("%.2Lf\n" , resultDev);
        return 1;
    }else if (a / b < 0){
        return 0;
    }
    
    

    if(mode >= 5){
        return 0;
    }
    

}



int main(){

    double a, b, result;
    int mode;
    char exit;


    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%d", &mode);

    

    
        sumFunc(a, b, mode);
        
 
   
    return 0;
}
