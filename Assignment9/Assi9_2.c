#include<stdio.h>

#define true 1
#define false 0
typedef int bool;

bool CheckZero(int iNo)
{
    int iDigit = 0;
    bool bFlag = false;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == 0)
        {
            bFlag = true;
            break;
        }
        iNo = iNo / 10;
    }
    return bFlag;

   

}

int main()
{
    int iValue=0;
    bool bRet =false;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);
    if(bRet ==true)
    {
        printf(" It contain Zero");
    }
    else
    {
       printf(" It  doesnot contain Zero");
    }

    return 0;
}