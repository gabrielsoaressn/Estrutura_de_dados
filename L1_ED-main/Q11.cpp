#include <iostream>

using namespace std;


int main() {
  int *p, i = 0, qNum, maior;
  cout<<"------MAIOR VALOR------"<<endl;
  cout<<"quantidade de numeros: ";
  cin >> qNum;

  p = (int *)(malloc(qNum*sizeof(int)));
  if(p == NULL)
  {
    cout<< "\nerro na aloca dinamica";
    system ("pause");
    exit(1);
  }

  for(i=0;i<qNum;i++)
  {
    cout<<"digite um numero: ";
    cin >> p[i];
  }
  cout << "exibindo o array"<<endl;
  
  for(i=0;i<qNum;i++)
  {
    cout<< p[i]<<endl;
  }
  int invertido[qNum];

  cout<< "maior valor"<<endl;
  
  maior=p[i];

  for(i=0;i<qNum;i++)
  { 
    if(p[i]>maior)
    {
      maior = p[i];
    }
  }
  cout<< maior<< endl;
  
  free(p);
  return 0;
}
