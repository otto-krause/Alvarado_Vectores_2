#include<stdio.h>
#include<stdlib.h>

void CargaNums(int *N, int I, int *D);
void MuestraNums(int *N, int *D, int I);

int main()
{
    int Nums[7]={0}, DNumM[2]={0}, I=0;
    CargaNums(Nums, I, DNumM);

    system("cls");

    MuestraNums(Nums, DNumM, I);

    return 0;
}

void CargaNums(int *N, int I, int *D)
{
    printf("Ingrese siete numeros\n");
    for (I=0; I<=6; I++)
    {
        scanf("%d", &N[I]);

        if (N[I]>D[0])
        {
            D[0]=N[I];
            D[1]=I;
        }
    }
}

void MuestraNums(int *N, int *D, int I)
{
    printf("El numero mas alto del vector es %d y esta ubicado en la posicion %d\n", D[0], D[1]);
    printf("\nLos numeros contenidos por el vector son:\n");
    for (I=0; I<=6; I++)
    {
        printf("%d\n", N[I]);
    }
}
