#include <iostream>

using namespace std;


int main() {
  int *p, i = 0, qNum, j = 0;
  cout<<"------INVERTER VETOR------"<<endl;
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
  cout<< "invertendo o array"<<endl;
  
  j=qNum-1;
  
  for(i=0;i<qNum;i++)
  { 
    invertido[i]=p[j];
    cout << invertido[i]<<endl; 
    j--;
  }
  
  free(p);
  return 0;
}
