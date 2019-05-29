#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL;

void add(int data)
{
    struct node *temp;
    if(head==NULL)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        //printf("\nNewly Successfully added.");
    }

    else{
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = head;
        //printf("\nSuccessfully added");
    }
    head = temp;
}
void display(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    if(temp==NULL)
        printf("NULL");
}

void reverse(struct node **head)
{
    struct node *nxt, *current, *prev = NULL;
    current = *head;
    while(current != NULL)
    {
        nxt = current->next;
        current->next = prev;
        prev = current;
        current = nxt;
    }
    *head = prev;
}

int main()
{
    printf("\n\tReverse a Linked list\n");
    printf("\nInsertion is at the beginning\n");
    int num;
    printf("\nEnter the linked list data : [ Enter -1 to end getting inputs ]\n\n");
    while(1)
    {
        scanf("%d", &num);
        if(num != -1)
            add(num);
        else
            break;
    }
    printf("\n");
    display(head);
    printf("\n");
    reverse(&head);
    printf("\n");
    display(head);
    printf("\n");
    return 0;
}
