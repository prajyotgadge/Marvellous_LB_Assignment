#include<stdio.h>
#include <unistd.h>
#include<stdlib.h>
#include <fcntl.h>


int main()
{
    int fd =0;
    char Fname[20]={'\0'};
    printf("Enter the name of File that you want to open:\n");
    scanf("%s",Fname);

    fd = open(Fname ,O_RDWR);
    if(fd ==-1)
    {
        printf("unable to open the file :\n");
        return -1;
    }
    printf("File is Successfully Opened ");

    return 0;
}