#include <stdio.h>
int main(){
    int array[] = {2,3,5,8,10};
    int item = 3, n=5, j=0, i=0;

    //get the element you want to search from the user
    printf("Enter element you want to search: \n");
    scanf("%d",&item);

    //print the origianal array
    for (i = 0; i < n; i++){
        printf("array[%d]: %d\n",i, array[i]);
    }

    //Search the array sequentially for the target element entered by the user
    while (j<n)
    {
        if (array[j] == item)
        {
            break;
        }
        j = j+1;
    }
    printf("Found %d at position %d\n", item, j+1);
    
    return 0;
}