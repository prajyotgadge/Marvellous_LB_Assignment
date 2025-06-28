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

int IsPrime(int num)
{
    if(num < 2)
        return 0;

    for(int i = 2; i <= num / 2; i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

void DisplayPrime(PNODE Head)
{
    while(Head != NULL)
    {
        if(IsPrime(Head->data))
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
    InsertFirst(&first, 22);
    InsertFirst(&first, 41);
    InsertFirst(&first, 17);
    InsertFirst(&first, 20);
    InsertFirst(&first, 11);

    printf("Prime numbers in the list are: ");
    
    DisplayPrime(first);
    

    return 0;
}


