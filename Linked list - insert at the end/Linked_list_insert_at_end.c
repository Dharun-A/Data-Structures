#include <stdio.h>
#include <stdlib.h>

//Insert at the end

struct linkedList
{
    int data;
    struct linkedList *next;
}*head = NULL;

typedef struct linkedList *node;

node createNode()
{
    node temp;
    temp = (node)malloc(sizeof(struct linkedList));
    temp->next = NULL;
    return temp;
}


void addNode(int value)
{
    node temp, p;
    temp = createNode();
    temp->data = value;

    if(head != NULL)
    {
        p = getHead();
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
    else
    {
        head = temp;
    }
}

node getHead()
{
    return head;
}

void display()
{
    node t = getHead();
    while(t != NULL)
    {
        printf("%d->", t->data);
        t = t->next;
    }
    printf("NULL\n");
}

int main()
{
    printf("\n\tLINKED LIST\n\tInsert at the end\n");
    printf("\nEnter the linked list elements : \n\n");
    int value;
    while(1)
    {
        scanf("%d", &value);
        if(value == -1)
            break;
        addNode(value);
    }
    printf("\n");
    display();
    return 0;
}
