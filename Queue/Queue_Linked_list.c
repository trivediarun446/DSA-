// Write a c programe to implement the queue using linked list

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;

void enqueue(int val)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    //  Condition to check queue is empty or not
    if (temp == NULL)
    {
        printf("Queue is Full");
    }
    else
    {
        temp->data = val;
        // temp = (struct node*)malloc(sizeof(struct node));
        temp->next = NULL;
        if (front == NULL)
        {
            front = rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }
}
void print()
{
    struct node *temp;
    temp = front;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct node q;
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    print();
}