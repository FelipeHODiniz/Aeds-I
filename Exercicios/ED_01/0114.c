/*
    0114 - v0.0. - 15 / 08 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o 0114 0114.c
    Windows: gcc -o 0114 0114.c
    Para executar em terminal (janela de comandos):
    Linux : ./0114
    Windows: 0114
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
    printf( "%s\n", "0114 - Programa = v0.0" );
    printf( "%s\n", "Autor: Felipe Henrique Oliviera Diniz" );
    printf( "\n" );
    
    //definir dados
    double ladoRetangulo1 = 0;
    double ladoRetangulo2 = 0;
    double areaRetangulo = 0;
    double perimetroRetangulo = 0;
    
    //acoes
        //ler o valor do teclado
    printf( "%s\n", "Digite o lado 1 do retangulo (base): " );
    scanf( "%lf", &ladoRetangulo1); getchar();
    printf( "%s\n", "Digite o lado 2 do retangulo (altura): " );
    scanf( "%lf", &ladoRetangulo2); getchar();

        //processamento

    ladoRetangulo1 = ladoRetangulo1 / 6;
    ladoRetangulo2 = ladoRetangulo2 / 6;
    areaRetangulo = ladoRetangulo1 * ladoRetangulo2;
    perimetroRetangulo = (ladoRetangulo1 * 2) + (ladoRetangulo2 * 2);
    
        //mostrar resultados
    printf( "\nA area do retangulo com os lados aumentados 3 vezes do original e: %lf ", areaRetangulo );
    printf( "\nO perimetro do retangulo com os lados aumentados 3 vezes do original e: %lf ", perimetroRetangulo );
    
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
    0114 - Programa = v0.0
    Autor: Felipe Henrique Oliviera Diniz
    
    Digite o lado 1 do retangulo (base): 
    3
    Digite o lado 2 do retangulo (altura): 
    5
    
    A area do retangulo com os lados aumentados 3 vezes do original e: 0.416667 
    O perimetro do retangulo com os lados aumentados 3 vezes do original e: 2.666667 
    
    Apertar ENTER para terminar.
    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 __/__ esboco
    ---------------------------------------------- testes
    Versao Teste
    0.0 00. ( OK ) identificacao de programa
    leitura e exibicao de inteiro
*/