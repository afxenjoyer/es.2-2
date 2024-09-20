#include <stdio.h>

int main()
{
    float baseTriangolo;
    float altezzaTriangolo;
    float areaTriangolo;

    printf("Calcolo area del triangolo\n");

    printf("Qual è la base del triangolo di cui vuoi calcolare l'area (in cm)?\n");
    scanf("%f", &baseTriangolo);

    printf("Qual è l'altezza del triangolo di cui vuoi calcolare l'area (in cm)?\n");
    scanf("%f", &altezzaTriangolo);

    areaTriangolo = (baseTriangolo * altezzaTriangolo)/2;
    printf("L'area del triangolo è %f", areaTriangolo);

    return 0;
}
