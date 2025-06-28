#include <stdio.h>

void Pattern(int iRow,int iCol)
{
    int iNo1=0;
    int iNo2 =0;
    int iCnt =1;

    for(iNo1=1;iNo1<=iRow;iNo1++)
    {
        if((iCnt %2)!=0 )
        {
          iCnt =2;
            
        }
        else
        {
            iCnt =1;

        }
       for(iNo2=1;iNo2<=iCol;iNo2++)
       {
         printf("%d\t",iCnt);
         iCnt = iCnt + 2;
        

       }  
       printf("\n");
    }

}
int main()
{
    int iValue1 =0;
    int iValue2=0;

    printf("Enter the Number of Row : ");
    scanf("%d",&iValue1);

    printf("Enter the Number of Column : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    



    return 0;
}