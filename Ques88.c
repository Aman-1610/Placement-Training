#include <stdio.h>

int main() 
{
    int n, i, j, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) 
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                for (k = j; k < n - 1; k++) 
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
