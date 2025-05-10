# include<stdio.h>
void printEven(int iNo)
{
    if(iNo <=0)
    {
        return;
    }
    int i =2;
    while (i<=2*iNo)
    {
        printf("%d\n",i);
        i = i+2;
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    printEven(iValue);

    return 0;
}