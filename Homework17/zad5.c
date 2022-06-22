
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
 

void sigintHandler(int sig_num)
{

    signal(SIGINT, sigintHandler);
    signal(SIGTSTP, sigintHandler);
    printf("\n Cannot be terminated using Ctrl+C or Ctrl+Z\n");
    fflush(stdout);
}
 
int main ()
{

    signal(SIGINT, sigintHandler);
    signal(SIGTSTP, sigintHandler);
    
    while(1)
    {   
        unsigned int time = 1;
        printf("+3000 Лева в сметката\n");
        sleep(time);

        //Мога да го накарам да спи само за 1 секунда. Функцията приема уИнт и се
        //мръщи на дабъл.
        
    }
    return 0;
}