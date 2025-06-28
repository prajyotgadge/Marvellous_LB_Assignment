#include <stdio.h>
void Pattern(int iRow,int iCol)
{
    int iCnt = 0;
     int iCnt1 = 0;
    char ch ='\0';
  
    for(iCnt=1,ch='A';iCnt<=iRow;iCnt++,ch++)
    {
        for(iCnt1=1;iCnt1<=iCol;iCnt1++)
        {    
            printf("%c\t",ch);
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