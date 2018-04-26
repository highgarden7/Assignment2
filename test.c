#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<time.h>

int main(void)
{
    struct stat buf,buf2;

    stat("text1",&buf);
    stat("text2",&buf2);
    printf(" size : %d vs %d \n ", (int)buf.st_size,(int)buf2.st_size);
    printf("blocks : %d vs %d \n ", (int)buf.st_blocks,(int)buf2.st_blocks);
    return 0;
}