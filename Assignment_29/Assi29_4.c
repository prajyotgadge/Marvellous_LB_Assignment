#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int CountCharOccurrence(char *fname, char ch)
{
    int fd, count = 0;
    char c;
    int bytesRead;

    fd = open(fname, O_RDONLY);
    if (fd == -1)
    {
        return -1;
    }

    while ((bytesRead = read(fd, &c, 1)) > 0)
    {
        if (c == ch)
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
    char targetChar;
    int charCount;

    printf("Enter the file name:\n");
    scanf("%s", Fname);

    printf("Enter the character to count:\n");
    getchar(); 
    scanf("%c", &targetChar);

    charCount = CountCharOccurrence(Fname, targetChar);

    if (charCount == -1)
    {
        printf("Unable to open the file.\n");
    }
    else
    {
        printf("Character '%c' occurs %d times in file '%s'.\n", targetChar, charCount, Fname);
    }

    return 0;
}
