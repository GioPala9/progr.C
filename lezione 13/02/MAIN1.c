#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *gigio_ptr;

    gigio_ptr = fopen("c:\\ziocane.txt", "w");

    fprintf(gigio_ptr, "Ciao\n");
    fclose(gigio_ptr);

    


}