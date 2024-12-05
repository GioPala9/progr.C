#include <stdio.h>
#include <stdlib.h>
/* programma con ciclo for che stampa le tabelline*/ 

int main () {

    int i, j;
    for(j=0; j<11; j++) {

        for(i=0; i<11; i++)        /*oppure i=i+1*/
       {
        printf(" %d \t ", j*i);
       }
        printf("\n");
    }
    return 0;
    
}