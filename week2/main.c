#include <stdio.h>
#include <limits.h>

// Find minimum value in an array of integers
int FindMinimum(const int* signals, int size) {
    if (size <= 0) {
        return INT_MAX;
    }
    
    int min = signals[0];
    for (int i = 1; i < size; i++) {
        if (signals[i] < min) {
            min = signals[i];
        }
    }
    
    return min;
}

// Find maximum value in an array of integers
int FindMaximum(const int* signals, int size) {
    if (size <= 0) {
        return INT_MIN;
    }
    
    int max = signals[0];
    for (int i = 1; i < size; i++) {
        if (signals[i] > max) {
            max = signals[i];
        }
    }
    
    return max;
}

// Find average value in an array of integers
int CalculateAverage(const int* signals, int size) {
    if (size <= 0) {
        return INT_MIN;
    }
    
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += signals[i];
    }
    int avg = sum/size;
    
    return avg;
}

int main() {
    // Example signal data
    int signals[] = {5, -3, 10, 1, 8, -7, 4, 2};
    int size = sizeof(signals) / sizeof(signals[0]);
    
    int min_value = FindMinimum(signals, size);
    int max_value = FindMaximum(signals, size);
    int avg_value = CalculateAverage(signals, size);
    
    printf("Signals: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", signals[i]);
    }
    printf("\n");
    
    printf("Minimum value: %d\n", min_value);
    printf("Maximum value: %d\n", max_value);
    printf("Average value: %d\n", avg_value);

    return 0;
}