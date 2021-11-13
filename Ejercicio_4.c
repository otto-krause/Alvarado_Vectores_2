#include<stdio.h>
#include<stdlib.h>

void CargaNums(int *N, int I);
void ComparacionNums(int *N, int *R, int I);
void PosicionNums(int *N, int I);

int main()
{
    int Nums[10]={0}, RNums[2]={0}, I=0;
    CargaNums(Nums, I);
    ComparacionNums(Nums, RNums, I);

    printf("En la primera secuencia el numero %d fue ingresado %d veces y el numero %d %d veces\n", Nums[8], RNums[0], Nums[9], RNums[1]);
    PosicionNums(Nums, I);

    return 0;
}

void CargaNums(int *N, int I)
{
    printf("Ingrese ocho numeros\n");
    for (I=0; I<=7; I++)
    {
        scanf("%d", &N[I]);
    }

    system("cls");

    printf("Ingrese dos numeros\n");

    for (I=8; I<=9; I++)
    {
        scanf("%d", &N[I]);
    }

    system("cls");
}

void ComparacionNums(int *N, int *R, int I)
{
    for (I=0; I<=7; I++)
    {
        if (N[I]==N[8])
        {
            R[0]+=1;
        }
        else if (N[I]==N[9])
        {
            R[1]+=1;
        }
    }
}

void PosicionNums(int *N, int I)
{
    printf("\nLas posiciones en las que se repite el numero %d son\n", N[8]);
    for (I=0; I<=7; I++)
    {
        if (N[I]==N[8])
        {
            printf("%d\n", I);
        }
    }

    printf("\nLas posiciones en las que se repite el numero %d son\n", N[9]);
    for (I=0; I<=7; I++)
    {
        if (N[I]==N[9])
        {
            printf("%d\n", I);
        }
    }
}
