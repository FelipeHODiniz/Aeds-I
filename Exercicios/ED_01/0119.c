/*
    0119 - v0.0. - 15 / 08 / 2024
    Author: FELIPE HENRIQUE OLIVEIRA DINIZ
    Para compilar em terminal (janela de comandos):
    Linux : gcc -o 0119 0119.c
    Windows: gcc -o 0119 0119.c
    Para executar em terminal (janela de comandos):
    Linux : ./0119
    Windows: 0119
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
    printf( "%s\n", "0119 - Programa = v0.0" );
    printf( "%s\n", "Autor: Felipe Henrique Oliviera Diniz" );
    printf( "\n" );
    
    //definir dados
    double raio = 0;
    double areaSemiCirculo = 0;
    
    //acoes
        //ler o valor do teclado
    printf( "%s\n", "Digite o raio do circulo: " );
    scanf( "%lf", &raio); getchar();
        //processamento
    raio = raio / 4;
    areaSemiCirculo = (M_PI * (raio * raio)) / 2;
    
        //mostrar resultados
    printf( "\nA area do semicirculo com o raio 1/4 do seu tamanho original: %lf ", areaSemiCirculo );
    
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
    0119 - Programa = v0.0
    Autor: Felipe Henrique Oliviera Diniz
        
    Digite o raio do circulo:
    5.0

    A area do semicirculo com o raio 1/4 do seu tamanho original: 2.454369

    Apertar ENTER para terminar.
    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 __/__ esboco
    ---------------------------------------------- testes
    Versao Teste
    0.0 00. ( OK ) identificacao de programa
    leitura e exibicao de inteiro
*/