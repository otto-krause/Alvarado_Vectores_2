#include<stdio.h>
#include<stdlib.h>

void CargaNums(int *N, int *P, int *M, int I);
void ParImpar(int *P, int *M, int I);

int main()
{
    int Nums[20]={0}, PNums[20]={0}, MNums[20]={0}, I=0;
    CargaNums(Nums, PNums, MNums, I);

    system("cls");

    ParImpar(PNums, MNums, I);

    return 0;
}

void CargaNums(int *N, int *P, int *M, int I)
{
    printf("Ingrese veinte numeros\n");
    for (I=0; I<=19; I++)
    {
        scanf("%d", &N[I]);
    }

    for (I=0; I<=19; I++)
    {
        if (N[I]%2==0)
        {
            P[I]=N[I];
        }
        else
        {
            M[I]=N[I];
        }
    }
}

void ParImpar(int *P, int *M, int I)
{
    printf("Los numeros pares son\n");
    for (I=0; I<=19; I++)
    {
        if (P[I]==0)
        {
        }
        else
        {
            printf("%d\n", P[I]);
        }

    }

    printf("\nLos numeros impares son\n");
    for (I=0; I<=19; I++)
    {
        if (M[I]==0)
        {
        }
        else
        {
            printf("%d\n", M[I]);
        }
    }
}
