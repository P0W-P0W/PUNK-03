#include <stdio.h>
#include <stdlib.h>
#include "Errors.h"
#include "Entry.h"
#include "Process.h"

int main(int argc, char *argv[]){
    char Tabuleiro[3][3];

    FILE *in, *out;
    in = fopen(argv[1], "r");
    out = fopen(argv[2],"w");

    parameterTest(argc);
    OpeningTest(in, argv[1], "r");

    readMatrix(Tabuleiro, in);      //chama função que lê a matriz do arquivo e passa pra variavel
    games(Tabuleiro, 'O', out);     //chama a função que faz os jogos

    fclose(in); 
    fclose(out);
    return 0;
}