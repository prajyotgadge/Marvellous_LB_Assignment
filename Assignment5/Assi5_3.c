#include <stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }

     for(iCnt=-iNo;iCnt <= 0;iCnt++)
    {    
            printf("%d ",iCnt);    
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf(" %d ",iCnt);
    }
    return iCnt;
    
    
}
int main()
{
    int iValue =0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}