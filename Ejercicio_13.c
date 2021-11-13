#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void CadenaMM(char *C, int L, int I, int N);

int main()
{
    char Cadena[20];
    int L=0, I=0, N=0;
    
    printf("Ingrese una cadena de texto: ");
    gets(Cadena);

    L=strlen(Cadena);

    system("cls");

    CadenaMM(Cadena, L, I, N);

    return 0;
}

void CadenaMM(char *C, int L, int I, int N)
{
    for (I=L-1; I>=0; I--)
    {        
        if (C[I]>=65 && C[I]<=90)
        {
            C[I]+=32;
        }
        else
        {
            if (C[I]>=97 && C[I]<=122)
            {
                C[I]-=32;
            }
            else
            {
            }
        }
    }
    puts(C);
}
