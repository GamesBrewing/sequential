#include <stdio.h>
#include <time.h>

#define SIZE 10000

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i=0; i<SIZE; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main() {
    clock_t t = clock();
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i + 1; 
    }

    int totalSum = sumArray(arr, SIZE);
    printf("Total Sum: %d\n", totalSum);
    float totalTime = clock() - t;
    printf ("Program took %f seconds to execute", totalTime);
    return 0;
}
