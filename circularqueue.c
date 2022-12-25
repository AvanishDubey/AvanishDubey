#include<stdio.h>
#define max 5
struct QUEUE
{
    int queue[max];
    int front;
    int rear;
}Q;
void enqueue()
{
    if((Q.rear+1)%max==Q.front)
    printf("Queue over flow\n");
    if(Q.front==-1)
        {
            Q.rear=0;
            Q.front=0;
        }
    else
        {
            Q.rear=(Q.rear+1)%max;
        }
        int z;
        scanf("%d",&z);
    Q.queue[Q.rear]=z;
}
void dequeue()
{
    if(Q.front==-1)
        printf("Underflow\n");
    int k=Q.queue[Q.front];
    printf("%d deleted element\n",k);
    if(Q.front==Q.rear)
        Q.front=Q.rear=-1;
    else
        Q.front=(Q.front+1)%max;
}
void show()
{
    if(Q.rear==-1)
        printf("Queue is empty\n");
    else
    {
        int i=Q.front;
        while(i<=Q.rear)
        {
            printf("%d ",Q.queue[i]);
            i=(i+1)%max;
        }}}
void main()
{
    int n;
    printf("1:ENQUEUE\n");
    printf("2:DEQUEUE\n");
    printf("3:SHOW\n");
    printf("4:EXIT\n");
    Q.front=-1;
    Q.rear=-1;
    a1:
    printf("Enter your choice\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter element\n");
            enqueue();
            goto a1;
        case 2:
            dequeue();
            goto a1;
        case 3:
            show();
            goto a1;
        case 4:
            exit(0);
    }
}
