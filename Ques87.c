#include <stdio.h>

int main() 
{
    int size, i, delValue, pos = -1;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    for (i = 0; i < size; i++) 
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter value to delete: ");
    scanf("%d", &delValue);

    for (i = 0; i < size; i++) 
    {
        if (arr[i] == delValue) 
        {
            pos = i;
            break;
        }
    }

    if (pos == -1) 
    {
        printf("Element not found.\n");
    } else 
    {
        for (i = pos; i < size - 1; i++) 
        {
            arr[i] = arr[i + 1];
        }
        size--;

        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) 
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
