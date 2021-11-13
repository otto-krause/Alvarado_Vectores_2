#include<stdio.h>
#include<stdlib.h>

void Gastos(int *N, int GMayor, int I);

int main()
{
    int NGasto[11]={0}, GMayor=0, I=0;
    Gastos(NGasto, GMayor, I);

    return 0;
}

void Gastos(int *N, int GMayor, int I)
{
    printf("Ingrese los gastos de cada uno de los diez dias\n");
    for (I=1; I<=10; I++)
    {
        scanf("%d", &N[I]);
        if (N[I]>GMayor)
        {
            GMayor=N[I];
        }

        N[0]=N[0]+N[I];
    }

    system("cls");

    printf("El mayor gasto fue de %d y el monto total de las compras fue de %d", GMayor, N[0]);
}
