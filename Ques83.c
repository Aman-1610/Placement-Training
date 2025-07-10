#include <stdio.h>

int main() 
{
    int size, i, j, minIndex, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    for (i = 0; i < size; i++) 
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size - 1; i++) 
    {
        minIndex = i;
        for (j = i + 1; j < size; j++) 
        {
            if (arr[j] < arr[minIndex]) 
            {
                minIndex = j;
            }
        }

        if (minIndex != i) 
        {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    printf("\nSorted array (ascending order):\n");
    for (i = 0; i < size; i++) 
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
