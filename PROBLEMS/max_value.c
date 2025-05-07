#include <stdio.h>

// Recursive function to find the maximum in an array
int find_max(int arr[], int n) {
    // Base case: if the array has only one element
    if (n == 1)
        return arr[0];

    // Recursively find the maximum element in the remaining array
    int max_in_rest = find_max(arr, n - 1);

    // Return the maximum between the last element and the maximum of the rest
    return (arr[n - 1] > max_in_rest) ? arr[n - 1] : max_in_rest;
}

int main() {
    int arr[] = {1, 9, 3, 7, 5 ,10,12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = find_max(arr, n);

    printf("The maximum number in the array is: %d\n", max);

    return 0;
}
