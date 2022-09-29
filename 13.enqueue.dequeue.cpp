#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define MAX 5  
int front=-1,rear=-1,queue[MAX];
void enqueue();
void dequeue();
void display();
int main()
{
   int ch;
   while(1) 
   {
        printf("\n\n1.enqueue\n2.dequeue\n3.Display\n4.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("\nWrong Choice!!");
        }
    }
}
 void enqueue()
{
    int val;
    if(rear==MAX-1)
    {
        printf("\nqueue is full!!");
    }
    else
    {
        printf("\nEnter element to enqueue:");
        scanf("%d",&val);
        front=front+1;
        queue[front]=val;
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("\nqueue is empty!!");
    }
    else
    {
        printf("\nDeleted element is %d",queue[rear]);
        front=front-1;
    }
}
void display()
{
    int i;
    if(front==-1)
	{
	    printf("\nqueue is empty!!");
    }
    else
    {
        printf("\nqueue is...\n");
        for(i=front;i>=0;--i)
        printf("%d\n",queue[i]);
    }
}
