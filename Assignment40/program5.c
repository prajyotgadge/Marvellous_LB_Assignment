#include<stdio.h>

void Display()
{
    static char c = 'a';
    if(c != 'f')
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
