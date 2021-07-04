//This is an algorithm to insert element of an array at the beginning of an array if the has available space.

#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int main()
{
    int array[5] = {4,6,8,10};
    int N = 4; //number of elements in array
    int i; //variable for the loop
    int value = 2; //value of to be inserted at the beginning of the array

    //Print the original array
    printf("Elements of array before insertion - \n");
    printf("---------------------------------------------\n");
    for(i=0; i<N; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("\n");

    //Check if the array has empty space
    while(N<MAX){
        //Shift rest of element downwards
        for(i=N; i>=0; i--){
            array[i+1] = array[i];
        }

        //Add new element at first position
        array[0] = value;

        //Increase N to reflect number of elements.
        N++;

        //Print to confirm the new array
        printf("printing array after insertion - \n");
        printf("---------------------------------------------\n");
        for(i=0; i<N; i++){
            printf("array[%d] = %d\n", i, array[i]);
        }

    }

    return 0;
}
