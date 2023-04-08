#include<stdio.h>
#include<stdlib.h>
 struct node
    {
        int data;
        struct node *next;
    };
struct node *head=NULL;

//inserts the element at the beginning
 void insert(int x)
 {
   struct node *temp=(struct node*)malloc(sizeof(struct node));
   temp->data=x;
   temp->next=head;
   head=temp;
 }
   
//prints the list
void print()
{
    struct node *temp=head;
    printf("Elements in the list are:");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
   
//main program
int main()
{
    int n,i,x;
    printf("How many numbers you want to insert:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element-%d:",i+1);
        scanf("%d",&x);
        insert(x);
        print();
    }
}

   

