#include <iostream>

using namespace std;


int main() {
  int *p, i = 0, qNum;
  cout<<"------ALOCADINAMICA------"<<endl;
  cout<<"quantos Ns vc vai inserir? ";
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
    cout<< p[i]<< endl;
  }
  return 0;
}
