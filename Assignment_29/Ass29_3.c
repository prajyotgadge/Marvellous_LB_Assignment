#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int CountWhiteSpace(char *fname)
{
    int fd, count = 0;
    char ch;
    int bytesRead;

    fd = open(fname, O_RDONLY);
    if (fd == -1)
    {
        return -1;
    }

    while ((bytesRead = read(fd, &ch, 1)) > 0)
    {
        if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            count++;
        }
    }

    close(fd);
    return count;
}

int main()
{
    char Fname[100];
    int whiteCount;

    printf("Enter the file name:\n");
    scanf("%s", Fname);

    whiteCount = CountWhiteSpace(Fname);

    if (whiteCount == -1)
    {
        printf("Unable to open the file.\n");
    }
    else
    {
        printf("Total white spaces in file '%s' = %d\n", Fname, whiteCount);
    }

    return 0;
}
