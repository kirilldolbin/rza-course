#include <stdio.h>
#include <limits.h>

// Find minimum value in an array of integers
int FindMinimum(const int *signals, int size)
{
    if (size <= 0)
    {
        return INT_MAX;
    }

    int min = signals[0];
    for (int i = 1; i < size; i++)
    {
        if (signals[i] < min)
        {
            min = signals[i];
        }
    }

    return min;
}

// Find maximum value in an array of integers
int FindMaximum(const int *signals, int size)
{
    if (size <= 0)
    {
        return INT_MIN;
    }

    int max = signals[0];
    for (int i = 1; i < size; i++)
    {
        if (signals[i] > max)
        {
            max = signals[i];
        }
    }

    return max;
}

// Find average value in an array of integers
int CalculateAverage(const int *signals, int size)
{
    if (size <= 0)
    {
        return INT_MIN;
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += signals[i];
    }
    int avg = sum / size;

    return avg;
}

//  FindMinIndex
int FindMinIndex(const int *signals, int size, int min_value)
{
    if (size <= 0)
    {
        return INT_MIN;
    }
    int min_index = 0;
    for (int i = 0; i < size; i++)
    {
        if (signals[i] == min_value)
        {
            min_index = i;
        }
    }

    return min_index;
}

//  KeyboardInput
// int KeyboardInput()
// {
//     int size;
//     printf("Enter size: ");
//     scanf("%d", &size);
//     if (size <= 0){
//         printf("Invalid array size!\n");
//         return;
//     }

//     int signals[size];
//     printf("Enter signals: ");
//     for (int i = 0; i < size; i++){
//         printf("signals[%d] = ", i);
//         scanf("%d", &signals[i]);
//     }
    
//     return signals;
// }

int main()
{
    // Example signal data

    // int signals[] = {5, -3, 10, 1, 8, -7, 4, 2};
    // int size = sizeof(signals) / sizeof(signals[0]);

     int size;
    printf("Enter size: ");
    scanf("%d", &size);
    if (size <= 0){
        printf("Invalid array size!\n");
        return 0;
    }

    int signals[size];
    printf("Enter signals: ");
    for (int i = 0; i < size; i++){
        printf("signals[%d] = ", i);
        scanf("%d", &signals[i]);
    }


    int min_value = FindMinimum(signals, size);
    int max_value = FindMaximum(signals, size);
    int avg_value = CalculateAverage(signals, size);
    int min_index = FindMinIndex(signals, size, min_value);

    printf("Signals: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", signals[i]);
    }
    printf("\n");

    printf("Minimum value: %d\n", min_value);
    printf("Maximum value: %d\n", max_value);
    printf("Average value: %d\n", avg_value);
    printf("Minimum indexe: %d\n", min_index);
    printf("Size: %d\n", size);

    return 0;
}