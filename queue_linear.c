
#include<stdio.h>
void enQ(int Q[],int size,int *front,int *rear);
void deQ(int Q[],int size,int *front,int *rear);
void displayQ(int Q[],int size,int *front,int *rear);
int main(){
    int max = 5;
    int queue[max];
    int front = 0;
    int rear = 0;
    int input;
    while (1)
    {
    printf("[1] -> Enqueue\n[2] -> Dequeue\n[3] -> Display queue\nYour input -> ");
    scanf("%d",&input);
    switch (input)
    {
    case 1:
        enQ(queue,max,&front,&rear);
        break;
    case 2:
        deQ(queue,max,&front,&rear);
        break;
    case 3:
        displayQ(queue,max,&front,&rear);
        break;
    
    default:
        printf("Invalid input");
        break;
    }
    }
    return 0;
}

void enQ(int Q[],int size,int *front,int *rear){
    if(*rear < size){
    printf("Enter the element -> ");
    scanf("%d",&Q[*rear]);
    printf("%d add successfully\n",Q[*rear]);
    *rear = *rear+1;
    }
    else if(*front == size){
        *front = 0;
    }
    else{
        printf("Queue overflowed \n");
    }
}

void deQ(int Q[],int size,int *front,int *rear){
    if(*rear == 0){
        printf("Queue Underflow\n");
    }
    else if (*front<size)
    {
        *front = *front+1;
        printf("Queue dequeued \n");
    }
}

void displayQ(int Q[],int size,int *front,int *rear){
    if (*front==*rear)
    {
        printf("Queue is empty");
    }
    else{
    printf("Displaying the queue -> ");
    for (int i = *front; i < *rear; i++)
    {
        printf("%d ",Q[i]);
    }
    }
    printf("\n");
    
}

