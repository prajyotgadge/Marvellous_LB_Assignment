#include<stdio.h>

void Display(int i)
{
    if(i <= 5)
    {
        printf("%d\n", i);
        Display(i + 1);
    }
}

int main()
{
    Display(1);  
    return 0;
}
