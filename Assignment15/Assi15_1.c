#include <stdio.h>

void Pattern(int iRow,int iCol)
{
    int iNo1=0;
    int iNo2 =0;

    if(iRow != iCol)
    {
        printf("Error");
        return;
    }
   
   for(iNo1=1;iNo1<=iRow;iNo1++) 
   {
    for(iNo2=1;iNo2<=iNo1;iNo2++)
    {

        printf("*\t");
    }
    for(iNo2=1;iNo2<=(iCol-iNo1);iNo2++)
    {
        printf("#\t");
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