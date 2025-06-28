#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    if (newn == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }
    newn->data = no;
    newn->next = *Head;
    *Head = newn;
}

int AdditionEven(PNODE Head)
{
    int iSum = 0;
    while(Head != NULL)
    {
        if((Head->data % 2) == 0)
        {
            iSum =iSum + Head->data;
        }
        Head = Head->next;
    }
    return iSum;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 41);
    InsertFirst(&first, 32);
    InsertFirst(&first, 20);
    InsertFirst(&first, 11);

    iRet = AdditionEven(first);
    
    printf("Addition of even elements: %d\n", iRet);

    return 0;
}

