#include <stdio.h>

void StrCpyCap(char *src, char *dest) 
{
    if(*src == 0)
    {
        return;
    }
    
    while (*src != '\0') 
    {
        if (*src >= 'A' && *src <= 'Z') 
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main() 
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpyCap(arr, brr);
    printf("%s", brr);

    return 0;
}