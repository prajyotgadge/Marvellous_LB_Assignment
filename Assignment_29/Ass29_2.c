#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int CountSmall(char *fname)
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
        if (ch >= 'a' && ch <= 'z')
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
    int smallCount;

    printf("Enter the file name:\n");
    scanf("%s", Fname);

    smallCount = CountSmall(Fname);

    if (smallCount == -1)
    {
        printf("Unable to open the file.\n");
    }
    else
    {
        printf("Total small letters in file '%s' = %d\n", Fname, smallCount);
    }

    return 0;
}
