//This is an algorithm to insert element of an array at a given index/location of an array if the array has available space.

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main()
{
    int array[MAX] = {1, 2, 4, 5};
    int N = 4; //Number of elements in the array
    int i = 0; //Loop variable
    int index = 2; //index location to insert new value
    int value = 3; //new data element to be inserted

    //Print array before insertion
    printf("Printing array before insertion: \n");
    printf("----------------------------------------\n");
    for(i = 0; i<N; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    //Shift rest of elements after the index value downwards to create space at the index where you want to insert the new value
    for(i=N; i>=index; i--){
        array[i+1] = array[i];
    }

    //Add new element to the selected index position
    array[index] = value;

    //Increase N to reflect number of elements.
    N++;

    //Print the new array to confirm
    printf("Printing array after insertion: \n");
    printf("------------------------------------------\n");
    for(i=0; i<N; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }


    return 0;
}
