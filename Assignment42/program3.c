#include<stdio.h>


int Strlen(char *str)
{
    int iCount = 0;

    while(*str != 0)
    {
        iCount++;
        str++;
    }

    return iCount;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter The string");
    scanf("%s",Arr);

    iRet = Strlen(Arr);

    printf("Number of characters are : %d",iRet);

    return 0;
}