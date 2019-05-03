#include <stdio.h>

void main()

{

    float kilos_comprados;
    float gramos_comprados;

    printf("Cuantos kilos de pan compraste? ");
    scanf("%f",&kilos_comprados);

    gramos_comprados = kilos_comprados * 1000;

    printf("Compraste %f gramos de pan.",gramos_comprados);



}