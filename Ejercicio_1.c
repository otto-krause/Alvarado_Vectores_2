#include<stdio.h>
#include<stdlib.h>

void CargaNums(int *N, int I);
void MuestraNums(int *N, int I);

int main()
{
    int Nums[6]={0}, I=0;
    CargaNums(Nums, I);

    system("cls");

    MuestraNums(Nums, I);

    return 0;
}

void CargaNums(int *N, int I)
{
    printf("Ingrese seis numeros\n");
    for (I=0; I<=5; I++)
    {
        scanf("%d", &N[I]);
    }
}

void MuestraNums(int *N, int I)
{
    printf("Los numeros contenidos por el vector son:\n");
    for (I=0; I<=5; I++)
    {
        printf("%d\n", N[I]);
    }
}
