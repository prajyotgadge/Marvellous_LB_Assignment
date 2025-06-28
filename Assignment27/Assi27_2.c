#include <stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt) 
{
     if(*src == 0)
    {
        return;
    }

    while (*src != '\0' && iCnt != 0) 
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}

int main() 
{
    char arr[30] = "Marvellous Multi OS";
    char brr[40];
    
    StrNCpyX(arr, brr, 10);
    printf("%s", brr);

    return 0;
}