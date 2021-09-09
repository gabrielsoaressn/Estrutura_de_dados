#include <iostream>
#include "matriz.h"

using namespace std;

int main() 
{   int qLinhas, qColunas, i = 0, j = 0;
    float valor;
    cout<<"========MATRIZ========="<<endl;
    cout<<"Linhas: "<<endl;
    cin>>qLinhas;
    cout<<"Colunas: "<<endl;
    cin>>qColunas;
    Matriz* mat = criarMatriz(qLinhas, qColunas);

    cout << "\n\natribuir elementos"<<endl;
    for(i=0; i < qLinhas; i++)
    {
        for(j=0; j<qColunas; j++)
        {   cout << "digite um valor: ";
            cin >> valor;
            setElemento(mat , i, j , valor);
        }
    }
    cout << "\n\nexibir elementos"<<endl;
    for(i=0; i < qLinhas; i++)
    {    cout<< "\n";
        for(j=0; j<qColunas; j++)
        {   cout << "| "<<getElemento(mat, i, j)<<" |";
        }
    }

    return 0;
}