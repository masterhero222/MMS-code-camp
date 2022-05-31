#include <stdio.h>

int main(){

int a,b,c, greater = 0;


scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

if(a > b){
    if(a > c){
        greater = a;
    }else{
        greater = c;
    }

}if(b > c){
    greater = b;
}else{
    greater = c;
}


printf("%d Is the greatest \n", greater);






return 0;

}

