#include <stdio.h>

void rotate(int arr[], int n, int k) {
    k = k % n; // Adjust k if greater than n
    for (int i = 0; i < n; i++) {
        // Calculate new index for each element
        int newPos = (i + k) % n;
        // Use a temporary array to store the new values
        int temp[n];
        temp[newPos] = arr[i];
        // Copy back to original array
        for (int j = 0; j < n; j++) {
            arr[j] = temp[j];
        }
    }
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    rotate(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}