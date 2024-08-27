/*
    0116 - v0.0. - 15 / 08 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o 0116 0116.c
    Windows: gcc -o 0116 0116.c
    Para executar em terminal (janela de comandos):
    Linux : ./0116
    Windows: 0116
    */
    // dependencias
    #include <stdio.h> // para as entradas e saidas
    #include <math.h> // para adicionar a bliblioteca de funcoes matematicas como a raiz quadrada
    /*
    Funcao principal.
    @return codigo de encerramento
    @param argc - quantidade de parametros na linha de comandos
    @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main ( int argc, char* argv [ ])
{
    //identificar 
    printf( "%s\n", "0116 - Programa = v0.0" );
    printf( "%s\n", "Autor: Felipe Henrique Oliviera Diniz" );
    printf( "\n" );
    
    //definir dados
    double ladoTriangulo1 = 0;
    double perimetroTriangulo = 0;
    double areaTriangulo = 0;
    double alturaTriangulo = 0;
    
    //acoes
        //ler o valor do teclado
    printf( "%s\n", "Digite o lado do triangulo: " );
    scanf( "%lf", &ladoTriangulo1); getchar();

        //processamento
    ladoTriangulo1 = ladoTriangulo1 * 4;
    perimetroTriangulo = ladoTriangulo1 * 3;
    areaTriangulo = ((ladoTriangulo1 * ladoTriangulo1) * sqrt(3)) / 4;
    alturaTriangulo = (ladoTriangulo1 * sqrt(3)) / 2;
    
        //mostrar resultados
    printf( "\nA altura do triangulo equilatero com o lado 4 vezes maior que o original e: %lf ", alturaTriangulo );
    printf( "\nA area do triangulo equilatero com o lado 4 vezes maior que o original e: %lf ", areaTriangulo );
    printf( "\nO perimetro do triangulo equilatero com o lado 4 vezes maior que o original e: %lf ", perimetroTriangulo );

    
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
    0116 - Programa = v0.0
    Autor: Felipe Henrique Oliviera Diniz

    Digite o lado 1 do triangulo (base):
    5.0

    A altura do triangulo equilatero com o lado 4 vezes maior que o original e: 17.320508
    A area do triangulo equilatero com o lado 4 vezes maior que o original e: 173.205081
    O perimetro do triangulo equilatero com o lado 4 vezes maior que o original e: 60.000000

    Apertar ENTER para terminar.

    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 __/__ esboco
    ---------------------------------------------- testes
    Versao Teste
    0.0 00. ( OK ) identificacao de programa
    leitura e exibicao de inteiro
*/