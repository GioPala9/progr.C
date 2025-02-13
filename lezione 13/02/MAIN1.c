#include <stdio.h>
#include <stdlib.h>

int main () 
{
    FILE *gigio_ptr;

    gigio_ptr = fopen("ziocane.txt", "w");

    fclose(gigio_ptr);
    
}