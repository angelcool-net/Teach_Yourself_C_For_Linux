#include <stdio.h>

// declare an array with 20 int elements
int myArray[20];

// declare a pointer to int
int *myPointer;

int main()
{
    // initialize pointer, the name of the array is the address of the first element
    // myPointer = &myArray[0]; //would be the same.
    myPointer = myArray;

    // assign a value to the 5th element
    myPointer[4] = 201769;

    printf("5th element's value via the array: %d\n", myArray[4]);

    printf("5th element's value via the pointer: %d\n", myPointer[4]);

    printf("5th element's value via the pointer, a different way: %d\n", *(&myPointer[4]));

    printf("5th element's value via the pointer, another different way: %d\n", *(myArray+4));

    printf("5th element's value via the pointer, yet another different way: %d\n", *(myPointer+4));
}