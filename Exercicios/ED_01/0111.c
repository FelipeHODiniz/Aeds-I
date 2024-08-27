/*
    0111 - v0.0. - 15 / 08 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o 0111 0111.c
    Windows: gcc -o 0111 0111.c
    Para executar em terminal (janela de comandos):
    Linux : ./0111
    Windows: 0111
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
    printf( "%s\n", "0111 - Programa = v0.0" );
    printf( "%s\n", "Autor: Felipe Henrique Oliviera Diniz" );
    printf( "\n" );
    
    //definir dados
    double ladoQuadrado = 0;
    double areaQuadrado = 0;
    
    //acoes
        //ler o valor do teclado
    printf( "%s\n", "Digite o lado do quadrado: " );
    scanf( "%lf", &ladoQuadrado); getchar();

        //processamento

    ladoQuadrado = ladoQuadrado * 2;
    areaQuadrado = ladoQuadrado * ladoQuadrado ;
    
        //mostrar resultados
    printf( "\nA area do quadrado com o dobro do lado original e: %lf ", areaQuadrado );
    
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
    0111 - Programa = v0.0
    Autor: Felipe Henrique Oliviera Diniz
    
    Digite o lado do quadrado: 
    5
    
    A area do quadrado com o dobro do lado original e: 100.000000 
    
    Apertar ENTER para terminar.
    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 __/__ esboco
    ---------------------------------------------- testes
    Versao Teste
    0.0 00. ( OK ) identificacao de programa
    leitura e exibicao de inteiro
*/