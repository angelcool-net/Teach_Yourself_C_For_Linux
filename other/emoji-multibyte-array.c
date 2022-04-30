#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

// multibyte array, each character is 4 bytes long
wchar_t mystring[] = L"Angel Cool á 🤪 😁 ა";

// [acool@localhost other]$ gcc -Wall -ggdb emoji-multibyte-array.c -o emoji-multibyte-array
int main()
{
    setlocale(LC_ALL,"");

    // print total number of characters in string
    wprintf(L"wcslen of wchar_t mystring[]: %ld\n", wcslen(mystring));

    // output string
    wprintf(L"%ls\n",mystring);

    // print one character
    wprintf(L"Emoji : %lc\n", mystring[13]);

    // print all 
    for (int i = 0; i < wcslen(mystring); ++i)
    {
        wprintf(L"%lc,", mystring[i]);
    }

    wprintf(L"\n");

    // size in bytes of string, it also includes 4 bytes for the null (\0) characters at the end it seems 
    wprintf(L"Size in bytes of mystring[]: %d\n", sizeof(mystring));

    // print size of wchar_t data type
    wprintf(L"wchar_t is %d bytes long!\n", sizeof(wchar_t));

    return 0;
}