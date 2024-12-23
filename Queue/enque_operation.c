#include<stdio.h>
#include<stdlib.h>

struct Queue {
    int size ; 
    int front ; 
    int rear ; 
    int *Q ;
};

void create( struct Queue *q , int size )
{
    q->size = size ;
    q->front = -1 ; 
    q->rear = -1 ; 
    q->Q = (int*)malloc(q->size*sizeof(int)); 
}

// Enqueue function for inserting element in queue 

void enqueue(struct Queue *q , int val)
{
//   Check condition queue is full or not 
   if( q->rear == q->size-1)
   {
     printf("Queue is Empty \n");
   }
   else {
    q->rear++ ; 
    q->Q[q->rear] = val ; 
   }
}

int dequeue(struct Queue *q)
{
    int x = -1 ; 
  if( q->front == q->rear )
  {
    printf("Queue is empty\n");
  }
  else{
      q->front++ ; 
      x = q->Q[q->front];
  }
  return x ; 
}

void print(struct Queue *q )
{
    for (int i = q->front+1; i < q->size ; i++)
    {
        printf("%d \n", q->Q[i]) ; 
    }
}
int main ()
{
   struct Queue q ; int x ; 
   printf("Enter the size of Queue \n") ; 
   scanf("%d",&x);
   create(&q , x);
   int val ; 
   for( int i = 0 ; i < 5 ; i++)
   {
    printf("Enter the element \n"); 
    scanf("%d",&val);
    enqueue(&q,val);
   }
   print(&q) ; 
   int del = dequeue(&q);
   printf("%d is deleted successfully \n",del);
   print(&q) ; 
   return 0 ; 
}