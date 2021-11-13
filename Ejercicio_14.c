#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void CargaAlumnosNotas(char *AA, int *C, int I);

int main()
{
    char ApellidoA[20];
    int Control[5]={0}, I=0;
    CargaAlumnosNotas(ApellidoA, Control, I);

    
    return 0;
}

void CargaAlumnosNotas(char *AA, int *C, int I)
{
    printf("Ingrese el nombre y luego las notas de cada alumno ");

    for (I=1; I<=3; I++)
    {
        printf("\n\nAlumno %d: ", I);
        scanf("%s", &AA);

        if (AA[0]>=97 && AA[0]<=122)
        {
            AA[0]-=32;
        }

        for (I=1; I<=5; I++)
        {
            printf("Nota %d: ", I);
            scanf("%d", &C[1]);

            C[2]=C[1]+C[2];
            C[3]=C[2]/5;
        }

        C[4]=C[3]+C[4];
        C[5]=C[4]/3;
        C[2]=0;

        printf("%s tiene un promedio de %d", AA, C[3]);
    }
    printf("\n\nEl promedio del curso es %d", C[5]);
}