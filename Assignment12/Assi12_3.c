#include <stdio.h>
void Pattern(int iRow,int iCol)
{
    int iCnt = 0;
    int iCnt1 =0;
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(iCnt1=5;iCnt1>=1;iCnt1--)
        {
            printf("%d\t",iCnt1);
            
            
        }
        printf("\n");
    }
    
}
int main()
{
    int iValue1= 0;
    int iValue2 =0;

    printf("Enter the Number \n");
    scanf("%d\n %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}