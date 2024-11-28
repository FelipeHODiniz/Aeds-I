/*
    ed03_844318 - v0.0. - 27 / 08 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o ed03_844318 ed03_844318.c
    Windows: gcc -o ed03_844318 ed03_844318.c
    Para executar em terminal (janela de comandos):
    Linux : ./ed03_844318
    Windows: ed03_844318
    */
    // dependencias
    #include <stdio.h> // para as entradas e saidas
    #include <string.h>
/*
    Funcao principal.
    @return codigo de encerramento
    @param argc - quantidade de parametros na linha de comandos
    @param argv - arranjo com o grupo de parametros na linha de comandos
*/

/*
01.) Incluir um método (0311) para:
- ler uma palavra do teclado;
- mostrar as letras maiúsculas.
DICA: Definir um teste para determinar se um caractere é letra minúscula.
Exemplo: palavra = "PaLaVrA"
*/
void metodo_311()
{
    char string[47];

    printf("\nDigite a palavra que deseja verificar: ");
    scanf("%s", string);

    for( int i = 0; string[i] != '\0'; i++ )
    {
        if( ('A'<=string[i]) && (string[i] <= 'Z') )
        {
            printf("\n%c", string[i]);
        }
    }
    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

/*
02.) Incluir um método (0312) para:
- ler uma palavra do teclado;
- contar e mostrar apenas as letras minúsculas.
Exemplo: palavra = "PaLaVrA"
*/
void metodo_312()
{
    char string[47];

    printf("\nDigite a palavra que deseja verificar: ");
    scanf("%s", string);

    for( int i = 0; string[i] != '\0'; i++ )
    {
        if( ('a'<=string[i]) && (string[i] <= 'z') )
        {
            printf("\n%c", string[i]);
        }
    }
}

/*
03.) Incluir um método (0313) para:
- ler uma palavra do teclado;
- contar e mostrar as letras minúsculas percorrendo do fim para o início da palavra.
Exemplo: palavra = "PaLaVrA"
*/
void metodo_313()
{
    char string[47] = "PaLaVra";
    char invertido[47];
    int j=0;
    int tamanhoarray = 0;

    printf("\nDigite a palavra que deseja verificar: ");
    scanf("%s", string);

    tamanhoarray = (strlen(string)) - 1;

    for( int i = tamanhoarray; i >= 0; i-- )
    {
        if( ('a'<=string[i]) && (string[i] <= 'z') )
        {
            invertido[j] = string[i];
            printf("\n%c", invertido[j]);
        }
        j++;
    }
    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

/*
04.) Incluir um método (0314) para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar todos símbolos que forem letras, ou maiúsculas ou minúsculas.
Exemplo: palavra = "P4LaVr@"
*/
void metodo_314()
{
    char string[101];

    printf("\nDigite a cadeia de caracteres: ");
    scanf("%s", string);

    for(int i = 0; string[i] != '\0'; i++)
    {
        if(  ('a'<=string[i]) && (string[i] <= 'z') || ('A'<=string[i]) && (string[i] <= 'Z')  )
            printf("\n%c", string[i]);
    }
    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

/*
05.) Incluir um método (0315) para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar todos os dígitos, percorrendo do fim para o início da cadeia de caracteres.
Exemplo: palavra = "P4LaVr@1"
*/
void metodo_315()
{
    char string[100];
    char stringinvertida[100];
    int tamanString = 0;
    int j = 0;

    printf("\nDigite a cadeia de caracteres com  no maximo 100 caracteres: ");
    scanf("%s", string);

    tamanString = ( (strlen(string)) - 1 );

    for( int i = tamanString; i >= 0; i-- )
    {
        stringinvertida[j] = string[i];
        printf("\n%c", string[j]);
        j++;
    }
    printf("\nA cadeia tem %d caracteres", j);

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

/*
06.) Incluir um método (0316) para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar tudo o que não for dígito e também não for letra.
Exemplo: palavra = "P4LaVr@O!"
*/
void metodo_316()
{
    char string[101];

    printf("\nDigite a cadeia de caracteres com no maximo 100 caracteres: ");
    scanf("%s", string);

    for(int i = 0; string[i] != '\0'; i++)
    {
        if(  ! ( ('a'<=string[i]) && (string[i] <= 'z') || ('A'<=string[i]) && (string[i] <= 'Z') ) ) //|| ( ( !48 <= string[i]) && ( 57 <= string[i]) ) ) )
            printf("\n%c", string[i]);
    }
    printf("\n\nApertar ENTER para terminar.");
    getchar();
}

/*
07.) Incluir um método (0317) para:
- ler dois valores inteiros (a,b), limites para definirem um intervalo [a:b];
- ler uma quantidade (n) de valores inteiros a serem testados;
- repetir a leitura de outros tantos valores, quantos os indicados pela quantidade, um (x) por vez;
- contar e mostrar quantos dentre esses valores lidos (x)
os que forem múltiplos de 5, e pertençam ao intervalo [a:b].
Exemplo: [ 15: 60 ], e n = 7, com { 10, 20, 30, 42, 54, 60, 84 }
*/
void metodo_317()
{
    int valor1 = 0;
    int valor2 = 0;
    int n = 0;
    int x = 0;
    int count = 0;

    printf("\nDigite o primeiro valor do intervalo: ");
    scanf("%d", &valor1);
    printf("\nDigite o segundo valor do intervalo: ");
    scanf("%d", &valor2);

    printf("Digite a quantidade de valores que esta neste intervalo: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &x);

        if (x % 5 == 0 && x >= valor1 && x <= valor2) {
            count++;
        }
    }
    // Mostrar o total de valores que são múltiplos de 5 e pertencem ao intervalo
    printf("Total de valores multiplos de 5 no intervalo [%d:%d]: %d\n", valor1, valor2, count);
}


/*
08.) Incluir um método (0318) para:
- ler dois valores inteiros (a,b), limites para definirem um intervalo [a:b];
- ler uma quantidade (n) de valores inteiros a serem testados;
- ler outros tantos valores quantos os indicados pela quantidade, um (x) por vez;
- contar e mostrar quantos dentre esses valores lidos (x)
os que forem múltiplos de 3, que não forem também múltiplos de 5,
e pertençam ao intervalo [a:b].
Exemplo: [ 20: 60 ], e n = 7, com { 10, 20, 30, 48, 52, 60, 84 }
*/
void metodo_318()
{
    int valor1 = 0;
    int valor2 = 0;
    int n = 0;
    int x = 0;
    int count = 0;

    printf("\nDigite o primeiro valor do intervalo: ");
    scanf("%d", &valor1);
    printf("\nDigite o segundo valor do intervalo: ");
    scanf("%d", &valor2);

    printf("Digite a quantidade de valores que esta neste intervalo: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &x);

        if( (x%3 == 0) && (x%5 != 0) && (x >= valor1) && (x <= valor2) )
        {
            count++;
        }
    }
    // Mostrar o total de valores que são múltiplos de 5 e pertencem ao intervalo
    printf("Total de valores multiplos de 5 no intervalo [%d:%d]: %d\n", valor1, valor2, count);
}

/*
09.) Incluir um método (0319) para:
- ler dois valores reais (a e b), o primeiro (a) menor que o segundo (b), confirmadamente,
para definirem um intervalo aberto (a:b);
- ler a quantidade (n) de valores reais a serem testados, e
ler outros tantos valores (x) quantos os indicados por essa quantidade;
- contar e mostrar todos os valores lidos, pertencentes ao do intervalo,
cujas partes inteiras forem ímpares.
DICA: Usar conformação de tipo (type casting) para isolar a parte inteira (int),
antes de testar se é ímpar (ver 0110).
Exemplo: ( 2.5: 7.8 ), e n = 7, com { 1.0, 2.4, 3.3, 4.1, 5.5, 6.3, 8.4 }
*/
void metodo_319()
{
    double valor1 = 0;
    double valor2 = 0;
    int n = 0;
    int x = 0;
    int count = 0;
    //a variavel 'double valores[n];' esta declarada na linha 283

    printf("\nDigite o primeiro valor do intervalo: ");
    scanf("%lf", &valor1);
    printf("\nDigite o segundo valor do intervalo: ");
    scanf("%lf", &valor2);

    if(valor1 < valor2)
    {
        printf("Digite a quantidade de valores que esta neste intervalo: ");
        scanf("%d", &n);

        double valores[n];

        for (int i = 0; i < n; i++)
        {
            printf("Digite o valor %d: ", i + 1);
            scanf("%lf", &valores[i]);
        }

        printf("\nValores dentro do intervalo com parte inteira impar: ");
        for (int i = 0; i < n; i++)
        {
            if ( (valores[i] > valor1) && (valores[i] < valor2) )
            {
                int parteInteira = (int)valores[i];
                if (parteInteira % 2 != 0)
                {
                    printf("%.2lf ", valores[i]);
                    count++;
                }
            }
        }
    }
    else
    {
        printf("\n\nO valor 1 nao e menor que o valor 2");
    }
    if (count == 0) {
        printf("\nNenhum valor encontrado.");
    }
}


/*
10.) Incluir um método (0320) para:
- ler dois valores reais (a e b), maiores que 0 e menores que 1, confirmadamente,
para definirem um intervalo aberto (a:b);
- ler uma quantidade (n) de valores reais a serem testados, e
ler outros tantos valores quantos os indicados por essa quantidade;
- contar e mostrar todos os valores lidos
que tenham suas partes fracionárias fora do intervalo ]a:b[.
DICA: Usar conformação de tipo (type casting) para isolar a parte inteira (int),
e obter a parte fracionária mediante a subtração da parte inteira, antes de testar.
Exemplo: ( 0.25: 0.50 ), e n = 7, com { 1.0, 2.8, 3.3, 4.1, 5.5, 6.9, 8.4 }
*/
void metodo_320()
{
    double valor1 = 0;
    double valor2 = 0;
    int n = 0;
    int x = 0;
    int count = 0;
    //a variavel 'double valores[n];' esta declarada na linha 283

    printf("\nDigite o primeiro valor do intervalo(maior do que 0 e menor do que 1): ");
    scanf("%lf", &valor1);
    printf("\nDigite o segundo valor do intervalo(maior do que 0 e menor do que 1): ");
    scanf("%lf", &valor2);

    if(valor1 < valor2)
    {
        printf("Digite a quantidade de valores que esta neste intervalo: ");
        scanf("%d", &n);

        double valores[n];

        for (int i = 0; i < n; i++)
        {
            printf("Digite o valor %d: ", i + 1);
            scanf("%lf", &valores[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if ( (valores[i] > valor1) && (valores[i] < valor2) )
            {
                int parteInteira = (int)valores[i];
                double parteFracionaria = valores[i] - parteInteira;

                if ( (parteFracionaria <= valor1) || (parteFracionaria >= valor2) )
                {
                    printf("%.2lf ", valores[i]);
                    count++;
                }
            }
        }
        // Caso não haja valores fora do intervalo
        if (count == 0)
        {
            printf("\nNenhum valor encontrado.");
        }
    }
}


int main ( int argc, char* argv [ ])
{
    //identificar
    printf( "%s\n", "ed03_844318 - Programa = v0.0" );
    printf( "%s\n", "Autor: Felipe Henrique Oliviera Diniz" );
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
        case 0: // nao fazer nada
           break;
        case 1:
            metodo_311();
        break;
        case 2:
            metodo_312();
        break;
        case 3:
            metodo_313();
        break;
        case 4:
            metodo_314();
        break;
        case 5:
            metodo_315();
        break;
        case 6:
            metodo_316();
        break;
        case 7:
            metodo_317();
        break;
        case 8:
            metodo_318();
        break;
        case 9:
            metodo_319();
        break;
        case 10:
            metodo_320();
        break;

        default: // comportamento padrao
            printf ( "\nERRO: Opcao invalida.\n" );
        break;
        } // end switch
} while(opcao != 0);



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
