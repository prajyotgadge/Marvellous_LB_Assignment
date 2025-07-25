#include <stdio.h>
#include <string.h>

int ChkCharFrequency(char *str, char ch) 
{
    int count = 0;
    while (*str != '\0') 
    {
        if (*str == ch) 
        {
            count++;
        }
        str++;
    }
    return count;
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

    iRet = ChkCharFrequency(arr, cValue);

    printf("Character frequency is %d", iRet);

    return 0;
}