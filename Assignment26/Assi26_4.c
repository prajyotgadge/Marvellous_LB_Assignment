#include <stdio.h>
#include <string.h>

int LastChar(char *str, char ch) 
{
    int lastIndex = -1;
    int index = 0;
    while (*str != '\0') 
    {
        if (*str == ch)
        {
            lastIndex = index;
        }
        str++;
        index++;
    }
    return lastIndex;
}

int main() 
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the string: ");
    scanf("%[^\n]%*c", arr);

    printf("Enter the character: ");
    scanf("%c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}