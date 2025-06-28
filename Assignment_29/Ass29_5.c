#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void PrintNChars(char *fname, int n)
{
    int fd;
    char ch;
    int count = 0;

    fd = open(fname, O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open the file.\n");
        return;
    }

    while (read(fd, &ch, 1) > 0 && count < n)
    {
        printf("%c", ch);
        count++;
    }

    close(fd);
}

int main()
{
    char Fname[100];
    int num;

    printf("Enter the file name:\n");
    scanf("%s", Fname);

    printf("Enter number of characters to read:\n");
    scanf("%d", &num);

    printf("First %d characters from file '%s':\n", num, Fname);
    PrintNChars(Fname, num);

    return 0;
}
