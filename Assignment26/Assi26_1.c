#include <stdio.h>
#include<string.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

bool ChkChar(char *str, char ch) 
{
    while (*str != '\0') 
    {
        if (*str == ch) 
        {
            return true;
        }
        str++;
    }
   
}

int main() 
{
    char arr[20];
    char cValue;
    bool bRet = false;

    printf("Enter string: ");
    scanf("%[^\n]%*c", arr);

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkChar(arr, cValue);

    if (bRet == true) 
    {
        printf("Character FOUND");
    } 
    else 
    {
        printf("Character NOT FOUND");
    }

    return 0;
}