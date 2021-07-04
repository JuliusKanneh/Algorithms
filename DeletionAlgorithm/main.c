#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {1, 3, 5, 7, 8};
    int k = 2, n = 5;
    int i, j;

    //printing original array
    printf("Array before deletion: \n");
    for(i=0; i<n; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    j=k;
    while(j<n){
        array[j] = array[j+1];
        j=j+1;
    }

    n = n-1;

    //printing the new array
    printf("Array after deletion: \n");
    for(i=0; i<n; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
