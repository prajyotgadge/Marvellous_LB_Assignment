# include<stdio.h>
int  KMToMeter(int iNo)
{
    int iMeterValue = iNo * 1000;
    return iMeterValue;
    
}
int main()
{
    int iValue =0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet=KMToMeter(iValue);
    printf("Factorial is :%d\n",iRet);

    return 0;
}