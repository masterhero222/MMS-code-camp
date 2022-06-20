#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    char izrechenie[] = "AEZAKMI, HESOYAM, UZUMYMW,12,12,3,123,123,1,23,123,123,1,2";
    fp = fopen("binbin.bin", "w+");
    if(fp == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

    fwrite(izrechenie, sizeof(char), 1, fp);
    fclose(fp);

    FILE *fp2;

       if ((fp2 = fopen("binbin.bin","rb")) == NULL){
       printf("Error! opening file");

          exit(1);
   }

   fread(&izrechenie, sizeof(char),1,fp2);
   fclose(fp2);




}