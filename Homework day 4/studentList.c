#include <stdio.h>
#include <stdint.h>


int main(void)
{
    uint32_t attendance = 0;
    int option, student;
    while (1)
    {
        printf("1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Attendance info\n");
        printf("4. Change attendance\n");
        printf("5. Exit\n");
        scanf("%d", &option);
        if (option == 1)
        {
             printf("Enter student");
             scanf("%d", &student);

             if(student >= 1 && student <= 32){
                 attendance |= (1 << student);

             }
             
             else{
                 printf("Invalid student!\n");
             }
             

        }

        else if(option == 2){
            printf("Enter a student:");
            scanf("%d", &student);
            if (student > 0 && student < 33){
                attendance &= ~(1<<student);
            }else{
                printf("Invalid student!\n");
            }
            
            
        }
        else if (option == 3)
        {
            printf("In attendance are students:\n");
            for(int i=0;i<32;i++)
            {
                if(!!(attendance & (1 << i)))
                    printf("%d ",i+1);
            }
            printf("\n\n");
        }
        else if(option == 4)
        {
            printf("In attendance are students:\n");
            for(int i=0;i<32;i++)
            {
                if(!(attendance & (1 << i)))
                    printf("%d ",i+1);
            }
            printf("\n\n");
        }
        else if(option == 5)
        {
            printf("Enter student:");
            scanf("%d",&student);
            if(student>0 && student<33)
            {
                for(int i=0;i<32;i++)
                {
                    if(!(attendance & (1 << i)))
                    attendance |= (1<<student);
                    else
                    attendance &= ~(1<<student);
                }
            }
            else   
                printf("Invalid student!\n");
        }
        else if(option == 6)
            break;
        else
            printf("Invalid option!\n");
        printf("\n");

        
    }
    return 0;
}
