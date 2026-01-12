#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t lenght = 3;              // 3 Blöcke Anlegen mit bestimmter länge von INT
    size_t memoryReq = lenght * sizeof(int);    //länge in byte von INT

    printf("\nadress of lenght: %p", (void*)&lenght);
    printf("\nsizeof(int): %zu", sizeof(int)); //auch %zu möglich
    printf("\nmemoryReq: %zu", memoryReq);

    int *heapArray = (int*)malloc(memoryReq);

    for (size_t i = 0; i < lenght; i++)
    {
        heapArray[i] = (int)i*100;
    }

    for (size_t i = 0; i < lenght; i++)
    {
        printf("\nheapArray[%lld]: %d", i, heapArray[i]);
        printf("\nadress of heapArray[%lld]: %p", i, (void*)&heapArray[i]);

    }

    free(heapArray);
    heapArray = NULL;   //pointer würde sonst weiter auf adresse zeigen

    //inf. time to run

    return 0;
}