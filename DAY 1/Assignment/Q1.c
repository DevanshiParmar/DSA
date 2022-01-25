/*Devanshi Parmar*/
/*Question 1: Reverse an array*/

#include <stdio.h>
#include <stdlib.h>

int Q,P[10000]; // 1<=p[i]<=10000

int reverseArray(int P[Q]){ //Declaring the function wherein P[Q] is the array parameter passed of datatype integer
    int rev[Q]; //new array
    int j,t;

    for(j=Q-1,t=0;j>=0;j--,t++){ //reversing the original array and copying in new array
            rev[t]=P[j];
           // printf("%d", rev[t]);
    }

    for(t=0;t<Q;t++){
         P[t]=rev[t]; //storing the reversed array in the original array
    }

    return P; //Function returns array P

}

void main(){

    int i;
    scanf("%d", &Q); //User input of array size

    for(i=0;i<Q;i++){ //User input of array elements
         scanf("%d", &P[i]);
    }

    reverseArray(P); //Calling the reverseArray Function

    for(i=0;i<Q;i++){
         printf("%d", P[i]);
    }
}


