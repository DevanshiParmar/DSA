#include <stdio.h>

int array[10];
int i,n,item,ch,cont=1;

void main(){

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("\nEnter elements in array: ");
    for(i=0;i<n;i++){
         scanf("%d", &array[i]);
    }

    while(cont==1){

        printf("\nOperations: \n1. insert\n2. delete\nEnter:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: insert(array);
                break;
            case 2: del(array);
                break;
        }

        printf("\nEnter 1 to continue :");
        scanf("%d",&cont);
    }
}

int insert(int array[10]){

    printf("\n Element to be inserted at the beginning: ");
    scanf("%d", &item);

    n++;

    for(i=n; i>1; i--){
      array[i-1]=array[i-2];
    }
    array[0]=item;

    printf("\n-----------------------");
    printf("\nArray: ");

    for(i=0;i<n;i++)
    {
     printf("%d", array[i]);
    }

    getch();
    return 0;

}

int del(int array[10]){

    printf("\n Element to be deleted at the beginning: %d",array[0]);

    n--;

    for(int i=0;i<n;i++){
     array[i]=array[i+1];
    }

    printf("\n-----------------------");
    printf("\nArray: ");

    for(int i=0;i<n;i++){
     printf("%d", array[i]);
    }

}
