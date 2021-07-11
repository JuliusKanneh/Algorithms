#include<stdio.h>
int main(){
    int array[] = {3,5,6,8,9};
    int item, pos, i, n = sizeof(n);

    printf("Enter position at which you want to update element: ");
    scanf("%d", &pos);
    
    if (!(pos >=1 && pos <= n))
    {
        printf("Position out of range!!\n");
        return 0;
    }
    
    printf("Enter item you want to update at postion %d: ", pos);
    scanf("%d", &item);

    printf("Print array elements before udation: \n");
    for (i = 0; i < n; i++)
    {
        printf("array[%d]: %d \n", i, array[i]);
    }
    
    array[pos-1] = item;

    printf("print array elements after updation: \n");
    for (i = 0; i < n; i++)
    {
        printf("array[%d]: %d \n", i, array[i]);
    }

    return 0;
}