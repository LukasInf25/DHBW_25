#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int number = 0;
    printf("\nEnter the number of Elements: ");
    scanf("%d", &number);

    if (number <= 0)
    {
        printf("Invalid input! The number of elements must be greater than zero.");
        return 0;
    }
    
    printf("\nEnter %d integers: \n", number);

    int memoryReq = number * sizeof(int);
    int *heapArray = (int*)malloc(memoryReq);

    if (heapArray == NULL)
    {
        printf("Memory allocation failed!");
        return 0;
    }
    
    int sum = 0;
    
    for (size_t i = 0; i < number; i++)
    {
        scanf("%d ", &heapArray[i]);
    }

    for (size_t i = 0; i < number; i++)
    {
        sum += heapArray[i];
    }
    
    printf("The sum of the Array Elements is: %d", sum);

    return 0;
}
