/*
    ed04_844318 - v0.0. - 03 / 09 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o ed04_844318 ed04_844318.c
    Windows: gcc -o ed04_844318 ed04_844318.c
    Para executar em terminal (janela de comandos):
    Linux : ./ed04_844318
    Windows: ed04_844318
    */
    // dependencias
    #include <stdio.h> // para as entradas e saidas
    #include <string.h>
    #include <stdlib.h>
/*
    Funcao principal.
    @return codigo de encerramento
    @param argc - quantidade de parametros na linha de comandos
    @param argv - arranjo com o grupo de parametros na linha de comandos
*/

// contar as letras maiusculas menores que M
int menorM( char c[] )
{
    int cont=0;
    for( int i = 0; i<strlen(c); i++)
    {
        if ( ( 'A' <= c[i] ) && ( c[i] < 'M' ) )
        {
            cont++;
        }
    }
    return cont;
}

// contar as letras minusculas menores que m
int menorm( char c[] )
{
    int cont=0;
    for( int i = 0; i<strlen(c); i++)
    {
        if ( ( 'a' <= c[i] ) && ( c[i] < 'm' ) )
        {
            cont++;
        }
    } 
    return cont;
}

// mostrar as letras minusculas menores que m
char* mostrarMenor_m( char c[] )
{
    char* menorm = (char*) malloc(101 * sizeof(char));
    int j = 0;
    
    for( int i = 0; i<strlen(c); i++)
    {
        if ( ( 'a' <= c[i] ) && ( c[i] < 'm' ) )
        {
            menorm[j] = c[i];
            j++;
        }
    }
    menorm[j] = '\0';
    return menorm;
}

// mostrar as letras maiusculas maiores que M
char* mostrarMenor_M( char c[] )
{
    char* menorM = (char*) malloc(101 * sizeof(char));
    int j = 0;
    
    for( int i = 0; i<strlen(c); i++)
    {
        if ( ( 'A' <= c[i] ) && ( c[i] < 'M' ) )
        {
            menorM[j] = c[i];
            j++;
        }
    } 
    menorM[j] = '\0';
    return menorM;
}


// mostrar as letras minusculas maiores que m
char* maiorm( char c[] )
{
    char* maiorm = (char*) malloc(101 * sizeof(char));
    int j = 0;
    
    for( int i = 0; i<strlen(c); i++)
    {
        if ( ( 'm' < c[i] ) && ( c[i] <= 'z' ) )
        {
            maiorm[j] = c[i];
            j++;
        }
    }
    maiorm[j] = '\0';
    return maiorm;
}

// mostrar as letras maiusculas maiores que M
char* maiorM( char c[] )
{
    char* maiorM = (char*) malloc(101 * sizeof(char));
    int j = 0;
    
    for( int i = 0; i<strlen(c); i++)
    {
        if ( ( 'M' < c[i] ) && ( c[i] <= 'Z' ) )
        {
            maiorM[j] = c[i];
            j++;
        }
    } 
    maiorM[j] = '\0';
    return maiorM;
}

// separar os simbolos em uma nova cadeia
char* separarSimb(char c[])
{
    char* simbolos = (char*) malloc(101 * sizeof(char));
    int j = 0;

    for (int i = 0; i < strlen(c); i++)
    {
        if ( !( ( '0' <= c[i]  ) && ( c[i] <= '9' ) || ( ( 'a' <= c[i] ) && ( c[i] <= 'z' ) )  || ( ( 'A' <= c[i] ) && ( c[i] <= 'Z' ) ) ) )
        {
            simbolos[j] = c[i];
            j++;
        }
    }
    simbolos[j] = '\0'; 
    return simbolos;
}

char* separarAlfanumericos(char c[])
{
    char* alfanumericos = (char*) malloc(101 * sizeof(char));
    int j = 0;

    for (int i = 0; i < strlen(c); i++)
    {
        if ( ( ( '0' <= c[i]  ) && ( c[i] <= '9' ) || ( ( 'a' <= c[i] ) && ( c[i] <= 'z' ) )  || ( ( 'A' <= c[i] ) && ( c[i] <= 'Z' ) ) ) )
        {
            alfanumericos[j] = c[i];
            j++;
        }
    }
    alfanumericos[j] = '\0'; 
    return alfanumericos;
}

int contarAlfanumericos(char c[])
{
    int cont = 0;

    for (int i = 0; i < strlen(c); i++)
    {
        if ( ( ( '0' <= c[i]  ) && ( c[i] <= '9' ) || ( ( 'a' <= c[i] ) && ( c[i] <= 'z' ) )  || ( ( 'A' <= c[i] ) && ( c[i] <= 'Z' ) ) ) )
        {
            cont++;
        }
    }
    return cont;
}

int contDigitosImpares( char c[] )
{
    int cont = 0;

    for (int i = 0; i < strlen(c) ; i++) 
    {
        if ( (c[i] >= '0') && (c[i] <= '9') ) {
            int digito = c[i];  
            if ( (digito % 2) != 0 ) 
            {
                cont++;
            }
        }
    }

    return cont;
} 


/*
01.) Incluir um método (0411) para:
- ler a quantidade de valores reais;
- ler dois valores reais para definir um intervalo fechado;
- ler tantos valores reais quanto a quantidade, um de cada vez e
- contar quantos desses valores estão dentro do intervalo, e quantos estão fora dele.
Exemplo: n = 10 e [ 13.6 : 22.6 ] com { 5.1, 10.5, 12.4, 14.2, 15.3, 18.3, 20.4, 21.7, 23.1, 24.2 }
*/
void metodo_0411()
{
    double a = 0;
    double b = 0;
    int n = 0;
    int contDentro = 0;
    int contFora = 0;

    printf("\nDigite o valor de a do intervalo fechado [a : b]: ");
    scanf("%lf", &a);
    printf("\nDigite o valor de b do intervalo fechado [a : b]: ");
    scanf("%lf", &b);

    printf("\nDigite o numero da quantidade de valores que deseja testar: ");
    scanf("%d", &n);

    double valores[n];

    for ( int i = 0; i < n; i++ )
    {
        printf("\nDigite o valor numero %d :", i+1);
        scanf("%lf", &valores[i]);

        if ( (a < valores[i]) && (valores[i] < b) )
        {
            contDentro++;
        }
        else
        {
            contFora++;
        }
    }

    printf("\n%d estao dentro do intervalo [ %.1lf : %.1lf ]", contDentro, a, b);
    printf("\n%d estao fora do intervalo [ %.1lf : %.1lf ]", contFora, a, b);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
02.) Incluir um método (0412) para:
- ler uma sequência de caracteres do teclado;
- contar e mostrar a quantidade de letras minúsculas menores que 'm'.
DICA: Definir uma função para determinar se um caractere é letra maiúscula.
Exemplo: sequência = 

*/
void metodo_0412()
{
    char caracteres[101]; 
    int cont = 0;

    printf("\nDigite a sequencia de caracteres que deseja(maximo 100 caracteres): ");
    scanf("%s", caracteres );

    printf("\nAs seguintes letras sao menores que m: ");
    for (int i = 0; i < strlen(caracteres); i++)
    {
        if( ( 'a' <= caracteres[i] ) && ( caracteres[i] < 'm' ) )
        {
            printf("\n%c", caracteres[i]);
            cont++;
        }
    }
    printf("\n%d letras sao menores que m.", cont);

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

/*
03.) Incluir um método (0413) para:
- ler uma sequência de caracteres do teclado;
- mostrar a quantidade de letras minúsculas menores que 'm',
- definir e usar uma função para receber uma cadeia de caracteres como parâmetro
e contar a quantidade desejada.
Exemplo: sequência = AaKkLmM0*Nx
*/
void metodo_0413()
{
    char caracteres[101]; 

    printf("\nDigite a sequencia de caracteres que deseja(maximo 100 caracteres): ");
    scanf("%s", caracteres );

    printf("\nAs seguintes letras sao menores que m: ");
    for (int i = 0; i < strlen(caracteres); i++)
    {
        if( ( 'a' <= caracteres[i] ) && ( caracteres[i] < 'm' ) )
        {
            printf("\n%c", caracteres[i]);
        }
    }
    printf("\n%d letras sao menores que m.",  menorm(caracteres));

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

/*
04.) Incluir um método (0414) para:
- ler uma sequência de caracteres do teclado;
- mostrar as letras minúsculas menores que 'm',
- definir e usar uma função para receber uma cadeia de caracteres como parâmetro
e separar em outra cadeia de caracteres os símbolos desejados.
DICA: Usar concatenação para juntar a uma cadeia inicialmente vazia
cada símbolo encontrado que satisfizer a condição.
Exemplo: sequência = AaKkLmM0*Nx
*/
void metodo_0414()
{
    char caracteres[101]; 
    int cont = 0;

    printf("\nDigite a sequencia de caracteres que deseja(maximo 100 caracteres): ");
    scanf("%s", caracteres );

    printf("\nAs seguintes letras sao menores que m: ");
    for (int i = 0; i < strlen(caracteres); i++)
    {
        if( ( 'a' <= caracteres[i] ) && ( caracteres[i] < 'm' ) )
        {
            printf("\n%c", caracteres[i]);
        }
    }
    printf("\nOs simbolos sao: \n%s", separarSimb(caracteres));

    printf("\n\nApertar ENTER para terminar.");
    getchar();    
}

/*
05.) Incluir um método (0415) para:
- ler uma sequência de caracteres do teclado;
- mostrar a quantidade de letras (tanto maiúsculas, quanto minúsculas) menores que 'M' e 'm'
contadas por uma função definida para receber uma cadeia de caracteres como parâmetro.
Exemplo: sequência = AaKkLmM0*Nx
*/
void metodo_0415()
{
    char caracteres[101]; 

    printf("\nDigite a sequencia de caracteres que deseja(maximo 100 caracteres): ");
    scanf("%s", caracteres );

    printf("\nExistem %d letras minusculas menores que m", menorm(caracteres));
    printf("\nExistem %d letras maiusculas menores que M", menorM(caracteres));

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

/*
06.) Incluir um método (0416) para:
- ler uma sequência de caracteres do teclado;
- mostrar as letras (tanto maiúsculas, quanto minúsculas) maiores que 'M' e 'm'
separadas por uma função definida para receber uma cadeia de caracteres como parâmetro.
Exemplo: sequência = AaKkLmM0*Nx
*/
void metodo_0416()
{
    char caracteres[101];
    
    printf("\nDigite a sequencia de caracteres que deseja(maximo 100 caracteres): ");
    scanf("%s", caracteres );

    char* menorm = mostrarMenor_m(caracteres);
    char* menorM = mostrarMenor_M(caracteres);

    printf("\nAs seguintes letras sao menores que m)");
    for ( int i = 0; i < strlen(menorm); i++ )
    {
        printf("\n%c", menorm[i]);
    }
    printf("\nAs seguintes letras sao menores que M)");
    for ( int i = 0; i < strlen(menorM); i++ )
    {
        printf("\n%c", menorM[i]);
    }

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

/*
07.) Incluir um método (0417) para:
- ler uma sequência de caracteres do teclado;
- mostrar a quantidade de dígitos ímpares em uma cadeia de caracteres contados por uma função
definida para receber uma cadeia de caracteres como parâmetro.
DICA: Considerar o valor inteiro do código equivalente (type casting) para teste.
Exemplo: sequência = A1b2C3d4E5f6
*/
void metodo_0417()
{
    char caracteres[101];
    
    printf("\nDigite a sequencia de caracteres que deseja(maximo 100 caracteres): ");
    scanf("%s", caracteres );

    int contImpar = contDigitosImpares(caracteres);

    printf("\nA quantidade de digitos impares em uma cadeia e: %d", contImpar);

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}



/*
08.) Incluir um método (0418) para:
- ler uma sequência de caracteres do teclado;
- mostrar todos os símbolos não alfanuméricos (letras e dígitos) em uma cadeia de caracteres
separados por meio de uma função.
Exemplo: sequência = (A1b2+C3d4)*E5f6
*/
void metodo_0418()
{
    char caracteres[101];
    
    printf("\nDigite a sequencia de caracteres que deseja(maximo 100 caracteres): ");
    scanf("%s", caracteres );

    char* simbolos = separarSimb(caracteres);

    for ( int i = 0; i < strlen(simbolos); i++)
    {
        printf("\n%c", simbolos[i]);
    } 

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}
/*
09.) Incluir um método (0419) para:
- ler uma sequência de caracteres do teclado;
- mostrar todos os símbolos alfanuméricos (letras e dígitos) em uma cadeia de caracteres
separados por meio de uma função.
Exemplo: sequência = (A1b2+C3d4)*E5f6
*/
void metodo_0419()
{
    char caracteres[101];
    
    printf("\nDigite a sequencia de caracteres que deseja(maximo 100 caracteres): ");
    scanf("%s", caracteres );

    char* alfanumericos = separarAlfanumericos(caracteres);

    for ( int i = 0; i < strlen(alfanumericos); i++)
    {
        printf("\n%c", alfanumericos[i]);
    } 

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

/*
10.) Incluir um método (0420) para:
- ler certa quantidade de cadeias de caracteres do teclado, uma por vez;
- mostrar e contar a quantidade de símbolos alfanuméricos (letras e dígitos) em cada palavra,
por meio de uma função, e calcular o total acumulado de todas as palavras.
Exemplo: sequências = { (A1b2+C3d4)*E5f6, [P&&Q]||[R&&!S], (a<b&&b<c) }
*/
void metodo_0420()
{
    char caracteres[101];
    int continuar = 0;
    int contadorPorPalavra = 0;
    int contadorGeral = 0;

    do
    {
        printf("\nDigite 0 para parar ou 1 para continuar: ");
        scanf("%d", &continuar);

        printf("\nDigite a sequencia de caracteres que deseja(maximo 100 caracteres): ");
        scanf("%s", caracteres );

        char* alfanumericos = separarAlfanumericos(caracteres);
        
        contadorPorPalavra = contarAlfanumericos(caracteres);

        for ( int i = 0; i < strlen(alfanumericos); i++)
        {
            printf("\n%c", alfanumericos[i]);
        } 
        printf("\nA palavra %s tem %d alfanumericos.", caracteres, contadorPorPalavra);

        contadorGeral = contadorGeral + contadorPorPalavra;


    } while (continuar != 0);

    printf("\nO total de alfanumericos contado e de %d", contadorGeral);
    

    printf("\n\nApertar ENTER para terminar.");
    getchar();
    getchar();
}

int main ( int argc, char* arcv [] )
{
    //identificar
    printf( "%s\n", "ed04_844318 - Programa = v0.0" );
    printf( "%s\n", "Autor: Felipe Henrique Oliveira Diniz" );
    printf( "\n" );

    //definir dados
    int opcao = 0;

    //acoes
    do
    {
        // para mostrar opcoes
        printf ( "\n%s\n", "Opcoes:" );
        printf ( "\n%s" , "0 - Terminar" );
        printf ( "\n%s" , "1 - Metodo 01" );
        printf ( "\n%s" , "2 - Metodo 02" );
        printf ( "\n%s" , "3 - Metodo 03" );
        printf ( "\n%s" , "4 - Metodo 04" );
        printf ( "\n%s" , "5 - Metodo 05" );
        printf ( "\n%s" , "6 - Metodo 06" );
        printf ( "\n%s" , "7 - Metodo 07" );
        printf ( "\n%s" , "8 - Metodo 08" );
        printf ( "\n%s" , "9 - Metodo 09" );
        printf ( "\n%s" , "10 - Metodo 10" );

        printf ( "\n" );

        // ler a opcao do teclado
        printf ( "\n%s", "Opcao = " );
        scanf ( "%d", &opcao );
        getchar( ); // para limpar a entrada de dados

        // para mostrar a opcao lida
        printf ( "\n%s%d", "Opcao = ", opcao );

        // escolher acao dependente da opcao
        switch ( opcao )
        {
            case 0: break; //nao fazer nada
            case 1: metodo_0411();     break;
            case 2: metodo_0412();     break;
            case 3: metodo_0413();     break;
            case 4: metodo_0414();     break;
            case 5: metodo_0415();     break;
            case 6: metodo_0416();     break;
            case 7: metodo_0417();     break;
            case 8: metodo_0418();     break;
            case 9: metodo_0419();     break;
            case 10: metodo_0420();     break;
    
           default: // comportamento padrao
            printf ( "\nERRO: Opcao invalida.\n" );
            break;
       }
    } while ( opcao != 0);

    //encerrar
    printf("\n\nApertar ENTER para terminar.");
    getchar();
    return (0);
}
/*
    ---------------------------------------------- documentacao complementar
    ---------------------------------------------- notas / observacoes / comentarios
    ---------------------------------------------- previsao de testes

*/