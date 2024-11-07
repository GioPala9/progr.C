#include <stdio.h>
#include <stdlib.h>
 /*
 programma che legga un dato dato dall'utente e che ne faccia la somma con una costante data
 */

int main () {
    int pippo;
    const int gigi = 4;
    printf("inserisci un numero intero");
    scanf("%d", &pippo);
    printf("%d + %d = %d", pippo, gigi, pippo+gigi);

}