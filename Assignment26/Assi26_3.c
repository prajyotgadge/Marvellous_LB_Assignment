#include <stdio.h>
#include <string.h>

int FirstChar(char *str, char ch) 
{
    int index = 0;
    while (*str != '\0') 
    {
        if (*str == ch) 
        {
            return index;
        }
        str++;
        index++;
    }
    return -1; 
}

int main() 
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]%*c", arr);

    printf("Enter the character: ");
    scanf("%c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}