#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int CountCapital(char *fname)
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
        if (ch >= 'A' && ch <= 'Z')
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
    int capitalCount;

    printf("Enter the file name:\n");
    scanf("%s", Fname);

    capitalCount = CountCapital(Fname);

    if (capitalCount == -1)
    {
        printf("Unable to open the file.\n");
    }
    else
    {
        printf("Total capital letters in file '%s' = %d\n", Fname, capitalCount);
    }

    return 0;
}
