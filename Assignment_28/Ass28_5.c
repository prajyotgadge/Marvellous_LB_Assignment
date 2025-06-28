#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int fd;
    char Fname[100];
    char inputStr[1000];

    printf("Enter the file name:\n");
    scanf("%s", Fname);

    printf("Enter the string to append:\n");
    getchar();
    fgets(inputStr, sizeof(inputStr), stdin);
    inputStr[strcspn(inputStr, "\n")] = '\0';

    fd = open(Fname, O_WRONLY | O_APPEND | O_CREAT, 0666);

    if (fd == -1)
    {
        printf("Unable to open or create the file.\n");
        return -1;
    }

    write(fd, inputStr, strlen(inputStr));
    write(fd, "\n", 1);

    close(fd);

    printf("String appended successfully to '%s'.\n", Fname);

    return 0;
}
