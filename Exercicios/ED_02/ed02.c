/*
    ed02 - v0.0. - 20 / 08 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o ed02 ed02.c
    Windows: gcc -o ed02 ed02.c
    Para executar em terminal (janela de comandos):
    Linux : ./ed02
    Windows: ed02
    */
    // dependencias
    #include <stdio.h> // para as entradas e saidas
    /*
    Funcao principal.
    @return codigo de encerramento
    @param argc - quantidade de parametros na linha de comandos
    @param argv - arranjo com o grupo de parametros na linha de comandos
*/
void metodo_01()
{
    int valor = 0;
    int temp = 0;

    printf("Digite o valor do inteiro: ");
    scanf("%d", &valor); getchar();

    temp = valor %2;

    if( ( temp == 0 ) || ( temp == -0 ))
    {
        printf("O inteiro %d e par", valor );
    }
    else if( ( temp == 1 ) || ( temp == -1 ))
    {
        printf("O inteiro %d e impar", valor );
    }

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

void metodo_02()
{
    int valor = 0;
    int temp = 0;
    int condicao1 = -15;
    int condicao2 = 15;

    printf("Digite o valor do inteiro: ");
    scanf("%d", &valor); getchar();

    temp = valor %2;

    if( ( temp == 0 ) && ( valor > condicao2 ) )
    {
        printf("O inteiro %d e par e maior que 15\n", valor );
    }

    if( ( temp != 0 ) && ( valor < condicao1 ) )
    {
        printf("O inteiro %d e impar e menor que -15\n", valor );
    }
    else
    {
        printf("Nao foi definido nenhum status para numeros que pertencem a este intervalo [-15,15]\n");
    }

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

void metodo_03()
{
    double valor = 0;

    printf("Digite o valor do inteiro: ");
    scanf("%lf", &valor); getchar();

    if( ( valor > 25 ) && ( valor < 45 ) )
    {
        printf("O valor %lf esta presente no intervalo aberto (25;45", valor);
    }
    else
    {
        printf("O valor nao esta presente no intervalo aberto (25;45)");
    }

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

void metodo_04()
{
    double valor = 0;

    printf("Digite o valor do inteiro: ");
    scanf("%lf", &valor); getchar();

    if( ( valor >= 20 ) && ( valor <= 60 ) )
    {
        printf("O valor %lf esta presente no intervalo fechado (20;60", valor);
    }
    else
    {
        printf("O valor nao esta presente no intervalo fechado (20;60)");
    }

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

void metodo_05()
{
    double valor = 0;

    printf("Digite o valor do inteiro: ");
    scanf("%lf", &valor); getchar();

    if( ( valor >= 10 ) && ( valor < 50 ) )
    {
        if( ( valor >= 10 ) && ( valor < 15 ) )
        {
            printf("O valor %lf esta presente no intervalo [10;25]", valor);
        }
        if( ( valor > 15 ) && ( valor <= 25 ) )
        {
            printf("O valor %lf esta presente nos dois intervalos: [10;25] e (15;50)", valor);
        }
        if( ( valor > 25 ) && ( valor < 50 ) )
        {
            printf("O valor %lf esta presente no intervalo aberto (25;45)", valor);
        }
    }
    else
    {
        printf("O valor nao esta presente em nenhum dos intervalos: [10;25] e (15;50)");
    }

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

void metodo_06()
{
    int valor1 = 0;
    int valor2 = 0;
    int resto1 = 0;
    int resto2 = 0;

    printf("Digite o valor do inteiro: ");
    scanf("%d", &valor1); getchar();
    printf("Digite o valor do inteiro: ");
    scanf("%d", &valor2); getchar();

    resto1 = valor1 %2;
    resto2 = valor2 %2;
    printf("%d\n", resto1);
    printf("%d\n", resto2);

    if( ( resto1 == 0) && ( resto2 == 1 ) )
    {
        printf("O primeiro valor (%d) e par e o segundo valor (%d) e impar.", valor1, valor2);
    }
    else
    {
        printf("Nao ha um status defindo para os valores digitados (%d) e (%d)", valor1, valor2);
    }

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

void metodo_07()
{
    int valor1 = 0;
    int valor2 = 0;
    int resto1 = 0;
    int resto2 = 0;

    printf("Digite o valor do primeiro inteiro: ");
    scanf("%d", &valor1); getchar();
    printf("Digite o valor do segundo inteiro: ");
    scanf("%d", &valor2); getchar();

    resto1 = valor1 %2;
    resto2 = valor2 %2;

    if( ( resto1 == -1) && ( valor1 < 0 ) && ( resto2 == 0 ) && ( valor2 >= 0 )  )
    {
        printf("O primeiro valor (%d) e impar e negativo e o segundo valor (%d) e par e positivo.", valor1, valor2);
    }
    else
    {
        printf("Nao ha um status defindo para os valores digitados (%d) e (%d)", valor1, valor2);
    }

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

void metodo_08()
{
    double valor1 = 0;
    double valor2 = 0;
    double condicao1 = 0;

    printf("Digite o valor do primeiro numero real: ");
    scanf("%lf", &valor1); getchar();
    printf("Digite o valor do segundo numero real: ");
    scanf("%lf", &valor2); getchar();

    condicao1 = valor2 / 2;

    if ( valor1 < condicao1 )
    {
        printf("O primeiro valor (%lf) e menor que a metado do segundo valor (%lf).", valor1, valor2);
    }
    else if ( valor1 == condicao1 )
    {
        printf("O primeiro valor (%lf) e igual a metade do segundo valor (%lf).", valor1, valor2);
    }
    else if ( valor1 > condicao1 )
    {
        printf("O primeiro valor (%lf) e maior que a metade do segundo valor (%lf).", valor1, valor2);
    }

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

void metodo_09()
{
    double valor1 = 0;
    double valor2 = 0;
    double valor3 = 0;
    double condicao1 = 0;

    printf("Digite o valor do primeiro numero real: ");
    scanf("%lf", &valor1); getchar();
    printf("Digite o valor do segundo numero real: ");
    scanf("%lf", &valor2); getchar();
    printf("Digite o valor do terceiro numero real: ");
    scanf("%lf", &valor3); getchar();

    if ( valor1 != valor3 )
    {
        if( ( valor2 > valor1 ) && ( valor2 < valor3 ) )
        {
            printf("O segundo valor (%lf) esta entre o primeiro (%lf) e o ultimo (%lf).", valor2, valor1, valor3);
        }
    }
    else
    {
        printf("O primeiro valor e o ultimo sao iguais.");
    }


    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

void metodo_10()
{
    double valor1 = 0;
    double valor2 = 0;
    double valor3 = 0;
    double condicao1 = 0;

    printf("Digite o valor do primeiro numero real: ");
    scanf("%lf", &valor1); getchar();
    printf("Digite o valor do segundo numero real: ");
    scanf("%lf", &valor2); getchar();
    printf("Digite o valor do terceiro numero real: ");
    scanf("%lf", &valor3); getchar();

    if ( valor1 != valor3 )
    {
        if( !(( valor2 > valor1 ) && ( valor2 < valor3 )) )
        {
            printf("O segundo valor nao esta entre o primeiro e o ultimo.");
        }
    }
    else
    {
        printf("O primeiro valor e o ultimo sao iguais.");
    }


    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

int main ( int argc, char* argv [ ])
{
    //identificar
    printf( "%s\n", "ed02 - Programa = v0.0" );
    printf( "%s\n", "Autor: Felipe Henrique Oliviera Diniz" );
    printf( "\n" );

    //definir dados
    int opcao = 1;

    //acoes
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

        default:
            printf("Opcao invalida . . .");
            break;
        }

    } while (opcao != 0);

    //encerrar
    printf("\n\nApertar ENTER para terminar.");
    getchar();
return (0);
}
/*
    ---------------------------------------------- documentacao complementar
    ---------------------------------------------- notas / observacoes / comentarios
    ---------------------------------------------- previsao de testes
    1)
    Digite a opcao: 1
    Digite o valor do inteiro: -6
    O inteiro -6 e par

    Apertar ENTER para terminar.

    Digite a opcao: 1
    Digite o valor do inteiro: -3
    O inteiro -3 e impar

    Apertar ENTER para terminar.

    Digite a opcao: 1
    Digite o valor do inteiro: -0
    O inteiro 0 e par

    Apertar ENTER para terminar.

    Digite a opcao: 1
    Digite o valor do inteiro: 3
    O inteiro 3 e impar

    Apertar ENTER para terminar.

    Digite a opcao: 1
    Digite o valor do inteiro: 6
    O inteiro 6 e par

    Apertar ENTER para terminar.

    Digite a opcao: 1
    Digite o valor do inteiro: 9
    O inteiro 9 e impar

    Apertar ENTER para terminar.

    2)
    Digite a opcao: 2
    Digite o valor do inteiro: -60
    Nao foi definido nenhum status para numeros que pertencem a este intervalo [-15,15]


    Apertar ENTER para terminar.

    Digite a opcao: 2
    Digite o valor do inteiro: -13
    Nao foi definido nenhum status para numeros que pertencem a este intervalo [-15,15]


    Apertar ENTER para terminar.

    Digite a opcao: 2
    Digite o valor do inteiro: 0
    Nao foi definido nenhum status para numeros que pertencem a este intervalo [-15,15]


    Apertar ENTER para terminar.

    Digite a opcao: 2
    Digite o valor do inteiro: 13
    Nao foi definido nenhum status para numeros que pertencem a este intervalo [-15,15]


    Apertar ENTER para terminar.

    Digite a opcao: 2
    Digite o valor do inteiro: 26
    O inteiro 26 e par e maior que 15

    Apertar ENTER para terminar.

    Digite a opcao: 2
    Digite o valor do inteiro: 39
    Nao foi definido nenhum status para numeros que pertencem a este intervalo [-15,15]


    Apertar ENTER para terminar.

    3)
    Digite a opcao: 3
    Digite o valor do inteiro: 15
    O valor nao esta presente no intervalo aberto (25;45)

    Apertar ENTER para terminar.

    Digite a opcao: 3
    Digite o valor do inteiro: 25
    O valor nao esta presente no intervalo aberto (25;45)

    Apertar ENTER para terminar.

    Digite a opcao: 3
    Digite o valor do inteiro: 30
    O valor 30.000000 esta presente no intervalo aberto (25;45

    Apertar ENTER para terminar.

    Digite a opcao: 3
    Digite o valor do inteiro: 35
    O valor 35.000000 esta presente no intervalo aberto (25;45

    Apertar ENTER para terminar.

    Digite a opcao: 3
    Digite o valor do inteiro: 65
    O valor nao esta presente no intervalo aberto (25;45)

    Apertar ENTER para terminar.

    Digite a opcao: 3
    Digite o valor do inteiro: 70
    O valor nao esta presente no intervalo aberto (25;45)

    Apertar ENTER para terminar.

    4)
    Digite a opcao: 4
    Digite o valor do inteiro: 5
    O valor nao esta presente no intervalo fechado (20;60)

    Apertar ENTER para terminar.

    Digite a opcao: 4
    Digite o valor do inteiro: 15
    O valor nao esta presente no intervalo fechado (20;60)

    Apertar ENTER para terminar.

    Digite a opcao: 4
    Digite o valor do inteiro: 20
    O valor 20.000000 esta presente no intervalo fechado (20;60

    Apertar ENTER para terminar.

    Digite a opcao: 4
    Digite o valor do inteiro: 45
    O valor 45.000000 esta presente no intervalo fechado (20;60

    Apertar ENTER para terminar.

    Digite a opcao: 4
    Digite o valor do inteiro: 60
    O valor 60.000000 esta presente no intervalo fechado (20;60

    Apertar ENTER para terminar.

    Digite a opcao: 4
    Digite o valor do inteiro: 65
    O valor nao esta presente no intervalo fechado (20;60)

    Apertar ENTER para terminar.

    5)
    Digite a opcao: 5
    Digite o valor do inteiro: 5
    O valor nao esta presente em nenhum dos intervalos: [10;25] e (15;50)

    Apertar ENTER para terminar.

    Digite a opcao: 5
    Digite o valor do inteiro: 15


    Apertar ENTER para terminar.

    Digite a opcao: 5
    Digite o valor do inteiro: 20
    O valor 20.000000 esta presente nos dois intervalos: [10;25] e (15;50)

    Apertar ENTER para terminar.

    Digite a opcao: 5
    Digite o valor do inteiro: 25
    O valor 25.000000 esta presente nos dois intervalos: [10;25] e (15;50)

    Apertar ENTER para terminar.

    Digite a opcao: 5
    Digite o valor do inteiro: 30
    O valor 30.000000 esta presente no intervalo aberto (25;45)

    Apertar ENTER para terminar.

    Digite a opcao: 5
    Digite o valor do inteiro: 60
    O valor nao esta presente em nenhum dos intervalos: [10;25] e (15;50)

    Apertar ENTER para terminar.

    6)
    Digite a opcao: 6
    Digite o valor do inteiro: 5
    Digite o valor do inteiro: 15
    1
    1
    Nao ha um status defindo para os valores digitados (5) e (15)

    Apertar ENTER para terminar.

    Digite a opcao: 6
    Digite o valor do inteiro: 35
    Digite o valor do inteiro: 40
    1
    0
    Nao ha um status defindo para os valores digitados (35) e (40)

    Apertar ENTER para terminar.

    Digite a opcao: 6
    Digite o valor do inteiro: 60
    Digite o valor do inteiro: 72
    0
    0
    Nao ha um status defindo para os valores digitados (60) e (72)

    Apertar ENTER para terminar.

    Digite a opcao: 6
    Digite o valor do inteiro: 50
    Digite o valor do inteiro: 63
    0
    1
    O primeiro valor (50) e par e o segundo valor (63) e impar.

    Apertar ENTER para terminar.

    Digite a opcao: 6
    Digite o valor do inteiro: 89
    Digite o valor do inteiro: 98
    1
    0
    Nao ha um status defindo para os valores digitados (89) e (98)

    Apertar ENTER para terminar.

    7)
    Digite a opcao: 7
    Digite o valor do primeiro inteiro: -5
    Digite o valor do segundo inteiro: -15
    Nao ha um status defindo para os valores digitados (-5) e (-15)

    Apertar ENTER para terminar.

    Digite a opcao: 7
    Digite o valor do primeiro inteiro: -13
    Digite o valor do segundo inteiro: 20
    O primeiro valor (-13) e impar e negativo e o segundo valor (20) e par e positivo.

    Apertar ENTER para terminar.

    Digite a opcao: 7
    Digite o valor do primeiro inteiro: -30
    Digite o valor do segundo inteiro: 45
    Nao ha um status defindo para os valores digitados (-30) e (45)

    Apertar ENTER para terminar.

    Digite a opcao: 7
    Digite o valor do primeiro inteiro: 60
    Digite o valor do segundo inteiro: 72
    Nao ha um status defindo para os valores digitados (60) e (72)

    Apertar ENTER para terminar.

    Digite a opcao: 7
    Digite o valor do primeiro inteiro: -89
    Digite o valor do segundo inteiro: -98
    Nao ha um status defindo para os valores digitados (-89) e (-98)

    Apertar ENTER para terminar.

    8)
    Digite a opcao: 8
    Digite o valor do primeiro numero real: 0.5
    Digite o valor do segundo numero real: 1.5
    O primeiro valor (0.500000) e menor que a metado do segundo valor (1.500000).

    Apertar ENTER para terminar.

    Digite a opcao: 8
    Digite o valor do primeiro numero real: 3.0
    Digite o valor do segundo numero real: 3.0
    O primeiro valor (3.000000) e maior que a metade do segundo valor (3.000000).

    Apertar ENTER para terminar.

    Digite a opcao: 8
    Digite o valor do primeiro numero real: -5.5
    Digite o valor do segundo numero real: 6.4
    O primeiro valor (-5.500000) e menor que a metado do segundo valor (6.400000).

    Apertar ENTER para terminar.

    Digite a opcao: 8
    Digite o valor do primeiro numero real: 7.8
    Digite o valor do segundo numero real: -8.7
    O primeiro valor (7.800000) e maior que a metade do segundo valor (-8.700000).

    Apertar ENTER para terminar.

    9)
    Digite a opcao: 9
    Digite o valor do primeiro numero real: 0.75
    Digite o valor do segundo numero real: 0.5
    Digite o valor do terceiro numero real: 1.8


    Apertar ENTER para terminar.

    Digite a opcao: 9
    Digite o valor do primeiro numero real: 3.6
    Digite o valor do segundo numero real: 4.5
    Digite o valor do terceiro numero real: 2.4


    Apertar ENTER para terminar.

    Digite a opcao: 9
    Digite o valor do primeiro numero real: 6.3
    Digite o valor do segundo numero real: 7.2
    Digite o valor do terceiro numero real: 6.5


    Apertar ENTER para terminar.

    Digite a opcao: 9
    Digite o valor do primeiro numero real: 9.8
    Digite o valor do segundo numero real: 8.9
    Digite o valor do terceiro numero real: 8.9


    Apertar ENTER para terminar.

    10)

    Digite a opcao: 10
    Digite o valor do primeiro numero real: 0.75
    Digite o valor do segundo numero real: 0.5
    Digite o valor do terceiro numero real: 1.8
    O segundo valor nao esta entre o primeiro e o ultimo.

    Apertar ENTER para terminar.

    Digite a opcao: 10
    Digite o valor do primeiro numero real: 3.6
    Digite o valor do segundo numero real: 4.5
    Digite o valor do terceiro numero real: 2.4
    O segundo valor nao esta entre o primeiro e o ultimo.

    Apertar ENTER para terminar.

    Digite a opcao: 10
    Digite o valor do primeiro numero real: 6.3
    Digite o valor do segundo numero real: 7.2
    Digite o valor do terceiro numero real: 6.5
    O segundo valor nao esta entre o primeiro e o ultimo.

    Apertar ENTER para terminar.

    Digite a opcao: 10
    Digite o valor do primeiro numero real: 9.8
    Digite o valor do segundo numero real: 8.9
    Digite o valor do terceiro numero real: 8.9
    O segundo valor nao esta entre o primeiro e o ultimo.

    Apertar ENTER para terminar.

    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 __/__ esboco
    ---------------------------------------------- testes
    Versao Teste
    0.0 00. ( OK ) identificacao de programa
    leitura e exibicao de inteiro
*/
