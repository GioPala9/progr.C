#include <stdio.h>
#include <stdlib.h>
/* 
esercizio con variabili float e int con stampa della somma delle due 
*/

int main () {
    float Pippo = 4.2;
    int Lallo = 2;
    float OUT = Pippo+Lallo;
    printf("%f + %d = %f", Pippo, Lallo, OUT);
    return 0;
}