#include <stdio.h>

int main(){

    //Tabuleiro

    printf("\n");//Pula uma Linha
    printf("\n");//Pula uma Linha

    printf("Tabuleiro \n");
    printf("\n");//Pula uma Linha

    char Tabuleiro[11] = {'X', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};//Letras para identificar a coluna do tabuleiro.

    for(int contador = 0; contador < 11; contador++)//Condição que executa as letras do tabuleiro.
    {
        printf("%2c ", Tabuleiro[contador]);//Manda a letra para o terminal com forme a condição executa.
        if(contador == 10){ //Faz que quando o contador terminar ele passe para a proxima linha.
            printf("\n");//Pula uma Linha
        };
    };

    int TabuleiroAgua[10][11] = { //Variável que contem a matriz.

        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Valores originais da matriz.
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

    };

    int NumeracaoTabuleiro[10][1] = {
        {1},
        {2},
        {3},
        {4},
        {5},
        {6},
        {7},
        {8},
        {9},
        {10}
    };

    for(int contador1 = 0; contador1 < 10; contador1++){//Condição que executa a condicional do tabuleiro e passa para próxima linha.
        printf("%2d ", NumeracaoTabuleiro[contador1][0]);//Númera a linha.
        for(int contador2 = 0; contador2 < 10; contador2++){ //Condicional do tabuleiro, serve para executar o print que manda para o terminal.
            printf("%2d ", TabuleiroAgua[contador1][contador2]);//Print que manda para o terminal.
            //%2d faz com que todos os prints seja em ordem.
        };
        printf("\n");//Pula uma Linha
    };

    printf("\n");//Pula uma Linha
    printf("\n");//Pula uma Linha
    printf("\n");//Pula uma Linha




    //Tabuleiro com Jogada.

    printf("Tabuleiro com Navios\n"); //Exibe mensagem no terminal.
    printf("\n");//Pula uma Linha

    for(int contador = 0; contador < 11; contador++)//Variável que executa as letras do tabuleiro.
    {
        printf("%2c ", Tabuleiro[contador]);//Manda a letra para o terminal com forme a condição executa.
        if(contador == 10){ //Faz que quando o contador terminar ele passe para a proxima linha.
            printf("\n");//Pula uma Linha
        };
    };


    int TabuleiroNavil1 [3] = {TabuleiroAgua[8][7] = 3, TabuleiroAgua[8][8] = 3, TabuleiroAgua[8][9] = 3};//Substitui partes do tabuleiro (orizontal) por 3.

    int TabuleiroNavil2 [3] = {TabuleiroAgua[0][9] = 3,TabuleiroAgua[1][9] = 3, TabuleiroAgua[2][9] = 3};//Substitui partes do tabuleiro (vertical) por 3.


    for(int contador1 = 0; contador1 < 10; contador1++){ //Condição que executa a condicional do tabuleiro e da passa para próxima linha.
        printf("%2d ", NumeracaoTabuleiro[contador1][0]);//Númera a coluna Y.
        for(int contador2 = 0; contador2 < 10; contador2++){//Condicional do tabuleiro, serve para executar o print que manda para o terminal.
            printf("%2d ", TabuleiroAgua[contador1][contador2]);//Print que manda para o terminal.
        };
        printf("\n");//Pula uma Linha
    };

    printf("\n");//Pula uma Linha
    printf("\n");//Pula uma Linha


    //Tabuleiro com Jogada diagonal direita esquerda.

    printf("Tabuleiro com Navios 2\n"); //Exibe mensagem no terminal.
    printf("\n");//Pula uma Linha

    for(int contador = 0; contador < 11; contador++)//Variável que executa as letras do tabuleiro.
    {
        printf("%2c ", Tabuleiro[contador]);//Manda a letra para o terminal com forme a condição executa.
        if(contador == 10){ //Faz que quando o contador terminar ele passe para a proxima linha.
            printf("\n");//Pula uma Linha
        };
    };


    for(int i = 6; i < 9; i++) //Váriavel que limita aonde começa e termina o navil diagonal limitando a linha.
    {
        for (int j = 0; j < 11; j++)//Variável que percorre toda as colunas nas linhas limitadas acima.
        {
            if(i + j == 10){ //Variável que limita aonde nas colunas limitadas vai mudar.
                TabuleiroAgua[i][j] = 3;//Para o que vai mudar.
            }
        };
        
    };


    for(int contador1 = 0; contador1 < 10; contador1++){ //Condição que executa a condicional do tabuleiro e da passa para próxima linha.
        printf("%2d ", NumeracaoTabuleiro[contador1][0]);//Númera a linha.
        for(int contador2 = 0; contador2 < 10; contador2++){//Condicional do tabuleiro, serve para executar o print que manda para o terminal.
            printf("%2d ", TabuleiroAgua[contador1][contador2]);//Print que manda para o terminal.
        };
        printf("\n");//Pula uma Linha
    };

    printf("\n");//Pula uma Linha
    printf("\n");//Pula uma Linha


    //Tabuleiro com Jogada diagonal esquerda direita.

    printf("Tabuleiro com Navios 3\n"); //Exibe mensagem no terminal.
    printf("\n");//Pula uma Linha

    for(int contador = 0; contador < 11; contador++)//Variável que executa as letras do tabuleiro.
    {
        printf("%2c ", Tabuleiro[contador]);//Manda a letra para o terminal com forme a condição executa.
        if(contador == 10){ //Faz que quando o contador terminar ele passe para a proxima linha.
            printf("\n");//Pula uma Linha
        };
    };


    for(int i = 0; i < 3; i++) //Váriavel que limita aonde começa e termina o navil diagonal.
    {
        for (int j = 0; j < 10; j++)//Variável que percorre toda as linhas com suas colunas limitadas acima.
        {
            if(i == j){//Variável que limita aonde nas colunas limitadas vai mudar.
                TabuleiroAgua[i][j] = 3;//Para o que vai mudar.
            }
        };
        
    };


    for(int contador1 = 0; contador1 < 10; contador1++){ //Condição que executa a condicional do tabuleiro e da passa para próxima linha.
        printf("%2d ", NumeracaoTabuleiro[contador1][0]);//Númera a linha.
        for(int contador2 = 0; contador2 < 10; contador2++){//Condicional do tabuleiro, serve para executar o print que manda para o terminal.
            printf("%2d ", TabuleiroAgua[contador1][contador2]);//Print que manda para o terminal.
        };
        printf("\n");//Pula uma Linha
    };

    printf("\n");//Pula uma Linha
    printf("\n");//Pula uma Linha


    //Habilidades especiais e áreas de efeito.

    //Ataque em cruz:

    printf("Ataque em Cruz: \n");

    for(int i = 3; i < 7 ; i++){ //Váriavel que limita aonde começa e termina em linha o ataque em cruz.
        for(int j = 4; j <= 9; j++){ 
            if(TabuleiroAgua[3][7] == 0)//Condição para que seja efetuado o ataque.
            { 
                TabuleiroAgua[3][7] = 5; //local do ataque sendo identificado com 5.
                TabuleiroAgua[3][6] = 5;//local do ataque sendo identificado com 5.
                TabuleiroAgua[3][5] = 5; //local do ataque sendo identificado com 5.
                TabuleiroAgua[3][8] = 5;//local do ataque sendo identificado com 5.
                TabuleiroAgua[3][9] = 5; //local do ataque sendo identificado com 5.

                TabuleiroAgua[2][7] = 5;//local do ataque sendo identificado com 5.
                TabuleiroAgua[4][7] = 5;//local do ataque sendo identificado com 5.
            };

        };
        break;//Evita que o loop externo seja repetido mais do que 1 vez.

    };

     //Ataque em cone:

     printf("Ataque em Cone: \n");

    for(int i = 5; i < 8; i++){ //Váriavel que limita aonde começa e termina em linha o ataque em cone.
        for(int j = 0; j < 6; j++){
            if(TabuleiroAgua[4][2] == 0)//Condição para que seja efetuado o ataque.
            {
                TabuleiroAgua[4][2] = 5;//local do ataque sendo identificado com 5
                TabuleiroAgua[3][2] = 5;//local do ataque sendo identificado com 5
                TabuleiroAgua[5][2] = 5;//local do ataque sendo identificado com 5

                TabuleiroAgua[5][1] = 5;//local do ataque sendo identificado com 5.
                TabuleiroAgua[5][0] = 5;//local do ataque sendo identificado com 5.
                TabuleiroAgua[5][3] = 5;//local do ataque sendo identificado com 5.
                TabuleiroAgua[5][4] = 5;//local do ataque sendo identificado com 5.

                TabuleiroAgua[4][1] = 5;//local do ataque sendo identificado com 5.
                TabuleiroAgua[4][3] = 5;//local do ataque sendo identificado com 5.
            };
        };
        break;//Evita que o loop externo seja repetido mais do que 1 vez.
    };

     //Ataque em octaedro:

     printf("Ataque em Octaedro: \n");

    for(int i = 7; i <= 9; i++){ //Váriavel que limita aonde começa e termina em linha o ataque em Octaedro.
        for(int j = 3; j < 6; j ++){
            if(TabuleiroAgua[8][5] == 0)//Condição para que seja efetuado o ataque.
            {
                TabuleiroAgua[8][5] = 5;//local do ataque sendo identificado com 5.
                TabuleiroAgua[8][4] = 5;//local do ataque sendo identificado com 5.
                TabuleiroAgua[8][6] = 5;//local do ataque sendo identificado com 5.

                TabuleiroAgua[8][5] = 5;//local do ataque sendo identificado com 5.
                TabuleiroAgua[7][5] = 5;//local do ataque sendo identificado com 5.
                TabuleiroAgua[9][5] = 5;//local do ataque sendo identificado com 5.
            };
        };
        break;//Evita que o loop externo seja repetido mais do que 1 vez.
    };

    printf("\n");//Pula uma Linha


    for(int contador1 = 0; contador1 < 10; contador1++){ //Condição que executa a condicional do tabuleiro e da passa para próxima linha.
        printf("%2d ", NumeracaoTabuleiro[contador1][0]);//Númera a linha.
        for(int contador2 = 0; contador2 < 10; contador2++){//Condicional do tabuleiro, serve para executar o print que manda para o terminal.
            printf("%2d ", TabuleiroAgua[contador1][contador2]);//Print que manda para o terminal.
        };
        printf("\n");//Pula uma Linha
    };

    printf("\n");//Pula uma Linha
    printf("\n");//Pula uma Linha
}