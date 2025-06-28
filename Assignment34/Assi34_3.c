#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;


void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    if (newn == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }
    newn->data = no;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int Addition(PNODE Head)
{
    int iSum = 0;
    while(Head != NULL)
    {
        iSum += Head->data;
        Head = Head->next;
    }
    return iSum;
}



int main()
{
    PNODE first = NULL;
    int iRet = 0;

    
    InsertFirst(&first, 40);
    InsertFirst(&first, 30);
    InsertFirst(&first, 20);
    InsertFirst(&first, 10);

    iRet = Addition(first);
    if(iRet != -1) 
    {
        printf("First occurrence at position: %d\n", iRet);
    }
    else
    {
        printf("Element not found in the linked list.\n");
    }

    return 0;
}    