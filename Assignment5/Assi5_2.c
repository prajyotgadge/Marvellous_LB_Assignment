#include <stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    int iSum =0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

     for(iCnt=1;iCnt <= iNo;iCnt++)
    {
            printf(" %d\n",iCnt);    
        
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