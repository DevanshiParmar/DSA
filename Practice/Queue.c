#include<stdio.h>
#include<stdlib.h>

int que[7],f = -1,r = -1;

void insert()
{
    int val;
    if(((f==0) && (r==6)) || f==r+1)
    {
        printf("Queue overflow\n");
    }
    else if(f==r && f==-1)
    {
        printf("Enter value: ");
        scanf("%d",&val);
        f++;
        r++;
        que[f]=val;
    }
    else if(f>0 && r==6)
    {
        printf("Enter value: ");
        scanf("%d",&val);
        f++;
        que[f]=val;
    }
    else
    {
        printf("Enter value: ");
        scanf("%d",&val);
        r=r+1;
        que[r]=val;
    }
}
void del()
{
    if((f==-1) && (r==-1))
    {
        printf("Queue underflow\n");
    }
    else if(f==r)
    {
        que[f]=0;
        f=-1;
        r=-1;
    }
    else if((f=6) && (r<f))
    {
        que[f]=0;
        f=0;
    }
    else
    {
        que[f]=0;
        f=f+1;
    }
}
void print()
{
    int i;
    printf("The queue elements are now\n");
    for(i=0;i<7;i++)
    {
        printf("%d  ",que[i]);
    }
}
void main()
{
    int cont=1,ch;
    while(cont==1)
    {
        printf("\n1.adding an element\n2.removing an element\n3.printing queue elements\nPlease enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert();
                break;
            case 2: del();
                break;
            case 3: print();
                break;
        }
        printf("\nEnter 1 to continue:");
        scanf("%d",&cont);
    }
}
