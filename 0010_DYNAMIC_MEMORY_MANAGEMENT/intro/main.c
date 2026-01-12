#include <stdio.h>
#include <stdlib.h>

int main()
{
<<<<<<< HEAD
    size_t lenght = 3;              // 3 Blöcke Anlegen mit bestimmter länge von INT
    size_t memoryReq = lenght * sizeof(int);    //länge in byte von INT

    printf("\nadress of lenght: %p", (void*)&lenght);
    printf("\nsizeof(int): %zu", sizeof(int)); //auch %zu möglich
    printf("\nmemoryReq: %zu", memoryReq);

    int *heapArray = (int*)malloc(memoryReq);
=======
    size_t lenght = 3;
    size_t memoryReq = lenght * sizeof(int);

    printf("\nadresse of lenght: %p", (void*)&lenght);

    printf("\nsizeof(int): %llu", sizeof(int));
    printf("\nmemoryReq: %zu", memoryReq);

    int *heapArray = malloc(memoryReq);
>>>>>>> 80979e1d4df29fcfe1f9edab8a54d735e0d6f1f5

    for (size_t i = 0; i < lenght; i++)
    {
        heapArray[i] = (int)i*100;
    }

    for (size_t i = 0; i < lenght; i++)
    {
        printf("\nheapArray[%lld]: %d", i, heapArray[i]);
        printf("\nadress of heapArray[%lld]: %p", i, (void*)&heapArray[i]);
<<<<<<< HEAD

    }

    free(heapArray);
    heapArray = NULL;   //pointer würde sonst weiter auf adresse zeigen

    //inf. time to run
=======
    }

    free(heapArray);
    heapArray = (void*)0; // == NULL

    // inf. time to run
>>>>>>> 80979e1d4df29fcfe1f9edab8a54d735e0d6f1f5

    return 0;
}