#include<stdio.h>
#include<stdlib.h>

void CargaNums(int *N, int *V, int I);
void ComparacionValores(int *N, int *V, int I);

int main()
{
    int Nums[10]={0}, Valores[4]={0}, I=0;
    CargaNums(Nums, Valores, I);

    system("cls");

    ComparacionValores(Nums, Valores, I);

    return 0;
}

void CargaNums(int *N, int *V, int I)
{
    printf("Ingrese diez numeros\n");
    scanf("%d", &N[0]);
    V[1]=N[0];

    for (I=1; I<=9; I++)
    {
        scanf("%d", &N[I]);
        if (N[I]>V[0])
        {
            V[0]=N[I];
        }
        else if (N[I]<V[1])
        {
            V[1]=N[I];
        }
        else
        {
        }
    }
}

void ComparacionValores(int *N, int *V, int I)
{
    for (I=0; I<=9; I++)
    {
        if (N[I]==V[0])
        {
            V[2]+=1;
        }
        else
        {
            if (N[I]==V[1])
            {
                V[3]+=1;
            }
        }
    }
    printf("El numero mas alto (%d) se repite %d veces y el numero mas bajo (%d) se repite %d veces", V[0], V[2], V[1], V[3]);
}
