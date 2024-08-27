/*
    0120 - v0.0. - 15 / 08 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o 0120 0120.c
    Windows: gcc -o 0120 0120.c
    Para executar em terminal (janela de comandos):
    Linux : ./0120
    Windows: 0120
    */
    // dependencias
    #include <stdio.h> // para as entradas e saidas
    #include <math.h>
    /*
    Funcao principal.
    @return codigo de encerramento
    @param argc - quantidade de parametros na linha de comandos
    @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main ( int argc, char* argv [ ])
{
    //identificar
    printf( "%s\n", "0120 - Programa = v0.0" );
    printf( "%s\n", "Autor: Felipe Henrique Oliviera Diniz" );
    printf( "\n" );

    //definir dados
    double raio = 0;
    double volumeEsfera = 0;

    //acoes
        //ler o valor do teclado
    printf( "%s\n", "Digite o raio da esfera: " );
    scanf( "%lf", &raio); getchar();

        //processamento

    raio = (raio * 3 ) / 5;
    volumeEsfera = (4 * M_PI * (raio * raio * raio)) / 3;

        //mostrar resultados
    printf( "\nO volume da esfera com seu raio 3/5 do seu tamanho original e: %lf ", volumeEsfera );

    //encerrar
    printf("\n\nApertar ENTER para terminar.");
    getchar();
return (0);
}
/*
    ---------------------------------------------- documentacao complementar
    ---------------------------------------------- notas / observacoes / comentarios
    ---------------------------------------------- previsao de testes
    a)
    0120 - Programa = v0.0
    Autor: Felipe Henrique Oliviera Diniz

    Digite o raio da esfera:
    5.0

    O volume da esfera com seu raio 3/5 do seu tamanho original e: 113.097336

    Apertar ENTER para terminar.

    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 __/__ esboco
    ---------------------------------------------- testes
    Versao Teste
    0.0 00. ( OK ) identificacao de programa
    leitura e exibicao de inteiro
*/
