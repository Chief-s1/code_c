#include<stdio.h>
#include<stdlib.h>     

typedef struct Node{

int data;
struct Node *next;
}node;

node* inp(node *head)
{
node *temp;

temp=(node *)malloc(sizeof(node));

if(temp==NULL)
{
printf("NO Memory\n");
return temp;
}
if(head==NULL)
{
printf("Enter Data\n");
scanf("%d",&temp->data);
return temp;
}

printf("Enter Data\n");
scanf("%d",&temp->data);
while(head->next!=NULL)
head=head->next;

head->next=temp;
temp->next=NULL;

return head;
} 

int del(node *head)
{
if(head==NULL)
{
return 0;
}

node *temp;

if(head->next==NULL)
{
return 0;
}



return 1;
}

void disp(node *head)
{

while(head!=NULL)
{
printf("%d ",head->data);
head=head->next;
}
printf("\n");

}


int main(void)
{

node *head=NULL;
int a=1;


do
  {
printf("1.Input a element\n2.Delete\n3.Display\n0.Exit\n");
scanf("%d",&a);

switch(a)
{
case 0:
break;

case 1:
if(head==NULL)
{
head=inp(head);
break;
}
inp(head);
break;

case 2:
del(head);
break;

case 3:
disp(head);
break;

default:
printf("Invalid\n");
}


 }while(a);

}
