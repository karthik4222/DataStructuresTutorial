#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;

//Functions checks if the stack is full or not
int isfull()
{
    if(top=CAPACITY-1)
    return 1;
    else
    return 0;
}

//Function checks if the stack is empty or not
int isEmpty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}

//Removes an element from the stack
int pop()
{   
    int ele;
    if(isEmpty())
    printf("Operation Failed:The stack is empty");
    else
    {ele=stack[top];
    top--;}
    return top;
}

//Pushes an element into the stack
void push(int ele)
{
    if(isfull())
    printf("Operation Failed:The stack is full");
    else
    {stack[top]=ele;
    top++;}

}

//Returns the top element but doesn't delete it
int peek()
{
    if(isEmpty())
    return 0;
    else
    return stack[top];
}

//traverse through elements
void traverse()
{
    if(isEmpty())
    printf("No elements are present\n");
    else
    {   
        printf("The elements in the stack are:");
        for(int i=0;i<=top;i++)
        printf("%d ",stack[i]);
    }
}

//main function
void main()
{   
    int n;
    printf("Select a choice\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Quit");
    scanf("%d",&n);


}