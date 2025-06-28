#include <stdio.h>

int Difference(char *str)
{
    int iCntCapital = 0;
    int iCntSmall = 0;

    if(*str ==0)
    {
        return -1;
    }
    
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCntCapital++;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            iCntSmall++;
        }
        str++;
    }
    return iCntSmall - iCntCapital;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);
    
    return 0;
}