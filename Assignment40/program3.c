#include<stdio.h>

void Display(int i)
{
    if(i >= 1)
    {
        printf("%d\n", i);
        Display(i - 1);
    }
}

int main()
{
    Display(5);  
    return 0;
}
