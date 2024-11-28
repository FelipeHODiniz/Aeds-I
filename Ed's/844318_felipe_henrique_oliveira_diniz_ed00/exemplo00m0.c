/**
   IO - v2023-1_0.1 - 11 / 08 / 2024
   Author: Felipe Henrique Oliveira Diniz
*/

#include <stdio.h>   // Para entrada e saidas
#include <string.h>  //Para trabalhar cadeia de caracteres
#include <math.h>    // para operacoes matematicas
#include <ctype.h>   //Para trabalhar aspectos das strings
#include <stdbool.h> //Para trabalhar condicoes
#include "io.h"      //Uso opcional de leitura de dados

//----------------------------------------------//

void metodo_01()
{

    printf("EXEMPLO101 - PRIMEIRO EXEMPLO EM C");
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar

} // fim do metodo 
/*
Digite a opcao: 1
EXEMPLO101 - PRIMEIRO EXEMPLO EM C
PRESSIONAR <Enter> PARA TERMINAR.
*/

void metodo_02()
{

    system("clear"); // (Linux ) para limpar a tela
    // (dependente do sistema operacional)
    printf("EXEMPLO102 - PRIMEIRO EXEMPLO EM C\n");
    getchar(); // para esperar
    // (dependente do sistema operacional);
} // fim do metodo 

void metodo_03()
{

    IO_clrscr; // funcao para limpar a tela
    printf("EXEMPLO103 - PRIMEIRO EXEMPLO EM C");
    printf("\n"); // para mudar de linha
    printf("MATRICULA: ______ ALUNO : __________________");
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_04()
{
    printf("EXEMPLO104 - PRIMEIRO EXEMPLO EM C");
    printf("\n"); // para mudar de linha (="\n")
    printf("MATRICULA: ______ ALUNO : __________________");
    printf("\n"); // para mudar de linha
    printf("PRESSIONAR <Enter> PARA TERMINAR. ");
    getchar(); // para esperar
} // fim do metodo 

void metodo_05()
{

    printf("EXEMPLO105 - PRIMEIRO EXEMPLO EM C");
    printf("\nMATRICULA: ______ ALUNO : __________________");
    printf("\nEXEMPLOS DE VALORES : ");
    printf("\nCARACTERE : %c", 'A'); // letra ou simbolo
    printf("\nINTEIRO : %d", 10);    // valor sem parte fracionaria
    printf("\nREAL : %f", 3.1415);   // valor com parte fracionaria
    printf("\nPRESSIONAR <Enter> PARA TERMINAR. ");
    getchar(); // para esperar
} // fim do metodo 

void metodo_06()
{
    const float PI = 3.1415; // definicao de macro (nome para substituir valor)
    printf("EXEMPLO106 - PRIMEIRO EXEMPLO EM C ");
    printf("\nMATRICULA: ______ ALUNO : __________________");
    printf("\nEXEMPLOS DE VALORES : ");
    printf("\nCARACTERE : %c", 'A'); // letra ou simbolo
    printf("\nINTEIRO : %d", 10);    // valor sem parte fracionaria
    printf("\nREAL : %f", PI);       // emprego de macro
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo 

void metodo_07()
{
    // definicao de constante
    const float PI = 3.14; // com nome e tipo (melhor)
    printf("EXEMPLO107 - PRIMEIRO EXEMPLO EM C");
    printf("\nMATRICULA: ______ ALUNO : __________________");
    printf("\nEXEMPLOS DE VALORES : ");
    printf("\nCARACTERE : %c", 'A'); // letra ou simbolo
    printf("\nINTEIRO : %d", 10);    // valor sem parte fracionaria
    printf("\nREAL : %f", PI);       // constante real
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_08()
{

    // definicao de constante
    const float PI = 3.14; // com nome e tipo (melhor)
    // definicao de variavel real
    float X = 10.01; // com atribuicao de valor inicial
    printf("EXEMPLO108 - PRIMEIRO EXEMPLO EM C");
    printf("\nMATRICULA: ______ ALUNO : __________________");
    printf("\nEXEMPLOS DE VALORES : ");
    printf("\nCARACTERE : %c", 'A'); // letra ou simbolo
    printf("\nINTEIRO : %d", 10);    // valor sem parte fracionaria
    printf("\nREAL : %f", PI);       // constante real
    printf("\nREAL : %f", X);        // variavel real
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_09()
{
    // definicao de constante
    const float PI = 3.14; // com nome e tipo (melhor)
    // definicao de variavel real
    float X = 10.01;
    // definicao de variavel inteira
    int I = 10;
    printf("EXEMPLO109 - PRIMEIRO EXEMPLO EM C");
    printf("\nMATRICULA: 1507863 ALUNO : Felipe Henrique Oliveira Diniz");
    printf("\nEXEMPLOS DE VALORES : ");
    printf("\nINTEIRO : %i", I);
    printf("\nREAL : %f", X);
    printf("\nREAL : %f", PI);
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_10()
{
    // definicao de constante
    const double PI = 3.14; // com nome e tipo (melhor)
    // definicao de variavel real
    float X = 10.01;
    // definicao de variavel inteira
    int I = 10;
    // definicao de variavel caractere
    char N = '\n'; // mudar de linha
    printf("EXEMPLO110 - PRIMEIRO EXEMPLO EM C");
    printf("\nMATRICULA: ______ ALUNO : __________________");
    printf("%c%s", N, "EXEMPLOS DE VALORES : ");
    printf("%c%s%i", N, "INTEIRO : ", I);
    printf("%c%s%f", N, "REAL : ", X);
    printf("%c%s%lf", N, "REAL : ", PI);
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_11()
{
    // PROGRAMA PARA LER E IMPRIMIR UM VALOR INTEIRO
    // VARIAVEL:
    int X = 0;
    printf("EXEMPLO201 - LER E IMPRIMIR UM VALOR INTEIRO");
    printf("\nFORNECER UM VALOR INTEIRO QUALQUER: ");
    scanf("%d", &X);
    getchar(); // limpar a entrada de dados
    printf("\nO VALOR DIGITADO FOI: %d", X);
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_12()
{
    // PROGRAMA PARA LER E IMPRIMIR UM VALOR REAL
    // VARIAVEL:
    double X = 0.0;
    printf("EXEMPLO202 - LER E IMPRIMIR UM VALOR REAL");
    printf("\nFORNECER UM VALOR REAL QUALQUER: ");
    scanf("%lf", &X);
    getchar(); // limpar a entrada de dados
    printf("\nO VALOR DIGITADO FOI: %lf", X);
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");

} // fim do metodo

void metodo_13()
{
    // PROGRAMA PARA LER E IMPRIMIR UM CARACTERE
    // VARIAVEL:
    char X = '0';
    printf("EXEMPLO203 - LER E IMPRIMIR UM CARACTERE");
    printf("\nFORNECER UM CARACTERE QUALQUER: ");
    scanf("%c", &X);
    getchar(); // limpar a entrada de dados
    printf("\nO VALOR DIGITADO FOI: %c", X);
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_14()
{
    // PROGRAMA PARA LER E IMPRIMIR, NO MAXIMO, 10 CARACTERES
    // VARIAVEL:
    char X[10];
    printf("EXEMPLO204 - LER E IMPRIMIR, NO MAXIMO, 09 CARACTERES");
    printf("\nDIGITE, NO MAXIMO, 09 CARACTERES QUAISQUER: ");
    scanf("%s", X); // OBS.: NAO usar o (&) para caracteres !
    getchar();      // limpar a entrada de dados
    printf("\nFOI DIGITADO: %s", X);
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_15()
{
    // PROGRAMA PARA LER E SOMAR DOIS VALORES INTEIROS
    // VARIAVEIS:
    int X = 0, Y = 0, Z = 0;
    printf("EXEMPLO205 - LER E SOMAR DOIS VALORES INTEIROS");
    printf("\nFORNECER UM VALOR INTEIRO QUALQUER: ");
    scanf("%d", &X);
    getchar(); // limpar a entrada de dados
    printf("\nFORNECER OUTRO VALOR INTEIRO QUALQUER: ");
    scanf("%d", &Y);
    getchar(); // limpar a entrada de dados
    Z = X + Y;
    printf("\nA SOMA DOS DOIS = %d", Z);
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_16()
{
    // PROGRAMA PARA LER E SUBTRAIR DOIS VALORES REAIS
    // VARIAVEIS:
    float X = 0.0, Y = 0.0, Z = 0.0;
    printf("EXEMPLO206 - LER E SUBTRAIR DOIS VALORES REAIS");
    printf("\nFORNECER UM VALOR REAL QUALQUER: ");
    scanf("%f", &X);
    getchar(); // limpar a entrada de dados
    printf("\nFORNECER OUTRO VALOR REAL QUALQUER: ");
    scanf("%f", &Y);
    getchar(); // limpar a entrada de dados
    Z = X - Y;
    printf("\nA DIFERENCA ENTRE OS DOIS = %f", Z);
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_17()
{
    // PROGRAMA PARA OPERAR VALORES LOGICOS
    // VARIAVEIS:
    bool X = false, Y = false, Z = false;
    printf("EXEMPLO207 - OPERAR VALORES LOGICOS");
    X = true;
    Y = false;
    Z = X || Y; // X ou Y
    printf("\nA DISJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z);
    Z = X && Y; // X e Y
    printf("\nA CONJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z);
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_18()
{
    // PROGRAMA PARA CALCULAR A VELOCIDADE DE UM VEICULO
    // VARIAVEIS:
    double D = 0.0, // Distancia
        T = 0.0,    // Tempo
        V = 0.0;    // Velocidade
    printf("EXEMPLO208 - CALCULAR A VELOCIDADE DE UM VEICULO");
    printf("\nFORNECER UMA DISTANCIA QUALQUER EM METROS: ");
    scanf("%lf", &D);
    getchar(); // limpar a entrada de dados
    printf("\nFORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS: ");
    scanf("%lf", &T);
    getchar(); // limpar a entrada de dados
    V = D / T;
    printf("\nV = D / T = %lf%s", V, " m/s ");
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_19()
{
    // PROGRAMA PARA COMPARAR CARACTERES COM UMA SENHA
    // CONSTANTE:
    const char SENHA[5] = "XXXX";
    // VARIAVEL:
    char S[10];
    printf("EXEMPLO209 - COMPARAR CARACTERES COM UMA SENHA");
    printf("\nFORNECER UMA CADEIA DE CARACTERES QUALQUER: ");
    scanf("%s", S); // OBS.: NAO usar o (&) para caracteres !
    getchar();      // limpar a entrada de dados
    printf("\nA COMPARACAO COM A SENHA = %d", (strcmp(S, SENHA) == 0) ? 1 : 0);
    // strcmp(S1,S2) compara S1 com S2
    // igual a 0: S1 = S2 => 1 ( verdadeiro )
    // diferente: S1 <> S2 => 0 ( falso )
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_20()
{
    // PROGRAMA PARA CALCULAR O ARCO TRIGONOMETRICO DE UM SENO
    // CONSTANTE:
    const double PI = 3.14;
    // VARIAVEIS:
    double ARCO = 0.0,
           COSSENO = 0.0,
           SENO = 0.0,
           TANGENTE = 0.0;
    printf("EXEMPLO210 - CALCULAR O ARCO TRIGONOMETRICO DE UM SENO");
    printf("\nFORNECER O VALOR DO SENO: ");
    scanf("%lf", &SENO);
    getchar(); // limpar a entrada de dados
    COSSENO = sqrt(1.0 - pow(SENO, 2));
    TANGENTE = SENO / COSSENO;
    ARCO = atan(TANGENTE);
    printf("\nO ARCO TRIGONOMETRICO EM GRAUS = %lf", (ARCO * 180.0 / PI));
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo
/* Utilizar gcc exemplo00m0.c -o exemplo00m0 -lm por causa do math.h
 */

void metodo_21()
{
    // PROGRAMA PARA LER UM VALOR INTEIRO E VERIFICAR SE E' ZERO
    // VARIAVEL:
    int X = 0;
    printf("EXEMPLO301 - LER E TESTAR UM VALOR INTEIRO");
    printf("\nFORNECER UM VALOR INTEIRO QUALQUER: ");
    scanf("%d", &X);
    getchar(); // limpar a entrada de dados
    if (X == 0)
        printf("\nO VALOR DIGITADO FOI ZERO");
    else
        printf("\nO VALOR DIGITADO NAO FOI ZERO");
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_22()
{
    // PROGRAMA PARA LER UM REAL E TESTAR SE DIFERENTE DE ZERO
    // VARIAVEL:
    float X = 0.0;
    printf("EXEMPLO302 - LER E TESTAR UM VALOR REAL");
    printf("\nFORNECER UM VALOR REAL DIFERENTE DE ZERO: ");
    scanf("%f", &X);
    getchar(); // limpar a entrada de dados
    if (X != 0.0)
        printf("\nO VALOR DIGITADO FOI DIFERENTE DE ZERO");
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_23()
{
    // PROGRAMA PARA LER CARACTERE E VERIFICAR SE E' UM ALGARISMO
    // VARIAVEL:
    char X = '0';
    printf("EXEMPLO303 - LER E TESTAR UM CARACTERE");
    printf("\nFORNECER UM ALGARISMO QUALQUER: ");
    scanf("%c", &X);
    getchar(); // limpar a entrada de dados
    if (X >= '0' && X <= '9')
    {
        printf("\nO VALOR DIGITADO FOI UM ALGARISMO");
        printf("\nO ALGARISMO DIGITADO FOI: %c", X);
    } // if ALGARISMO
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_24()
{
    // PROGRAMA PARA LER CARACTERE E TESTAR SE NAO E' ALGARISMO
    // VARIAVEL:
    char X = '0';
    printf("EXEMPLO304 - LER E TESTAR CARACTERE");
    printf("\nFORNECER UM CARACTERE QUALQUER: ");
    scanf("%c", &X);
    getchar(); // limpar a entrada de dados
    if (!(X >= '0' && X <= '9'))
    {
        printf("\nNAO FOI DIGITADO UM ALGARISMO");
        printf("\nFOI DIGITADO O CARACTERE: %c", X);
    } // if NAO ALGARISMO
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_25()
{
    // PROGRAMA PARA LER E TESTAR A IGUALDADE DE DOIS INTEIROS
    // VARIAVEIS:
    int X = 0, Y = 0;
    printf("EXEMPLO305 - LER E TESTAR DOIS VALORES INTEIROS");
    printf("\nFORNECER UM VALOR INTEIRO QUALQUER: ");
    scanf("%d", &X);
    getchar(); // limpar a entrada de dados
    printf("\nFORNECER OUTRO VALOR INTEIRO QUALQUER: ");
    scanf("%d", &Y);
    getchar(); // limpar a entrada de dados
    if (X == Y)
        printf("\nDOIS VALORES IGUAIS");
    else
    {
        printf("\n%d", X);
        printf(" DIFERENTE DE ");
        printf("%d", Y);
    }
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar();
    getchar(); // para esperar
} // fim do metodo

void metodo_26()
{
    // PROGRAMA PARA LER E TESTAR DOIS VALORES REAIS
    // VARIAVEIS:
    double X = 0.0, Y = 0.0;
    printf("EXEMPLO306 - LER E TESTAR DOIS VALORES REAIS");
    printf("\nFORNECER UM VALOR REAL QUALQUER: ");
    scanf("%lf", &X);
    getchar(); // limpar a entrada de dados
    printf("\nFORNECER OUTRO VALOR REAL QUALQUER: ");
    scanf("%lf", &Y);
    getchar(); // limpar a entrada de dados
    if (!(X == Y))
    {
        printf("\n%lf", X);
        printf(" DIFERENTE DE ");
        printf("%lf", Y);
    }
    else
    {
        printf("VALORES IGUAIS");
    } // if VALORES DIFERENTES
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_27()
{
    // PROGRAMA PARA TRATAR ALTERNATIVAS COM VALORES LOGICOS
    // VARIAVEIS:
    int X = 0, Y = 0;
    bool Z = false;
    printf("EXEMPLO307 - TRATAR VALORES LOGICOS");
    printf("\nFORNECER UM VALOR INTEIRO QUALQUER: ");
    scanf("%d", &X);
    getchar(); // limpar a entrada de dados
    printf("\nFORNECER OUTRO VALOR INTEIRO QUALQUER: ");
    scanf("%d", &Y);
    getchar(); // limpar a entrada de dados
    Z = (X == Y);
    if (Z)
        printf("VALORES IGUAIS");
    else
        printf("VALORES DIFERENTES");
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_28()
{
    // PROGRAMA PARA LER E TESTAR UMA LETRA
    // VARIAVEL:
    char X = '0';
    printf("EXEMPLO308 - LER E TESTAR UMA LETRA");
    printf("\nFORNECER UMA LETRA QUALQUER: ");
    scanf("%c", &X);
    getchar(); // limpar a entrada de dados
    if (X >= 'A' && X <= 'Z')
        printf("FOI DIGITADA UMA LETRA MAIUSCULA");
    else if (X >= 'a' && X <= 'z')
        printf("FOI DIGITADA UMA LETRA MINUSCULA");
    else
        printf("NAO FOI DIGITADA UMA LETRA");
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_29()
{
    // PROGRAMA PARA COMPARAR CARACTERES < , = , >
    // VARIAVEL:
    char X = '0';
    printf("EXEMPLO309 - COMPARAR CARACTERES < , = , >");
    printf("\nFORNECER UM DOS CARACTERES CITADOS: ");
    scanf("%c", &X);
    getchar(); // limpar a entrada de dados
    switch (X)
    {
    case '>':
        printf("FOI DIGITADO O SINAL DE MAIOR");
        break;
    case '=':
        printf("FOI DIGITADO O SINAL DE IGUAL");
        break;
    case '<':
        printf("FOI DIGITADO O SINAL DE MENOR");
        break;
    default:
        printf("FOI DIGITADO UM OUTRO CARACTERE QUALQUER");
    } // COMPARACAO DE X COM < , = , >
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_30()
{
    // PROGRAMA PARA IDENTIFICAR CARACTERES
    // VARIAVEL
    char X = '0';
    printf("EXEMPLO310 - IDENTIFICAR CARACTERES");
    printf("\nFORNECER UM CARACTERE QUALQUER: ");
    scanf("%c", &X);
    getchar(); // limpar a entrada de dados
    switch (X)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("FOI DIGITADO UMA VOGAL");
        break;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("FOI DIGITADO UM ALGARISMO");
        printf("\nO NUMERO CORRESPONDENTE = %d", (X - 48));
        break;
    default:
        printf("FOI DIGITADO UM OUTRO CARACTERE QUALQUER");
    } // IDENTIFICACAO DE UM CARACTERE
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_31()
{
    // PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
    // VARIAVEIS :
    int X = 0,
        CONTADOR = 0;
    printf("EXEMPLO401 - LER E IMPRIMIR 03 VALORES INTEIROS");
    printf("\n"); // mudar de linha
    CONTADOR = 1;
    while (CONTADOR <= 3) // REPETIR
    {
        printf("\n"); // mudar de linha
        printf("%d. FORNECER UM VALOR INTEIRO : ", CONTADOR);
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
        printf("\nO VALOR DIGITADO FOI : %d\n", X);
        CONTADOR = CONTADOR + 1;
    } // ENQUANTO ( CONTADOR <= 3 )
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_32()
{
    // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
    // VARIAVEIS :
    int X = 0, N = 0, CONTADOR = 0;
    printf("EXEMPLO402 - LER E IMPRIMIR (N) VALORES INTEIROS\n");
    printf("\nFORNECER O NUMERO DE VEZES (N) : ");
    scanf("%d", &N);
    getchar(); // limpar a entrada de dados
    CONTADOR = 1;
    while (CONTADOR <= N)
    {
        printf("\n%d", CONTADOR);
        printf(" FORNECER UM VALOR INTEIRO QUALQUER : ");
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
        printf("\nO VALOR DIGITADO FOI : %d\n", X);
        CONTADOR = CONTADOR + 1;
    } // ENQUANTO ( CONTADOR <= N )
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_33()
{
    // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
    // VARIAVEIS :
    int X = 0, N = 0;
    printf("EXEMPLO403 - LER E IMPRIMIR (N) VALORES INTEIROS\n");
    printf("\nFORNECER O NUMERO DE VEZES (N) : ");
    scanf("%d", &N);
    getchar();    // limpar a entrada de dados
    while (N > 0) // REPETIR
    {
        printf("\n%d", N);
        printf(" FORNECER UM VALOR INTEIRO QUALQUER : ");
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
        printf("\nO VALOR DIGITADO FOI : %d\n", X);
        N = N - 1;
    } // ENQUANTO N > 0
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_34()
{
    // PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
    // VARIAVEIS :
    int X = 0,
        CONTADOR = 0;
    printf("EXEMPLO404 - LER E IMPRIMIR 03 VALORES INTEIROS\n");
    for (CONTADOR = 1; CONTADOR <= 3; CONTADOR = CONTADOR + 1)
    {
        printf("\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR);
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
        printf("\nO VALOR DIGITADO FOI : %d\n", X);
    } // PARA CONTADOR EM [1:3]
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_35()
{
    // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
    // VARIAVEIS :
    int X = 0,
        N = 0,
        CONTADOR = 0;
    printf("EXEMPLO405 - LER E IMPRIMIR (N) VALORES INTEIROS\n");
    printf("\nFORNECER O NUMERO DE VEZES (N) : ");
    scanf("%d", &N);
    getchar(); // limpar a entrada de dados
    for (CONTADOR = 1; CONTADOR <= N; CONTADOR++)
    {
        printf("\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR);
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
        printf("\nO VALOR DIGITADO FOI : %d", X);
    } // PARA CONTADOR EM [1:N]
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_36()
{
    // PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
    // VARIAVEIS :
    int X = 0,
        CONTADOR = 0;
    printf("EXEMPLO406 - LER E IMPRIMIR 03 VALORES INTEIROS\n");
    CONTADOR = 1;
    do // REPETIR
    {
        printf("\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR);
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
        printf("\nO VALOR DIGITADO FOI : %d\n", X);
        CONTADOR = CONTADOR + 1;
    } while (CONTADOR <= 3); // ATE' ( CONTADOR > 3 )
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_37()
{
    // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
    // VARIAVEIS :
    int X = 0,
        CONTADOR = 0;
    printf("EXEMPLO407 - LER E IMPRIMIR (N) VALORES INTEIROS\n");
    printf("\nFORNECER O NUMERO DE VEZES (N) : ");
    scanf("%d", &CONTADOR);
    getchar(); // limpar a entrada de dados
    do         // REPETIR
    {
        printf("\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR);
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
        printf("\nO VALOR DIGITADO FOI : %d\n", X);
        CONTADOR = CONTADOR - 1;
    } while (CONTADOR > 0); // ATE' ( CONTADOR <= 3 )
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_38()
{
    // PROGRAMA PARA LER E IMPRIMIR INTEIROS DIFERENTES DE ZERO
    // VARIAVEL :
    int X = 0;
    printf("EXEMPLO408 - LER E IMPRIMIR INTEIROS NAO NULOS\n");
    printf("\nFORNECER UM VALOR INTEIRO (0 = PARAR) : ");
    scanf("%d", &X);
    getchar();     // limpar a entrada de dados
    while (X != 0) // REPETIR
    {
        printf("\nO VALOR DIGITADO FOI : %d\n", X);
        printf("\nDIGITE UM VALOR INTEIRO QUALQUER : ");
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
    } // ENQUANTO X DIFERENTE DE ZERO
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_39()
{
    // PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO
    // VARIAVEL :
    int X = 0;
    printf("EXEMPLO409 - PARA LER UM INTEIRO NAO NULO\n");
    printf("\nFORNECER UM VALOR DIFERENTE DE ZERO : ");
    scanf("%d", &X);
    getchar();     // limpar a entrada de dados
    while (X == 0) // REPETIR
    {
        printf("\nFORNECER UM VALOR DIFERENTE DE ZERO : ");
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
    } // ENQUANTO X IGUAL A ZERO
    printf("\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n");
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_40()
{
    // PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO
    // VARIAVEL :
    int X = 0;
    printf("EXEMPLO410 - LER UM INTEIRO NAO NULO\n");
    do // REPETIR
    {
        printf("\nFORNECER UM VALOR DIFERENTE DE ZERO : ");
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
    } while (X == 0); // ATE' X DIFERENTE DE ZERO
    printf("\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n");
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo

void metodo_41()
{
    printf("\n");
    printf("\nCHAMADO O PROCEDIMENTO P1 SEM PARAMETROS");
    printf("\n");
    // PROGRAMA PARA CHAMADA DE PROCEDIMENTO SEM PARAMETROS
    printf("EXEMPLO0501 - CHAMADA A UM PROCEDIMENTO");
    printf("\n");
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
} // fim do metodo
/* nao entendi muito bem como faço isso.
 */

void metodo_42()
{

    getchar(); // para esperar
} // fim do metodo

void metodo_43()
{

    getchar(); // para esperar
} // fim do metodo

void metodo_44()
{

    getchar(); // para esperar
} // fim do metodo

void metodo_45()
{

    getchar(); // para esperar
} // fim do metodo

void metodo_46()
{

    getchar(); // para esperar
} // fim do metodo

void metodo_47()
{

    getchar(); // para esperar
} // fim do metodo

void metodo_48()
{

    getchar(); // para esperar
} // fim do metodo

void metodo_49()
{

    getchar(); // para esperar
} // fim do metodo

void metodo_50()
{

    getchar(); // para esperar
} // fim do metodo

int main()
{

    int opcao = 1;

    do
    {

        printf("\nDigite a opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {

        case 0:
            printf("\nEncerrar . . . ");
            break;

        case 1:
            metodo_01();
            break;

        case 2:
            metodo_02();
            break;

        case 3:
            metodo_03();
            break;

        case 4:
            metodo_04();
            break;

        case 5:
            metodo_05();
            break;

        case 6:
            metodo_06();
            break;

        case 7:
            metodo_07();
            break;

        case 8:
            metodo_08();
            break;

        case 9:
            metodo_09();
            break;

        case 10:
            metodo_10();
            break;

        case 11:
            metodo_11();
            break;

        case 12:
            metodo_12();
            break;

        case 13:
            metodo_13();
            break;

        case 14:
            metodo_14();
            break;

        case 15:
            metodo_15();
            break;

        case 16:
            metodo_16();
            break;

        case 17:
            metodo_17();
            break;

        case 18:
            metodo_18();
            break;

        case 19:
            metodo_19();
            break;

        case 20:
            metodo_20();
            break;

        case 21:
            metodo_21();
            break;

        case 22:
            metodo_22();
            break;

        case 23:
            metodo_23();
            break;

        case 24:
            metodo_24();
            break;

        case 25:
            metodo_25();
            break;

        case 26:
            metodo_26();
            break;

        case 27:
            metodo_27();
            break;

        case 28:
            metodo_28();
            break;

        case 29:
            metodo_29();
            break;

        case 30:
            metodo_30();
            break;

        case 31:
            metodo_31();
            break;

        case 32:
            metodo_32();
            break;

        case 33:
            metodo_33();
            break;

        case 34:
            metodo_34();
            break;

        case 35:
            metodo_35();
            break;

        case 36:
            metodo_36();
            break;

        case 37:
            metodo_37();
            break;

        case 38:
            metodo_38();
            break;

        case 39:
            metodo_39();
            break;

        case 40:
            metodo_40();
            break;

        case 41:
            metodo_41();
            break;

        case 42:
            metodo_42();
            break;

        case 43:
            metodo_43();
            break;

        case 44:
            metodo_44();
            break;

        case 45:
            metodo_45();
            break;

        case 46:
            metodo_46();
            break;

        case 47:
            metodo_47();
            break;

        case 48:
            metodo_48();
            break;

        case 49:
            metodo_49();
            break;

        case 50:
            metodo_50();
            break;

        default:
            printf("Opcao invalida . . .");
            break;
        }

    } while (opcao != 0);

    return 0;
}