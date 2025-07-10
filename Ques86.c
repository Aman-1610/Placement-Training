#include <stdio.h>

int main() {
    int size1, size2, i, j, k;

    printf("Enter size of first sorted array: ");
    scanf("%d", &size1);
    int arr1[size1];
    for (i = 0; i < size1; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &size2);
    int arr2[size2];
    for (i = 0; i < size2; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int merged[size1 + size2];
    i = j = k = 0;

    while (i < size1 && j < size2) 
    {
        if (arr1[i] < arr2[j]) 
        {
            merged[k++] = arr1[i++];
        } else 
        {
            merged[k++] = arr2[j++];
        }
    }

    while (i < size1) 
    {
        merged[k++] = arr1[i++];
    }

    while (j < size2) 
    {
        merged[k++] = arr2[j++];
    }

    printf("\nMerged sorted array:\n");
    for (i = 0; i < size1 + size2; i++) 
    {
        printf("%d\n", merged[i]);
    }

    return 0;c
}
