#include<stdio.h>

void Display(int No)
{
    static char ch= 'a';
    static int i = 1;
    if(i <= No)
    {
        printf("%c",ch);
        ch++;
        i++;
        Display(No);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter The Number : ");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}