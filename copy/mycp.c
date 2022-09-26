#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define MAX_SIZE    50

int main(int argc, char *argv[])
{
    if(argc == 3)
    {
        int src_file = open(argv[1], O_RDONLY);
        if(src_file == -1)
        {
            printf("source file does not exist\n");
            return -1;
        }
        int des_file = open(argv[2], O_WRONLY|O_CREAT);
        char buf[MAX_SIZE];
        int coun_read =0;
        while (coun_read = read(src_file,buf, MAX_SIZE ) != 0) 
        {
            write(des_file,buf, coun_read );
        }

        

        close(src_file);
        close(des_file);
    }else if(argc<3)
    {
        printf("few arguments\n");
    }else
    {
        printf("too many arguments\n");
    }
    return 0;
}