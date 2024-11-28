/*
    ed06_844318 - v0.0. - 19 / 09 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o ed06_844318 ed06_844318.c
    Windows: gcc -o ed06_844318 ed06_844318.c
    Para executar em terminal (janela de comandos):
    Linux : ./ed06_844318
    Windows: ed06_844318
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
void printar(int x)
{
	 printf ("%d\n", x);
}

/*
01.) Incluir um método recursivo (0611) para
ler um valor inteiro do teclado e chamar procedimento recursivo para
mostrar essa quantidade em valores múltiplos de 4, em ordem crescente, começando no valor 4.
Exemplo: valor = 5 => { 4, 8, 12, 16, 20 }
*/

void procedimento_recusivo0611(int soma4, int n)
{
    if(n == 0)
    {}
    else
    {
        printar(soma4);
        procedimento_recusivo0611(soma4 + 4, n - 1);
    }
}


void metodo_0611()
{
    int n = 0;
    int base = 4;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    procedimento_recusivo0611(base, n);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
02.) Incluir um método recursivo (0612) para
ler um valor inteiro do teclado e chamar procedimento recursivo para
mostrar essa quantidade em múltiplos de 4, em ordem decrescente, encerrando no valor 4.
Exemplo: valor = 5 => { 20, 16, 12, 8, 4 }
*/

void procedimento_recusivo0612(int soma4, int n)
{
    if(n == 0)
    {}
    else
    {
        procedimento_recusivo0612(soma4 + 4, n - 1);
        printar(soma4);
    }
}
void metodo_0612()
{
    int n = 0;
    int base = 4;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    procedimento_recusivo0612(base, n);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
03.) Incluir um método recursivo (0613) para
ler um valor inteiro do teclado e chamar procedimento recursivo para
mostrar essa quantidade em valores da sequência de inversos dos múltiplos de 4, começando em 1.
DICA: Separar o primeiro do restante.
Exemplo: valor = 5 => { 1/1, 1/4, 1/8, 1/12, 1/16. }
*/
void printar_02(int x)
{
    if(x == 0)
    {
        printf("1 / 1\n");
    }
    else
    {
    printf ("1 / %d\n", x);
    }
}

void procedimento_recusivo0613(int soma4, int n)
{
    if(n == 0)
    {}
    else
    {
        printar_02(soma4);
        procedimento_recusivo0613(soma4 + 4, n - 1);
    }
}

void metodo_0613()
{
    int n = 0;
    int base = 0;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    procedimento_recusivo0613(base, n);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
04.) Incluir um método recursivo (0614) para
ler um valor inteiro do teclado e chamar procedimento recursivo para
mostrar essa quantidade em valores da sequência de inversos dos múltiplos de 4, terminando em 1.
Exemplo: valor = 5 => { 1/16, 1/12, 1/8, 1/4, 1/1 }
*/
void procedimento_recusivo0614(int soma4, int n)
{
    if(n == 0)
    {}
    else
    {
        procedimento_recusivo0614(soma4 + 4, n - 1);
        printar_02(soma4);
    }
}

void metodo_0614()
{
    int n = 0;
    int base = 0;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    procedimento_recusivo0614(base, n);

    printf("\n\nPressione ENTER para terminar.");
    getchar();  
}

/*
05.) Incluir uma função recursiva (0615) para
calcular a soma de valores gerados pela adição dos primeiros valores pares positivos ao valor 4.
Testar essa função para quantidades diferentes.
Exemplo: valor = 5 => 4 + 6 + 10 + 16 + 24
*/
int procedimento_recusivo0615(int n, int base, int condicao)
{
    if(n > 0)
    {
        printar(base);
        return base + procedimento_recusivo0615(n-1, base + condicao, condicao + 2);
    }
}

void metodo_0615()
{
    int n = 0;
    int base = 4;
    int condicao = 2;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    procedimento_recusivo0615(n, base, condicao);

    printf("\n\nPressione ENTER para terminar.");
    getchar();  
}


/*
06.) Incluir uma função recursiva (0616) para
calcular a soma dos inversos (1/x) dos primeiros valores pares positivos múltiplos do valor 4.
Testar essa função para quantidades diferentes.
Exemplo: valor = 5 => 1/4 + 1/6 + 1/10 + 1/16 + 1/24
*/
int procedimento_recusivo0616(int n, int base, int condicao)
{
    if(n > 0)
    {
        printar_02(base);
        return base + procedimento_recusivo0616(n-1, base + condicao, condicao + 2);
    }
}

void metodo_0616()
{
    int n = 0;
    int base = 4;
    int condicao = 2;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    procedimento_recusivo0616(n, base, condicao);

    printf("\n\nPressione ENTER para terminar.");
    getchar();  
}

/*
07.) Incluir um método recursivo (0617) para
ler uma cadeia de caracteres e chamar procedimento recursivo para
mostrar cada símbolo separadamente, um por linha.
Exemplo: sequência = "abcde
*/
void procedimento_recursivo0617(char *ptr, int n)
{
    if(n >= 0)
    {
        printf("\n%c", *ptr);
        procedimento_recursivo0617(ptr+1, n-1);
    }
}


void metodo_0617()
{
    char caracter[100];
    int n;
    printf("\nDigite uma sequencia de caracteres: ");
    scanf("%s", caracter);

    n = strlen(caracter);

    procedimento_recursivo0617(&caracter, n);

    printf("\n\nPressione ENTER para terminar.");
    getchar();  
}

/*
08.) Incluir uma função recursiva (0618) para
contar os dígitos com valores ímpares em uma cadeia de caracteres.
Testar essa função para cadeias de diferentes tamanhos.
Exemplo: sequência = "P4LaVr@1"
*/
int procedimento_recursivo0618(char *ptr, int n)
{
    if(n >= strlen(ptr))
    {
        return 0;
    }

    if ( (ptr[n] >= '0') && (ptr[n] <= '9') && ((ptr[n] - '0') % 2 != 0 ) )  // utilizar quando é necessario converter para numero inteiro(ptr[n] - '0')
    {
        return 1 + procedimento_recursivo0618(ptr, n+1);
    } 
    else 
    {
        return procedimento_recursivo0618(ptr, n+1);
    }
}


void metodo_0618()
{
    char caracter[100];
    int n = 0;
    int resultado;
    printf("\nDigite uma sequencia de caracteres: ");
    scanf("%s", caracter);

    resultado = procedimento_recursivo0618(caracter, n);

    printf("\n%d", resultado);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
09.) Incluir uma função recursiva (0619) para
calcular a quantidade de maiúsculas maiores que 'M' em uma cadeia de caracteres.
Testar essa função para cadeias de diferentes tamanhos.
Exemplo: sequência = "P4LaVr@1"
*/
int procedimento_recursivo0619(char *ptr, int n)
{
    if(n >= strlen(ptr))
    {
        return 0;
    }

    if ( (ptr[n] >= 'A') && (ptr[n] < 'M')  )  // utilizar quando é necessario converter para numero inteiro(ptr[n] - '0')
    {
        return 1 + procedimento_recursivo0619(ptr, n+1);
    } 
    else 
    {
        return procedimento_recursivo0619(ptr, n+1);
    }
}

void metodo_0619()
{
    char caracter[100];
    int n = 0;
    int resultado;
    printf("\nDigite uma sequencia de caracteres: ");
    scanf("%s", caracter);

    resultado = procedimento_recursivo0619(caracter, n);

    printf("\n%d", resultado);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}


/*
10.) Incluir uma função recursiva (0620) para
calcular certo termo par da série de Fibonacci começando em 1.
Testar essa função para quantidades diferentes.
DICA: Separar o cálculo do termo e o teste para verificar se é par.
Exemplo: valor = 3 => 2+8+34
*/
int fibonacciPar(int n, int x1, int  x2) 
{
    int termo = x1 + x2;
    if (n <= 1) 
    {
        return n;
    }
    if ((termo %2) == 0)
    {
        printar(termo);
        return termo + fibonacciPar(n-1, x2, termo);
    }
    else
    {
        return fibonacciPar(n, x2, termo);
    }
}

void metodo_0620()
{
    int n = 0;
    printf("\nDigite um numero real: ");
    scanf("%d", &n);

    printf("\n%d", fibonacciPar(n, 1, 1));


    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

//EXTRAS

/*
E1.) Incluir uma função recursiva (06E1) para
calcular o valor da função definida abaixo,
lidos os valores de (x) e (n) do teclado:
f ( x, n ) = 1 + x2 + x4 + x6 + x
8 +
*/
void metodo_06E1()
{
    printf("\nNão consegui fazer");
}

/*
E2.) Incluir uma função recursiva (06E2) para
para calcular o valor indicado abaixo,
lido o número de termos (n) do teclado:
e = 1 + 2/3! + 5/7! + 12/15! + 27/31! + ...
*/
void metodo_06E2()
{
    printf("\nNão consegui fazer");
}



int main ( int argc, char* arcv [] )
{
    //identificar
    printf( "%s\n", "ed06_844318 - Programa = v0.0" );
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
        printf ( "\n%s" , "EXTRAS:" );
        printf ( "\n%s" , "11 - Metodo E1" );
        printf ( "\n%s" , "12 - Metodo E2" );

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
            case 1: metodo_0611();     break;
            case 2: metodo_0612();     break;
            case 3: metodo_0613();     break;
            case 4: metodo_0614();     break;
            case 5: metodo_0615();     break;
            case 6: metodo_0616();     break;
            case 7: metodo_0617();     break;
            case 8: metodo_0618();     break;
            case 9: metodo_0619();     break;
            case 10: metodo_0620();     break;
            case 11: metodo_06E1();     break;
            case 12: metodo_06E2();     break;
    
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