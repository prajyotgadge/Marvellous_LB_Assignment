#include <stdio.h>

void Display(char ch) 
{
    printf("Decimal\tOctal\tHexadecimal\n");
    printf("%d\t%o\t%X\n", ch, ch, ch);
}

int main() 
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);
    
    return 0;
}