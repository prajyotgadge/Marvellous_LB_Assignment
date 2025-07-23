#include <stdio.h>

int Small(char *str)
{
    if (*str == '\0')
        return 0;

    if (*str >= 'a' && *str <= 'z')
        return 1 + Small(str + 1);
    else
        return Small(str + 1);
}

int main()
{
    char arr[100];
    printf("Enter the string: ");
    scanf("%s", arr);

    int result = Small(arr);
    printf("Number of small characters: %d\n", result);

    return 0;
}
