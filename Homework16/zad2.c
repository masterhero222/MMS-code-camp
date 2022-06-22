
 
#include <stdio.h>
 
int main(int argc, char * argv[])
{
    FILE    *   fp;             // file pointer
    char    *   line = NULL;
    int         len  = 0;
 
    int cnt = 0;    
 
    if( argc < 3)
    {
        printf("Insufficient Arguments!!!\n");
        printf("Please use \"program-name file-name N\" format.\n");
        return -1;
    }
 
    
    fp = fopen(argv[1],"r");
 
    if( fp == NULL )
    {
        printf("\n%s file can not be opened !!!\n",argv[1]);
        return 1;   
    }
 
    while (getline(&line, &len, fp) != -1)
    {
        cnt++;
        if ( cnt > atoi(argv[2]) )
            break;
 
        printf("%s",line); fflush(stdout);
    }
     
    fclose(fp);
 
    return 0;
}