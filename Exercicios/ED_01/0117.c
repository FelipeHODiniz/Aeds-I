/*
    0117 - v0.0. - 15 / 08 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o 0117 0117.c
    Windows: gcc -o 0117 0117.c
    Para executar em terminal (janela de comandos):
    Linux : ./0117
    Windows: 0117
    */
    // dependencias
    #include <stdio.h> // para as entradas e saidas
    /*
    Funcao principal.
    @return codigo de encerramento
    @param argc - quantidade de parametros na linha de comandos
    @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main ( int argc, char* argv [ ])
{
    //identificar 
    printf( "%s\n", "0117 - Programa = v0.0" );
    printf( "%s\n", "Autor: Felipe Henrique Oliviera Diniz" );
    printf( "\n" );
    
    //definir dados
    double ladoCubo1 = 0;
    double volumeCubo = 0;
    
    //acoes
        //ler o valor do teclado
    printf( "%s\n", "Digite o lado cubo: " );
    scanf( "%lf", &ladoCubo1); getchar();

        //processamento
    ladoCubo1 = ladoCubo1 * 7;
    volumeCubo = ladoCubo1 * ladoCubo1 * ladoCubo1;
    
        //mostrar resultados
    printf( "\nO volume do cubo com o lado 7 vezes maior que original e: %lf ", volumeCubo );
    
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
    0117 - Programa = v0.0
    Autor: Felipe Henrique Oliviera Diniz

    Digite o lado 1 do triangulo (base):
    5.0

    O volume do cubo com o lado 7 vezes maior que original e: 42875.000000

    Apertar ENTER para terminar.

    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 __/__ esboco
    ---------------------------------------------- testes
    Versao Teste
    0.0 00. ( OK ) identificacao de programa
    leitura e exibicao de inteiro
*/