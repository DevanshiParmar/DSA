#include <stdio.h>

int stk[10];
int cont=1;
int choice;
int top=-1;
int maxstk=10;

void main()
{

    while(cont==1)
    {
        printf("enter 1 for push,2 for pop, 3 for peep, 4 for reverse :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: peep();
                    break;
            case 4: reverse();
                    break;
        }
        printf("\nenter 1 to continue :");
        scanf("%d",&cont);
    }
    print();
    printf("ended");
}
void push()
{
    int item;
    if(top==maxstk)
    {
        printf("overflow\n");
    }
    else
    {
        printf("enter what value to put in :");
        scanf("%d",&item);
        top=top+1;
        stk[top]=item;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("underflow\n");
    }
    else
    {
        item=stk[top];
        top=top-1;
    }
}
void peep()
{
    int ind;
    printf("enter index where you want to see value :");
    scanf("%d",&ind);
    if(ind>top)
    {
        printf("no element\n");
    }
    else
    {
        printf("%d",stk[ind]);
    }
}

void pushstr(char x){
      if(top == maxstk-1){
          printf("stack overflow\n");
      }  else {
          stk[++top]=x;
      }
}

void popstr(){
      printf("%c",stk[top--]);
}


void reverse()
{
   char str[20];
   printf("Enter the string :" );
   scanf("%s", &str);
   printf("\nReversed string is :");
   int n = strlen(str);

    // Push all characters of string to stack
    int i;
    for (i = 0; i < n; i++)
        pushstr(str[i]);

    // Pop all characters of string and
    // put them back to str
    for (i = 0; i < n; i++)
        popstr();


}

void print()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d ",stk[i]);
    }
}

