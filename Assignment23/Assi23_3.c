#include <stdio.h>
#include <string.h>

void Display(char ch) 
{
    int i;

    if (ch >= 'A' && ch <= 'Z') 
    {
        for (i = ch + 1; i <= 'Z'; i++) 
        {
            printf("%c", i);
        }
    }
     else if (ch >= 'a' && ch <= 'z') 
    {
        for (i = ch + 1; i <= 'z'; i++) 
        {
            printf("%c", i);
        }
    } 
    else 
    {
        
        printf("%c", ch);
    }
    printf("\n");
}

int main() 
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}