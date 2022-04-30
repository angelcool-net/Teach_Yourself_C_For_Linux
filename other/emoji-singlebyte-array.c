#include <stdio.h>
#include <string.h>

// ASCII characters are 1 byte, Spanish accented leters 2 bytes,
// Georgian characters 3 btyes and emojies are 4 bytes
char mystring[] = "Angel Cool á 🤪 😁 ა";

int main()
{
    // print total number of bytes in string
    printf("strlen of char mystring[]: %ld\n", strlen(mystring));

    // output string
    printf("Emoji : %s\n", mystring);


    // THIS IS NOT PRINTING EMOJIES ...(because single byte array I think)
    for (int i = 0; i < strlen(mystring); ++i) {
            printf("%lc,", mystring[i]);
    }

    printf("\n");

    return 0;
}