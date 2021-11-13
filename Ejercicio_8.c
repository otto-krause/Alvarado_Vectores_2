#include<stdio.h>
#include<stdlib.h>

void CargaNums(int *N, int I);
void ComparacionNums(int *N, int I, int C);
void MuestraNums(int *N, int I);

int main()
{
    int Nums[8]={0}, C=0, I=0;
    CargaNums(Nums, I);
    ComparacionNums(Nums, I, C);

    system("cls");

    MuestraNums(Nums, I);

    return 0;
}

void CargaNums(int *N, int I)
{
    printf("Ingrese siete numeros\n");
    for (I=1; I<=7; I++)
    {
        scanf("%d", &N[I]);
    }
}

void ComparacionNums(int *N, int I, int C)
{
    for (C=1; C<=7; C++)
    {
        for (I=0; I<=6; I++)
        {
            if (N[I]>N[I+1])
            {
            N[0]=N[I];
            N[I]=N[I+1];
            N[I+1]=N[0];
            }
            else
            {
            }
        }
    }
}

void MuestraNums(int *N, int I)
{
    printf("El vector ordenado de forma ascendente es:\n");
    for (I=1; I<=7; I++)
    {
        printf("%d\n", N[I]);
    }
}
