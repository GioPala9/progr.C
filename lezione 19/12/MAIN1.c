#include <stdio.h>
#include <stdlib.h>

float somma(float num1, float num2)
{
    float ris = num1+num2;
    return ris;
}
float differenza(float num1, float num2)
{
    float ris = num1-num2;
    return ris;
}

int main () {

    printf("rislutato: %.2f\n", somma(5.4, 4.67));
    printf("rislutato: %.2f\n", differenza(5.4, 4.67));


}

            