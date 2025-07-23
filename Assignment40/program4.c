#include<stdio.h>

void Display()
{
    static char c = 'A';
    if(c != 'F')
    {
        printf("%c\n", c);
        c++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}
