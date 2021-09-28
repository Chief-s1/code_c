#include<stdio.h>
#define max 100
void deque(int *front, int *rear)
{
if(*front==-1 || *front>(*rear))
{
printf("\nQuee Empty Cannot Delete Elements\n");
*rear=-1;
*front=-1;
}

*front=*front+1;
}

int enque(int *front, int *rear, int *ptr)
{

if(*rear==(max-1))
{
printf("\nCannot Enter Element Quee Full\n");
return 0;
}
if(*front==-1)
*front=(*front)+1;

*rear=*(rear)+1;

printf("Enter The Element\n");
scanf("%d",(ptr+*(rear)));

}

int display(int front , int rear , int *ptr)
{
if(front==-1)
{
printf("\nQuee Empty\n");
return 0;
}

while(front==rear)
{
printf("%d\n",*(ptr+front));
front++;
}

}

int main(void)
{
int *ptr,arr[max],front=-1,rear=-1,cho;
ptr=arr;
do
{
printf("\n1.Enque\n2.Deque\n3.Peak\n4.Display\n0.Exit\n");
scanf("%d",&cho);

switch(cho)
{
case 1:
enque(&front,&rear,ptr);
break;

case 2:
deque(&front,&rear);
break;

case 3:
if(front!=-1)
printf("\nTop Element=%d",arr[front]);
else
printf("\nQuee Empty\n");

break;

case 4:
display(front,rear,ptr);
break;

case 0:
return 0;

default:
printf("\nInvalid Choice!!!\n");
}
}while(1);

}
