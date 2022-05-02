#include <stdio.h>

// declare an array with 20 int elements
int myArray[20];

// declare a pointer to int
int *myPointer;

// declare function prototype
void assignValue(int *x);

int main()
{
    // initialize pointer, the name of the array is the address of the first element
    // myPointer = &myArray[0]; //would be the same.
    myPointer = myArray;

    // call the function...
    assignValue(myPointer);
    // assignValue(&myArray[0]); // the same

    printf("5th element's value via the array: %d\n", myArray[4]);

    printf("5th element's value via the pointer: %d\n", myPointer[4]);

    printf("5th element's value via the pointer, a different way: %d\n", *(&myPointer[4]));

    printf("5th element's value via the pointer, another different way: %d\n", *(myArray+4));

    printf("5th element's value via the pointer, yet another different way: %d\n", *(myPointer+4));
}

void assignValue(int *x)
{
    // ...assign a value to the 5th element
    x[4] = 201770;
}