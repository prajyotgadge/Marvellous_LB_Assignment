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

int SecMaximum(PNODE Head)
{
    int iMax1 = -1, iMax2 = -1;

    while(Head != NULL)
    {
        if(Head->data > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = Head->data;
        }
        else if(Head->data > iMax2 && Head->data < iMax1)
        {
            iMax2 = Head->data;
        }
        Head = Head->next;
    }
    return iMax2;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 240);
    InsertFirst(&first, 320);
    InsertFirst(&first, 230);
    InsertFirst(&first, 110);

    iRet = SecMaximum(first);

    printf("Second maximum element: %d\n", iRet);

    return 0;
}
