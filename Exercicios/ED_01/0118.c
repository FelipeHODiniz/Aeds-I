/*
    0118 - v0.0. - 15 / 08 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o 0118 0118.c
    Windows: gcc -o 0118 0118.c
    Para executar em terminal (janela de comandos):
    Linux : ./0118
    Windows: 0118
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
    printf( "%s\n", "0118 - Programa = v0.0" );
    printf( "%s\n", "Autor: Felipe Henrique Oliviera Diniz" );
    printf( "\n" );
    
    //definir dados
    double compParelelepidedo = 0;
    double larguraParelelepidedo = 0;
    double alturaParelelepidedo = 0;
    double volumeParelelepidedo = 0;
    
    //acoes
        //ler o valor do teclado
    printf( "%s\n", "Digite o comprimento do parelelepidpedo: " );
    scanf( "%lf", &compParelelepidedo); getchar();
    printf( "%s\n", "Digite a largura do paralelepipedo: " );
    scanf( "%lf", &larguraParelelepidedo); getchar();
    printf( "%s\n", "Digite a altura do paralelepipedo: " );
    scanf( "%lf", &alturaParelelepidedo); getchar();

        //processamento

    compParelelepidedo = compParelelepidedo / 5;
    larguraParelelepidedo = larguraParelelepidedo / 5;
    alturaParelelepidedo = alturaParelelepidedo / 5;
    volumeParelelepidedo = compParelelepidedo * larguraParelelepidedo * alturaParelelepidedo;


    
        //mostrar resultados
    printf( "\nO volume do parelelepipedo com suas medidas 1/5 do original e: %lf ", volumeParelelepidedo );
    
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
    0118 - Programa = v0.0
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