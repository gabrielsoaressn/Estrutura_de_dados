#include "matriz.h"
#include <iostream>

using namespace std;

struct matriz {
    int linha;
    int coluna;
    float** v;
};

Matriz* criarMatriz(int linhas, int colunas)
{
    int i = 0, j = 0;
    Matriz* matriz = (Matriz*) malloc(sizeof(Matriz));
    matriz->v = (float **) malloc(colunas * sizeof(float *));

    if(matriz == NULL)
    {
        cout<< "\nerro na aloca dinamica";
        system ("pause");
        exit(1);
    }

    for(i=0;i<linhas;i++)
    {
        matriz->v[i] = (float *)(malloc(linhas*sizeof(float)));
    }
     if(matriz->v == NULL)
    {
        cout<< "\nerro na aloca dinamica";
        system ("pause");
        exit(1);
    }
    matriz->linha = linhas;
    matriz->coluna = colunas;

    return matriz;
}

void liberarMatriz(Matriz* m)
{
    int i=0;
    for(i=0; i < m->coluna; i++)
    {
        free(m->v[i]);
    }
    free(m);
    free(m->v);
}

float getElemento(Matriz* m, int linha, int coluna)
{
    return m->v[linha][coluna];
}

void setElemento(Matriz* m, int linha, int coluna, float valor)
{
    m->v[linha][coluna] = valor;
}