// offset code

#include <stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>


int main()
{
    char Fname[20]={'\0'};

    int fd =0,iRet=0;

    char Buffer[50]={'\0'};

    printf("Enter the File Name that you want to open :\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);       
    if(fd==-1)
    {
        printf("unable to open the file ");

    }
    else
    {
        printf("file is succesfully opend with fd %d\n ",fd);

        iRet = read(fd,Buffer,11);
        
        printf("%d bytes get read successfully\n",iRet);

        printf("data from the file is :%s\n",Buffer);

        iRet = read(fd,Buffer,20);
        
        printf("%d bytes get read successfully\n",iRet);

        printf("data from the file is :%s\n",Buffer);


        close(fd);
    }

    return 0;
}