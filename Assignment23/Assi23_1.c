#include <stdio.h>

void DisplayASCII() 
{
    int iNo=0;
    for (iNo = 0; iNo <= 255; iNo++) 
    {
        printf("Decimal: %d, Hexadecimal: %X, Octal: %o, Character: %c\n", iNo, iNo, iNo, iNo);
    }
}

int main() 
{
    DisplayASCII();
    return 0;
}