#include <stdio.h>

int main()
{
    int n, i, first, second;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Need at least two elements.\n");
        return 0;
    }

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1])
    {
        first = arr[0];
        second = arr[1];
    }
    else
    {
        first = arr[1];
        second = arr[0];
    }

    for (i = 2; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    if (first == second)
    {
        printf("All elements are same or no second largest.\n");
    }
    else
    {
        printf("Second largest element is: %d\n", second);
    }

    return 0;
}
