#include<stdio.h>
#include<stdlib.h>
 struct node
    {
        int data;
        struct node *next;
    };
struct node *head=NULL;

//inserts the element at i th position
int custominsert(int x,int n)
{
    struct node *temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=x;
    temp1->next=NULL;
    if(n==1)
    {
        temp1->next=head;
        head=temp1;
        return 0;
    }
    struct node *temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;

   
}
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
    int n,i,x,k,choice;
    printf("How many numbers you want to insert:");
    scanf("%d",&n);
    printf("1.insert at the beginning\n2.insert at ith position");
    printf("\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        {
                for(i=0;i<n;i++)
                {
                    printf("Enter the element-%d:",i+1);
                    scanf("%d",&x);
                    insert(x);
                    print();
                }
        }

        case 2:
        for(i=0;i<n;i++)
        {
            printf("Enter the element and its postion:\n");
            scanf("%d%d",&x,&k);
            custominsert(x,k);
            print();
        }
    }
    
}

   

