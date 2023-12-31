#include <stdio.h>

int function(int arr[], int size, int k) {
    int leftside = 0;
    int rightside = size - 1;

    while (leftside <= rightside) {
        int midpoint = leftside + (rightside - leftside) / 2;

        if (arr[midpoint] == k) {
            return midpoint; 
        } else if (arr[midpoint] < k) {
            leftside = midpoint + 1; 
        } else {
            rightside = midpoint - 1; 
        }
    }

    return -1; 
}

int main() {
    int size, k;
    printf("Name: Ananta Walli");
    printf("\nEnrollment Number: A2305221322");
    printf("\nEnter the size of the array(It should be sorted): ");
    scanf("%d", &size);

    int arr[size];
    printf("Please enter the %d elements:\n", size);

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Please enter the element to be searched: ");
    scanf("%d", &k);

    int index = function(arr, size, k);

    if (index != -1) {
        printf("The element found at position %d.\n", index);
    } else {
        printf("The element is not present.\n");
    }

    return 0;
}
