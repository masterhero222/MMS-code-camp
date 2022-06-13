#include <stdio.h>

int main(){

    int input = 0;
    scanf("%d", &input);

    char arr[26] = {
        
        'A', 'B', 'C', '!', 'E', '@', 'G', '#', 'I', '%', 'K', ']', 'M', '{', 'O', '@', 'Q', '!', 'S', '$', 'U', '.', ',', '|', '!', 'Z'
    };

       
        
       
        for(int i = 0; i <= input; i ++){
            printf("%d", arr[input]);
        }
        


    

    return 0;
}