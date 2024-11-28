/*
    ed05_844318 - v0.0. - 14 / 09 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o ed05_844318 ed05_844318.c
    Windows: gcc -o ed05_844318 ed05_844318.c
    Para executar em terminal (janela de comandos):
    Linux : ./ed05_844318
    Windows: ed05_844318
    */
    // dependencias
    #include <stdio.h> // para as entradas e saidas
    #include <string.h>
    #include <stdlib.h>
    #include<math.h>
/*
    Funcao principal.
    @return codigo de encerramento
    @param argc - quantidade de parametros na linha de comandos
    @param argv - arranjo com o grupo de parametros na linha de comandos
*/
void gerarMultiplo4(int n)
{
    double multiplo = 0;

    for(int i = 0; i < n; i++)
    {
        multiplo = multiplo + 4;
        printf("\n%.1lf", multiplo);
    }
}

void gerarMultiplo3e4(int n)
{
    double multiplo = 0;

    for(int i = 0; i < n; i++)
    {
        multiplo = multiplo + 12;
        printf("\n%.1lf", multiplo);
    }
}

double gerarPotencia3(int n)
{
    double multiplo = 1;

    for(int i = 0; i < n; i++)
    {
        multiplo = multiplo * 3;
    }
    return multiplo;
}

void exibirPotencia3(int n)
{
    for(int i = n; i > 0; i--)
    {
        printf("\n%.1lf", gerarPotencia3(i));
    }
}

void mostrarSequenciaInversos4(int n)
{
    int numerador = 1;
    int denominador = 0;

    for(int i = 0; i < n; i++)
    {
        denominador = denominador + 4;
        printf("\n%d / %d", numerador, denominador);
    }
} 

int multiplode4eNao5(int n)
{
    int multiplo = 0;
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        multiplo = multiplo + 4;
        if( (multiplo%5) == 0 ) { multiplo = multiplo + 4; }
        printf("\n%d", multiplo);
        soma = soma + multiplo;
    }
    return soma;    
}

int CalcularSequenciaInversos3Nao5(int n)
{
    int denominador = 0;

    for(int i = 0; i < n; i++)
    {
        denominador = denominador + 3;
        if( (denominador%5) == 0 ) { denominador = denominador + 3; }
    }
    return denominador;
} 

void MostrarSequenciaInversos3Nao5(int n)
{   
    double resultado = 0;
    for(int i = 1; i <= n; i++)
    {
        printf("\n1 / %d", CalcularSequenciaInversos3Nao5(i));
        resultado = 1.0 / CalcularSequenciaInversos3Nao5(i);
        printf("\n%lf", resultado);
    }
}

int adicao(int n)
{
    int resultado = 0;
    int soma = 4;

    for (int i = 0; i < n; i++)
    {
        soma = soma + i;
        resultado = resultado + soma;
    }
    return resultado;
}

int somaQuadrados(int n)
{
    int resultado = 4;
    int soma = 0;
    int quadrados = 0;

    for (int i = 0; i < n; i++)
    {
        quadrados = resultado * resultado;
        resultado = resultado + 1;
        soma = soma + quadrados;
    }
    return soma;
}


int somaInversos(int n)
{
    int soma = 4;

    for (int i = 0; i < n; i++)
    {
        soma = soma + i;
    }
    return soma;
}

void mostrarSomaInversos(int n)
{
    double resultado = 0.0;

    for (int i = n; i > 0; i--)
    {
        printf("\n1 / %d", somaInversos(i));
        resultado = 1.0 / somaInversos(i);
        printf("\n%lf", resultado);
    }
    
}


double fatorial(int n)
{   
    double resultado = 0;
    
    resultado = n * (n-1);
    
    for( int i = n-1; i > 1; i--)
    {
        resultado = resultado * (i-1);
    }
    return resultado;
}

void denominadoresCrescentes(double teste, int n)
{
    int denominador = 0;
    int num = 1;

    for(int i = 1; i <= n; i++){

        denominador = pow( teste,num );
        num = num + 2;        
        
        printf("\n1 / %d", denominador); 
    }
}

/*
01.) Incluir função e método (0511) para:
para ler uma quantidade inteira (n) do teclado e, mediante um procedimento,
testar a função para gerar valores múltiplos de 4 em ordem crescente.
Exemplo: n = 5 => { 4, 8, 12, 16, 20 }
*/
void metodo_0511()
{
    int n = 0;
    printf("\nDigite a quantidade de vezes que deseja gerar os multiplos de 4: ");
    scanf("%d", &n);

    gerarMultiplo4(n);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
02.) Incluir função e método (0512) para:
para ler uma quantidade inteira do teclado e, mediante um procedimento,
testar a função para gerar valores múltiplos de 3 e 4 em ordem crescente.
Exemplo: n = 5 => { 12, 24, 36, 48, 60 }
*/
void metodo_0512()
{
    int n = 0;
    printf("\nDigite a quantidade de vezes que deseja gerar os multiplos de 3 e 4: ");
    scanf("%d", &n);

    gerarMultiplo3e4(n);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
03.) Incluir função e método (0513) para:
para ler uma quantidade inteira do teclado e, mediante um procedimento,
testar a função para gerar potências de 3 em ordem decrescente.
Exemplo: n = 5 => { 243, 81, 27, 9, 3 }
*/
void metodo_0513()
{
    int n = 0;
    printf("\nDigite a quantidade de vezes que deseja gerar a potencia de 3 em ordem decrescente: ");
    scanf("%d", &n);

    exibirPotencia3(n);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
04.) Incluir função e método (0514) para:
para ler uma quantidade inteira do teclado e, mediante um procedimento,
testar a função para gerar valores crescentes nos denominadores
(sequência dos inversos) múltiplos de 4.
Exemplo: n = 5 => { 1/4, 1/8, 1/12, 1/16, 1/20 }
*/
void metodo_0514()
{
    int n = 0;
    printf("\nDigite a quantidade de vezes que deseja gerar valores crescentes nos denominadores: ");
    scanf("%d", &n);

    mostrarSequenciaInversos4(n);

    printf("\n\nPressione ENTER para terminar.");
    getchar();  
}

/*
05.) Incluir função e método (0515) para:
para ler um valor real real (x) do teclado;
para ler uma quantidade inteira do teclado e, mediante um procedimento,
testar a função para gerar valores pares crescentes nos denominadores
da sequência: 1 1/x1 1/x3 1/x5 ...
DICA: Usar da biblioteca <math.h> a função pow ( x, y ) para calcular a potência.
Exemplo: n = 5 => { 1, 1/x1, 1/x3, 1/x5, 1/x7 }
*/
void metodo_0515()
{
    int n = 0;
    double teste = 0;

    printf("\nDigite a quantidade de vezes que deseja gerar valores crescentes nos denominadores: ");
    scanf("%d", &n);
    printf("Digite um numero real: ");
    scanf("%lf", &teste);

    denominadoresCrescentes(teste, n); 

    printf("\n\nPressione ENTER para terminar.");
    getchar(); 
}


/*
06.) Incluir função e método (0516) para
calcular a soma dos primeiros valores positivos começando no valor 4,
múltiplos de 4 e não múltiplos de 5.
Testar essa função para quantidades diferentes e mostrar os resultados em outro método.
Exemplo: n = 5 => 4 + 8 + 12 + 16 + 24
*/
void metodo_0516()
{
    int n = 0;
    printf("\nDigite a quantidade de vezes que deseja gerar valores crescentes nos denominadores: ");
    scanf("%d", &n);

    printf("\nA soma é: %d", multiplode4eNao5(n));

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
07.) Incluir função e método (0517) para
calcular a soma dos inversos (1/x) dos primeiros valores positivos,
começando no valor 3, múltiplos de 3 e não múltiplos de 5.
Testar essa função para quantidades diferentes e
mostrar os resultados em outro método.
Exemplo: n = 5 => 1/3 + 1/6 + 1/9 + 1/12 + 1/18
*/
void metodo_0517()
{
    int n = 0;
    printf("\nDigite a quantidade de vezes que deseja calcular a soma dos inversos (1/x) dos primeiros valores positivos, comecando no valor 3, multiplos de 3 e nao multiplos de 5: ");
    scanf("%d", &n);

    MostrarSequenciaInversos3Nao5(n);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
08.) Incluir função e método (0518) para
calcular a soma da adição dos primeiros números naturais começando no valor 4.
Testar essa função para quantidades diferentes de valores e
mostrar os resultados em outro método.
Exemplo: n = 5 => 4 + 5 + 6 + 7 + 9 + 31
*/
void metodo_0518()
{
    int n = 0;
    printf("\nDigite a quantidade de vezes que deseja calcular a soma da adicao dos primeiros numeros naturais comecando no valor 4: ");
    scanf("%d", &n);

    printf("\n%d",adicao(n));

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
09.) Incluir função e método (0519) para
calcular a soma dos quadrados da adição dos números naturais começando no valor 4.
Testar essa função para quantidades diferentes de valores e
e mostrar os resultados em outro método.
Exemplo: n = 5 => 16 + 25 + 36 + 49 + 64
*/
void metodo_0519()
{
    int n = 0;
    printf("\nDigite a quantidade de vezes que deseja calcular a soma da adicao dos quadrados da adicao dos numeros naturais começando no valor 4: ");
    scanf("%d", &n);

    printf("\n%d",somaQuadrados(n));

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}


/*
10.) Incluir função e método (Exemplo0520) para
calcular a soma dos inversos (1/x) das adições de números naturais terminando no valor 4.
Testar essa função para quantidades diferentes de valores
e mostrar os resultados em outro método.
Exemplo: n = 5 => 1/14 + 1/10 + 1/7 + 1/5 + 1/4
*/
void metodo_0520()
{
    int n = 0;
    printf("\nDigite a quantidade de vezes que deseja calcular a soma dos inversos (1/x) das adicoes de numeros naturais terminando no valor 4: ");
    scanf("%d", &n);

    mostrarSomaInversos(n);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

//EXTRAS

/*
E1.) Incluir função e método (Exemplo05E1) para
ler um número inteiro do teclado (n) e,
mediante o uso da função, calcular e mostrar o fatorial desse valor em outro método:
n! = n * (n-1) * (n-2) * ... * 3 * 2 * 1 se n>0
*/
void metodo_05E1()
{
    int n = 0;
    printf("\nDigite o valor que deseja calcular o fatorial: ");
    scanf("%d", &n);

    printf("\n%.0lf", fatorial(n));

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
E2.) Incluir função e método (Exemplo05E2) para
ler uma quantidade inteira do teclado (n) e,
mediante o uso da função, calcular e mostrar o resultado em outro método de
f ( n ) = (1+3/2!) * (1+5/4!) * (1+7/8!) * ...
*/
void metodo_05E2()
{
    printf("\nNão consegui fazer");
}



int main ( int argc, char* arcv [] )
{
    //identificar
    printf( "%s\n", "ed05_844318 - Programa = v0.0" );
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
            case 1: metodo_0511();     break;
            case 2: metodo_0512();     break;
            case 3: metodo_0513();     break;
            case 4: metodo_0514();     break;
            case 5: metodo_0515();     break;
            case 6: metodo_0516();     break;
            case 7: metodo_0517();     break;
            case 8: metodo_0518();     break;
            case 9: metodo_0519();     break;
            case 10: metodo_0520();     break;
            case 11: metodo_05E1();     break;
            case 12: metodo_05E2();     break;
    
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