#include <stdio.h>
#include <fcntl.h>  
#include <unistd.h> 

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'}; 

    printf("Enter the file name: \n");
    scanf("%s", Fname);

    fd = creat(Fname, 0777);

    if(fd == -1)
    {
        perror("Error creating file");
        return -1;
    }

    printf("File created successfully with fd = %d\n", fd);

    close(fd);

    return 0;
}
