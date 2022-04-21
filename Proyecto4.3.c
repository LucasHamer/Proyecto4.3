#include<stdio.h>
#include<stdlib.h>

int main()
{
    int NUMuno,NUMdos,NUMtres;

    printf("Digite el primer numero entero: ");
    scanf("%d",&NUMuno);
    printf("Digite el segundo numero entero: ");
    scanf("%d",&NUMdos);
    printf("Digite el tercer numero entero: ");
    scanf("%d",&NUMtres);

    if(NUMuno==NUMdos+NUMtres)
    {
        printf("El primer numero es igual a la suma de los otros dos numeros");
    }
    else if(NUMdos==NUMuno+NUMtres)
    {
        printf("El segundo numero es igual a la suma de los otros dos numeros");
    }
    else if(NUMtres==NUMuno+NUMdos)
    {
        printf("El tercer numero es igual a la suma de los otros dos numeros");
    }
    else
    {
        printf("Ninguno es igual a la suma de los otros numeros");
    }

    return 0;
}
