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

int IsPerfect(int num)
{
    int iSum = 0;
    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            iSum += i;
        }
    }
    return iSum == num;
}

void DisplayPerfect(PNODE Head)
{
    while(Head != NULL)
    {
        if(IsPerfect(Head->data))
        {
            printf("%d ", Head->data);
        }
        Head = Head->next;
    }
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 89);
    InsertFirst(&first, 40);
    InsertFirst(&first, 28);
    InsertFirst(&first, 11);
    InsertFirst(&first, 6);

    printf("Perfect numbers in the list are: ");

    DisplayPerfect(first);

    

    return 0;
}
