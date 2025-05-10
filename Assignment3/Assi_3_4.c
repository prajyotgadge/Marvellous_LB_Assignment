#include <stdio.h>
#include<ctype.h>

void DisplayConvert(char CValue)
{
    if(islower(CValue))
    {
        printf("%c\n",toupper(CValue));
    
    }
    else if(isupper(CValue))
    {
        printf("%c\n",tolower(CValue)); 
    }
}
int main()
{
    char cValue ='\0';
    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}