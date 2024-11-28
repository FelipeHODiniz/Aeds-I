/*
    ed07_844318 - v0.0. - 26 / 09 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o ed07_844318 ed07_844318.c -lm
    Windows: gcc -o ed07_844318 ed07_844318.c -lm
    Para executar em terminal (janela de comandos):
    Linux : ./ed07_844318
    Windows: ed07_844318
    */
    // dependencias
    #include <stdio.h> // para as entradas e saidas
    #include <string.h>
    #include <stdlib.h>
    #include <math.h>
    #include <unistd.h> // para pausar a tela
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
01.) Incluir um método (0711) para
ler um valor inteiro do teclado e
gravar essa quantidade em múltiplos de 3, ímpares, em ordem crescente, começando em 3.
Exemplo: n = 5 => { 3, 9, 15, 21, 27 }
*/

void metodo_0711()
{   
    FILE *arquivo = fopen("arquivo_0711.txt", "w");

    int n = 0;
    int multiplo = 3;
    int i = 1;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    

    do {
        if (i == 1) 
        {  
            fprintf(arquivo, "%d\n", multiplo); 
        } 
        else 
        {
            multiplo = multiplo + 3;
            if (multiplo % 2 == 1) 
            { 
                fprintf(arquivo, "%d\n", multiplo);
            } 
        }
        i++;
    } while (i <= n);

    fclose(arquivo);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
02.) Incluir um método (0712) para
ler um valor inteiro do teclado e
gravar essa quantidade em múltiplos de 6, pares, em ordem decrescente encerrando em 36.
Exemplo: n = 5 => { 60, 54, 48, 42, 36 }
*/
void metodo_0712()
{
    FILE *arquivo = fopen("arquivo_0712.txt", "w");

    int n = 0;
    int multiplo = 36;
    int cont = 1;

    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    do
        {
            if (multiplo % 2 == 0)
            {
                multiplo = multiplo + 6;
                cont++;
            }
       }while (cont < n);

    do
    {
        if (multiplo % 2 == 0) 
        { 
            fprintf(arquivo, "%d\n", multiplo);
        }
        multiplo = multiplo - 6;
        n--;
       
    }while (n >= 0);
    
    fclose(arquivo);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
03.) Incluir um método (0713) para
ler um valor inteiro do teclado e
gravar essa quantidade em valores da sequência: 1 4 16 64 256 ...
Exemplo: n = 5 => { 1, 4, 16, 64, 256 }
*/

void metodo_0713()
{
    FILE *arquivo = fopen("arquivo_0713.txt", "w");

    int n = 0;
    int multiplo = 1;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    do
    {
        fprintf(arquivo, "%d\n", multiplo);
        multiplo = multiplo * 4;
        n--;
    } while (n > 0);

    fclose(arquivo);    


    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

/*
04.) Incluir um método (0714) para
ler um valor inteiro do teclado e
gravar essa quantidade em valores decrescentes da sequência: ... 1/256 1/64 1/16 1/4 1.
Exemplo: n = 5 => { 1/256, 1/64, 1/16, 1/4, 1 }
*/


void metodo_0714()
{
    FILE *arquivo = fopen("arquivo_0714.txt", "w");

    int n = 0;
    int cont = 1;
    double multiplo = 1.0;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    do
    {
        multiplo = multiplo * 4;
        cont++;
    } while (cont < n);

    do
    {
        fprintf(arquivo, "1/%lf\n", multiplo);
        multiplo = multiplo / 4;
        n--;
        
    } while (n > 0);
    
    fclose(arquivo); 


    printf("\n\nPressione ENTER para terminar.");
    getchar();  
}

/*
05.) Incluir um método (0715) para
ler um valor inteiro do teclado (n) e outro valor real (x),
gravar essa quantidade (n) em valores reais da sequência: 1 1/x2 1/x4 1/x6
...
DICA: Usar pow ( x, y ) da biblioteca <math.h> para calcular a potência.
Exemplo: n = 5 => { 1, 1/x2
, 1/x4
, 1/x6
, 1/x8
}
*/


void metodo_0715()
{
    FILE *arquivo = fopen("arquivo_0715.txt", "w");

    int n = 0;
    double x = 0.0;
    double multiplo = 0.0;
    int elevado = 2;
    int i = 0;
    double resultado = 0.0;

    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);
    printf("\nDigite um valor real para x: ");
    scanf("%lf", &x);

    do
    {
        if(i == 0)
        {
            fprintf(arquivo, "1.0\n");
        }
        else
        {
        multiplo = pow(x, elevado);
        resultado = 1.0 / multiplo;
        elevado = elevado + 2;
        fprintf(arquivo, "%lf\n", resultado);
        }
        i++;

    } while (i < n);
    
    fclose(arquivo); 


    printf("\n\nPressione ENTER para terminar.");
    getchar();  
}


/*
06.) Incluir um método e uma função (0716) para
ler um valor inteiro do teclado para representar certa quantidade de valores
a serem somados dentre os primeiros gravados no exercício anterior.
Testar essa função para quantidades diferentes.
Gravar em outro arquivo ("RESULTADO06.TXT") cada quantidade e seu resultado.
*/



void metodo_0716()
{
    FILE *arquivo_0715 = fopen("arquivo_0715.txt", "r");
    FILE *arquivo = fopen("RESULTADO06.txt", "w");

    int n = 0;
    double linhaLida = 0.0;
    double soma = 0.0;

    if(arquivo_0715 == NULL)
    {
        printf("\n\nERRO o arquivo do exercicio 0715 esta vazio, preencha o arquivo primeiro\n\n");
    }
    else
    {
        printf("\nDigite um valor inteiro: ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++ )
        {
            fscanf(arquivo_0715,"%lf", &linhaLida );
            soma = soma + linhaLida;
        }
        fprintf(arquivo, "%d\n", n); 
        fprintf(arquivo, "%lf\n", soma);    

        fclose(arquivo_0715);
        fclose(arquivo);

        printf("\n\nPressione ENTER para terminar.");
        getchar();
    } 
}

/*

*/

void metodo_0717()
{
    FILE *arquivo_0714 = fopen("arquivo_0714.txt", "r");
    FILE *arquivo = fopen("RESULTADO07.txt", "w");
    

    int n = 0;
    double inverso = 0.0;
    double soma = 0.0;
    double maiorInverso = 0.0;
    double denominadores = 0.0;
    int i = 0;

    if(arquivo_0714 == NULL)
    {
        printf("\n\nERRO o arquivo do exercicio 0714 esta vazio, preencha o arquivo primeiro\n\n");
    }
    else
    {
        printf("\nDigite um valor inteiro: ");
        scanf("%d", &n);

        do
        {
            fscanf(arquivo_0714,"1/%lf\n", &inverso);
            soma = soma + (1.0 / inverso);
            i++;
        }while(i < n);

        fprintf(arquivo, "%d\n", n); 
        fprintf(arquivo, "%lf\n", soma);

        fclose(arquivo_0714);
        fclose(arquivo);

        printf("\n\nPressione ENTER para terminar.");
        getchar(); 
    }
}

int fibonacci( int n)  {
    if (n <= 0)
    { 
        return 0;
    }
    if (n == 1) 
    {
        return 1;
    }

    int a = 0;
    int b = 1;
    int c = 0;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

void metodo_0718()
{
    FILE *arquivo = fopen("RESULTADO08.txt", "w");

    int n = 0;
    int j = 1;
    int termo = 0;

    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++ )
    {
        termo  = fibonacci(j);
        while( (termo % 2) != 0)
        {
            termo = fibonacci(j);
            j++;
        }
        fprintf(arquivo, "%d\n", termo);
    }    

    fclose(arquivo);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
    
}

int contarMinusculas(const char* cadeia) 
{
    int contador = 0;
    for (int i = 0; cadeia[i] != '\0'; i++) 
    {
        if (cadeia[i] >= 'a' && cadeia[i] <= 'z') 
        {
            contador++;
        }
    }
    return contador;
}

void metodo_0719()
{
    FILE *texto = fopen("texto_0719.txt", "r");
    FILE *arquivo = fopen("RESULTADO09.txt", "w");

    char array_texto[100];
    int contMinusculas = 0;

    if (texto == NULL) {
        printf("\nERRO ao abrir o arquivo de texto\n");
    }
    else
    {
        while (fgets(array_texto, sizeof(array_texto), texto)) 
        {
            contMinusculas = contarMinusculas(array_texto);
        
            fprintf(arquivo, "%s\n", array_texto);
            fprintf(arquivo, "%d\n", contMinusculas);
        }
    }

    fclose(texto);
    fclose(arquivo);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

int contarDigitosMenor5(const char* cadeia) 
{
    int contador = 0;
    for (int i = 0; cadeia[i] != '\0'; i++) 
    {
        if (cadeia[i] >= '0' && cadeia[i] <= '4') 
        {
            contador++;
        }
    }
    return contador;
}


void metodo_0720()
{
    FILE *texto = fopen("texto_0720.txt", "r");
    FILE *arquivo = fopen("RESULTADO10.txt", "w");

    char array_texto[100];
    int contMenor5 = 0;

    if (texto == NULL) {
        printf("\nERRO ao abrir o arquivo de texto\n");
    }
    else
    {
        while (fgets(array_texto, sizeof(array_texto), texto)) 
        {
            contMenor5 = contarDigitosMenor5(array_texto);
        
            fprintf(arquivo, "%s\n", array_texto);
            fprintf(arquivo, "%d\n", contMenor5);
        }
    }

    fclose(texto);
    fclose(arquivo);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}

void metodo_07E1()
{
    FILE *arquivo = fopen("arquivo_07E1.txt", "w");
    int n = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

     for (int i = 1; i <= n; i++) 
     {
        if (n % i == 0 && i % 2 == 0) 
        {
            fprintf(arquivo, "%d\n", i);
        }
    }
}

int contarPalavraIncialD(const char* cadeia) 
{
    int contador = 0;
    
    if (cadeia[0] == 'd' || cadeia[0] == 'D') 
    {
        contador++;
    }

    return contador;
}

void metodo_07E2()
{
    FILE *arquivo = fopen("arquivo_07E2.txt", "r");
    int cont = 0;

    char array_texto[100];

    if (arquivo == NULL) {
        printf("\nERRO ao abrir o arquivo de texto\n");
    }

    else
    {
        while (fgets(array_texto, sizeof(array_texto), arquivo)) 
        {
            cont = cont + contarPalavraIncialD(array_texto);
        }
        printf("\nO total de palavras que comecam com 'd'(ou 'D') e: %d", cont);
    }

    fclose(arquivo);

    printf("\n\nPressione ENTER para terminar.");
    getchar();
}



int main ( int argc, char* arcv [] )
{
    //identificar
    printf( "%s\n", "ed07_844318 - Programa = v0.0" );
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
            case 1: metodo_0711();     break;
            case 2: metodo_0712();     break;
            case 3: metodo_0713();     break;
            case 4: metodo_0714();     break;
            case 5: metodo_0715();     break;
            case 6: metodo_0716();     break;
            case 7: metodo_0717();     break;
            case 8: metodo_0718();     break;
            case 9: metodo_0719();     break;
            case 10: metodo_0720();     break;
            case 11: metodo_07E1();     break;
            case 12: metodo_07E2();     break;
    
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