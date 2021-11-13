#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void RepeticionesV(char *C, int II, int L, int *V);
void MuestraR(int *V);

int main()
{
    char Cadena[20];
    int Vocales[5]={0}, L=0, II=0;
    printf("Ingrese su cadena de texto ");
    gets(Cadena);

    L=strlen(Cadena);

    RepeticionesV(Cadena, II, L, Vocales);
    MuestraR(Vocales);
    
    return 0;
}

void RepeticionesV(char *C, int II, int L, int *V)
{
    for (II=L-1; II>=0; II--)
    {
        switch (C[II])
        {
        case 65:
        case 97:
            V[0]+=1;
            break;
        
        case 69:
        case 101:
            V[1]+=1;
            break;
        
        case 73:
        case 105:
            V[2]+=1;
            break;

        case 79:
        case 111:
            V[3]+=1;
            break;

        case 85:
        case 117:
            V[4]+=1;
            break;

        default:
            break;
        }
    }
}

void MuestraR(int *V)
{
    printf("La vocal A se repite %d veces\n", V[0]);
    printf("La vocal E se repite %d veces\n", V[1]);
    printf("La vocal I se repite %d veces\n", V[2]);
    printf("La vocal O se repite %d veces\n", V[3]);
    printf("La vocal U se repite %d veces", V[4]);
}