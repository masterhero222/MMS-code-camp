#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char* argv[]){
    int p1[2]; // C => P
    int p2[2]; //P => C
    if(pipe(p1) == -1){
        return 1;
    }
     if(pipe(p2) == -1){
        return 1;
    }
    int pid = fork();
    if(pid == -1){
        return 2;
    }
    if(pid == 0){
        close(p1[0]);
        close(p2[1]);
        //child process
        int x;
        if(read(p2[0], &x, sizeof(x)) == -1){
            return 3;
        }
        printf("Received %d\n", x);
        x *= 4;
        if(write(p1[1], &x, sizeof(x)) == -1){
            return 4;
        }
        printf("Wrote %d\n", x);

    }else{
        //parent process
        close(p1[1]);
        close(p2[0]);
        srand(time(NULL));
        int y = rand() % 10;
        if(write(p2[1], &y, sizeof(y)) == -1){
            return 5;
        }
       // printf("Wrote %d\n", y); - Dont need to add this. The program if reading the the child first, then writing to the parent.
        if(read(p1[0], &y, sizeof(y)) == -1){
            return 6;
            wait(NULL);
        }
        printf("Result is %d\n", y);

        close(p1[0]);
        close(p2[1]);
        
    }
    return 0;
}