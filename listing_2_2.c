#include <stdio.h>
#include <stdlib.h>

void display_usage(void);

int line;

// CLI arguments: 
// argc: argument count
// argv: array of arguments (pointers)
int main( int argc, char * argv[])
{
    char buffer[256];

    // file pointer
    FILE *fp;

    if( argc < 2 )
    {
        display_usage();
        return 1;
    }

    if( (fp = fopen( argv[1], "r")) == NULL )
    {
        fprintf( stderr, "Error opening file, %s!\n", argv[1]);
    }

    line = 1;

    // %4d - field width to align output
    while( fgets( buffer, 256, fp) != NULL )
        fprintf( stdout, "%4d:\t%s", line++, buffer);

    fclose(fp);

    return 0;
}

void display_usage(void)
{
    fprintf( stderr, "\nProper usage is: ");
    fprintf( stderr, "\n\nLIST_IT filename.ext\n");
}