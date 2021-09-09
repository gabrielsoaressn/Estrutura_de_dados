#ifndef TAD_MATRIZ_MATRIZ_H
#define TAD_MATRIZ_MATRIZ_H

typedef struct matriz Matriz;

Matriz* criarMatriz(int linhas, int colunas);
void liberarMatriz(Matriz* m);

float getElemento(Matriz* m, int linha, int coluna);
void setElemento(Matriz* m, int linha, int coluna, float valor);


#endif //TAD_MATRIZ_MATRIZ_H