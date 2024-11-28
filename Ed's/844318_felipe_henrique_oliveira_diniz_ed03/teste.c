#include <stdio.h> // para as entradas e saidas
#include <string.h>

char separarSimb(char caracter[])
{
    char simbolos[101];
    char letras[101];
    int j = 0;
    int k = 0;

    for (int i = 0; i < strlen(caracter); i++)
    {
        if ( ( '0' <= caracter[i]  ) && ( caracter[i] <= '9' ) || ( ( 'a' <= caracter[i] ) && ( caracter[i] <= 'z' ) )  || ( ( 'A' <= caracter[i] ) && ( caracter[i] <= 'Z' ) ) )
        {
            letras[k] = caracter[i];
            k++;
        }
        else
        {
          simbolos[j] = caracter[i];
            j++;
        }
    }
    return simbolos[101];
}

void metodo_0414()
{
    char caracteres[101];
    int cont = 0;
    char simbolos[101];
    char letras[101];
    int j = 0;
    int k = 0;

    printf("\nDigite a sequencia de caracteres que deseja(maximo 100 caracteres): ");
    scanf("%s", &caracteres );


    for (int i = 0; i < strlen(caracteres); i++)
    {
        if ( ( '0' <= caracteres[i]  ) && ( caracteres[i] <= '9' ) || ( ( 'a' <= caracteres[i] ) && ( caracteres[i] <= 'z' ) )  || ( ( 'A' <= caracteres[i] ) && ( caracteres[i] <= 'Z' ) ) )
        {
            letras[k] = caracteres[i];
            k++;
        }
        else
        {
          simbolos[j] = caracteres[i];
            j++;
        }
    }
}

int main()
{
    metodo_0414();
}

