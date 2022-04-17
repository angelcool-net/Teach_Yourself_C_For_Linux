#include <stdio.h>

int main(void)
{
    int count;

    printf("Hello!\n");

    printf("Counting...!\n");

    for(count=0;count<5;count++)
    {
        printf("count = %d\n", count);
    }

    printf("Done\n\n");

    return 0;
}

// Compile command and output:

// [acool@localhost Teach_Yourself_C_For_Linux]$ gcc -Wall -ggdb hello2.c -o hello2
// [acool@localhost Teach_Yourself_C_For_Linux]$ ./hello2 
// Hello!
// Counting...!
// count = 0
// count = 1
// count = 2
// count = 3
// count = 4
// Done
// 
// [acool@localhost Teach_Yourself_C_For_Linux]$
// [acool@localhost Teach_Yourself_C_For_Linux]$


// Debugging with ddd and gdb
// [acool@localhost Teach_Yourself_C_For_Linux]$ ddd hello2
// ...