#include <stdio.h>
#include <unistd.h>



int main(void)
{
    char path[256] ;
    if( getcwd( path,  sizeof(path)) == NULL )
    {
        perror("pwd error");
    }
    else
    {
        printf("%s\n", path); 
    }

    return 0;
}