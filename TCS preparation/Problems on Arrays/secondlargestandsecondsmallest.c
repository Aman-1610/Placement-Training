#include <stdio.h>
#include <limits.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Array must contain at least two elements.\n");
        return 1;
    }

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN, secondlargest = INT_MIN;
    int smallest = INT_MAX, secondsmallest = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i];
        }

        if (arr[i] < smallest) {
            secondsmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondsmallest && arr[i] != smallest) {
            secondsmallest = arr[i];
        }
    }

    if (secondlargest == INT_MIN)
        printf("No valid second largest element.\n");
    else
        printf("The second largest element is %d\n", secondlargest);

    if (secondsmallest == INT_MAX)
        printf("No valid second smallest element.\n");
    else
        printf("The second smallest element is %d\n", secondsmallest);

    return 0;
}
