#include<stdio.h>

void Display(int i)
{
    if(i >= 1)
    {
        printf("*\n");
        Display(i - 1);
    }
}

int main()
{
    Display(5);
    return 0;
}
