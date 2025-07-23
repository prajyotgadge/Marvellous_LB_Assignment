#include <stdio.h>

int WhiteSpace(char *str)
{
    if (*str == '\0')
        return 0;

    if (*str == ' ')
        return 1 + WhiteSpace(str + 1);
    else
        return WhiteSpace(str + 1);
}

int main()
{
    int iRet = 0;
    char Arr[100];

    printf("Enter the string: ");
    fgets(Arr, sizeof(Arr), stdin);  // ✅ Accepts spaces

    iRet = WhiteSpace(Arr);

    printf("Number of white spaces are: %d\n", iRet);

    return 0;
}
