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

int Minimum(PNODE Head)
{
    int min = Head->data;
    Head = Head->next;

    while(Head != NULL)
    {
        if(Head->data < min)
        {
            min = Head->data;
        }
        Head = Head->next;
    }
    return min;
}



int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 640);
    InsertFirst(&first, 240);
    InsertFirst(&first, 320);
    InsertFirst(&first, 230);
    InsertFirst(&first, 110);

    iRet = Minimum(first);
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