/*
    0115 - v0.0. - 15 / 08 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o 0115 0115.c
    Windows: gcc -o 0115 0115.c
    Para executar em terminal (janela de comandos):
    Linux : ./0115
    Windows: 0115
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
    printf( "%s\n", "0115 - Programa = v0.0" );
    printf( "%s\n", "Autor: Felipe Henrique Oliviera Diniz" );
    printf( "\n" );
    
    //definir dados
    double ladoTriangulo1 = 0;
    double ladoTriangulo2 = 0;
    double areaTriangulo = 0;
    
    //acoes
        //ler o valor do teclado
    printf( "%s\n", "Digite o lado 1 do triangulo (base): " );
    scanf( "%lf", &ladoTriangulo1); getchar();
    printf( "%s\n", "Digite o lado 2 do triangulo (altura): " );
    scanf( "%lf", &ladoTriangulo2); getchar();

        //processamento

    ladoTriangulo2 = ladoTriangulo2 / 2;
    areaTriangulo = (ladoTriangulo1 * ladoTriangulo2) / 2;
    
        //mostrar resultados
    printf( "\nA area do triangulo com a metade da altura original e: %lf ", areaTriangulo );
    
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
    0115 - Programa = v0.0
    Autor: Felipe Henrique Oliviera Diniz
    
    Digite o lado 1 do triangulo (base): 
    3
    Digite o lado 2 do triangulo (altura): 
    4
    
    A area do triangulo com a metade da altura original e: 3.000000 
    
    Apertar ENTER para terminar.
    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 __/__ esboco
    ---------------------------------------------- testes
    Versao Teste
    0.0 00. ( OK ) identificacao de programa
    leitura e exibicao de inteiro
*/