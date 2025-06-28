#include <stdio.h>

void Display(char ch) 
{
    if (ch >= 'a' && ch <= 'z') 
    {
        printf("Output : %c\n", ch - 32);
    } else if (ch >= 'A' && ch <= 'Z') 
    {
        printf("Output : %c\n", ch + 32);
    } else 
    {
        printf("Output : %c\n", ch);
    }
}

int main() 
{
    char cValue = '\0';
    printf("Input : ");
    scanf("%c", &cValue);
    Display(cValue);
    return 0;
}