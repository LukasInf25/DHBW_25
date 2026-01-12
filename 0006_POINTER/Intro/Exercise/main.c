#include <stdio.h>

int main()
{
    int aValue = 42;
    int *myPointer = &aValue;

    printf("\nInitial Value: \t\t\t%d", aValue);
    printf("\nValue through Pointer: \t\t%d", *myPointer);

    *myPointer = 20;

    printf("\nModiefied value  of pointer: \t%d", *myPointer);

    int *yourPointer = myPointer;

    printf("\nAdress of aValue: \t\t%p", &aValue);
    printf("\nAdress of myPointer: \t\t%p", &myPointer);
    printf("\nAdress of yourPointer: \t\t%p", &yourPointer);



    printf("\nValue through yourPointer: \t%d", *yourPointer);







    return 0;
}