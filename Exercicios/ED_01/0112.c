/*
    0112 - v0.0. - 15 / 08 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o 0112 0112.c
    Windows: gcc -o 0112 0112.c
    Para executar em terminal (janela de comandos):
    Linux : ./0112
    Windows: 0112
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
    printf( "%s\n", "0112 - Programa = v0.0" );
    printf( "%s\n", "Autor: Felipe Henrique Oliviera Diniz" );
    printf( "\n" );
    
    //definir dados
    double ladoQuadrado = 0;
    double areaQuadrado = 0;
    double perimetroQuadrado = 0;
    
    //acoes
        //ler o valor do teclado
    printf( "%s\n", "Digite o lado do quadrado: " );
    scanf( "%lf", &ladoQuadrado); getchar();

        //processamento

    ladoQuadrado = ladoQuadrado / 3;
    areaQuadrado = ladoQuadrado * ladoQuadrado ;
    perimetroQuadrado = ladoQuadrado * 4;
    
        //mostrar resultados
    printf( "\nA area do quadrado com um terco do lado original e: %lf ", areaQuadrado );
    printf( "\nO perimetro do quadrado com o lado medindo um terco do lado original e: %lf ", perimetroQuadrado );
    
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
    0112 - Programa = v0.0
    Autor: Felipe Henrique Oliviera Diniz
    
    Digite o lado do quadrado: 
    5
    
    A area do quadrado com um terco do lado original e: 2.777778 
    O perimetro do quadrado com o lado medindo um terco do lado original e: 6.666667 
    
    Apertar ENTER para terminar.
    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 __/__ esboco
    ---------------------------------------------- testes
    Versao Teste
    0.0 00. ( OK ) identificacao de programa
    leitura e exibicao de inteiro
*/