#include<stdio.h>
int DollarToINR(int iNo)
{
    
   
    int iINRValue = iNo * 70;
    return iINRValue;
    


}
int main()
{
    int iValue=0;
    int iRet = 0; 
    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("%d\n",iRet);


    return 0;
}