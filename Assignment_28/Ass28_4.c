#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd, size = 0;
    char Fname[20];
    char buffer;
    int bytesRead;

    printf("Enter the file name:\n");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open the file.\n");
        return -1;
    }

    while ((bytesRead = read(fd, &buffer, 1)) > 0)
    {
        size++;
    }

    close(fd);

    printf("Size of file '%s' is: %d bytes\n", Fname, size);

    return 0;
}
