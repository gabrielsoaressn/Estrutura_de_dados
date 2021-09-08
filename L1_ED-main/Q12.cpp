#include <iostream>

using namespace std;


int main() {
  int *p, i = 0, qNum;
  cout<<"------MOVER------"<<endl;
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
  cout<<"movendo"<<endl;

  for(i=qNum-1;i>=0;i--)
  { 
    if(i==0)
    {
      break;
    }
    p[i-1]=p[i];
  }
  
  cout << "exibindo o primeiro elemento"<<endl;
  cout<< p[0]<<endl;
  
  
  free(p);
  return 0;
}
