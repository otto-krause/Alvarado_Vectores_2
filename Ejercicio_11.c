#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void CadenaInvertida(char *C, char *CI, int L, int I, int N);

int main()
{
    char Cadena[20], CadenaI[20];
    int L=0, I=0, N=0;

    printf("Ingrese una cadena de texto: ");
    gets(Cadena);

    L=strlen(Cadena);

    system("cls");

    CadenaInvertida(Cadena, CadenaI, L, I, N);

    return 0;
}

void CadenaInvertida(char *C, char *CI, int L, int I, int N)
{
    for (I=L-1; I>=0; I--)
    {
        CI[N]=C[I];
        N++;
    }

    puts(CI);
}
