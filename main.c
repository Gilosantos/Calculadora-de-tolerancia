/******************************************************************************
Autor: Gilson O. Santos
data: 16/07/2024

Calculadora de tolerância

*******************************************************************************/

#include <stdio.h>

int main()
{
    float vref,paramais,paramenos,tol,dec;
    char cont = '1';
    do{
    printf("Digite o valor de referencia: ");
    scanf("%f",&vref);
    //printf("\n%f", vref); Teste
    printf("\nInforme a tolerância desejada em valor percentual (%%): ");
    scanf("%f",&tol);
    dec = tol/100; //converte para decimal
    //printf("\ntol = %f", tol); Teste
    paramais = vref * (1+dec);
    paramenos = vref-(vref * dec);
    printf("\n\nValor de referencia: %.2f\n%.2f + %.2f%% = %.2f", vref, vref, tol, paramais);
    printf("\n%.2f - %.2f%% = %.2f\n", vref, tol, paramenos);
    printf("Continuar? 1 - sim\nOu qualquer outra tecla para encerrar: ");
    scanf(" %c",&cont);
    printf("\n\n");
    }while (cont=='1');
    return 0;
}