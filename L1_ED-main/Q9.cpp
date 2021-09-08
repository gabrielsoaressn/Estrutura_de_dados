#include <iostream>

using namespace std;


int main() {
  int **p, i = 0, linhas, colunas, j = 0;
  cout<<"------ALOCADINAMICA------"<<endl;
  cout<<"numero de linhas (MATRIZ QUADRADA): ";
  cin >> linhas;

  p = (int **)(malloc(linhas*sizeof(int*)));
  if(p == NULL)
  {
    cout<< "\nerro na aloca dinamica";
    system ("pause");
    exit(1);
  }

  for(i=0;i<linhas;i++)
  {
    p[i] = (int *)(malloc(linhas*sizeof(int)));
    for(j=0;j<linhas;j++)
    {
      cout<<"digite um numero: ";
      cin >> p[i][j];   
    }
  }
  cout << "exibindo o array"<<endl;
   
  for(i=0;i<linhas;i++)
  {
    cout<<"\n linha "<< i+1 << " |";
    for(j=0;j<linhas;j++)
    {
      cout<<" "<< p[i][j]<<" |";
    }
  }
  free(p);
  return 0;
}
