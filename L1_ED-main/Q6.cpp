#include <iostream>

using namespace std;


int main() {
  int nInicial, nFinal, select, i = 0, soma = 0;
    cout<<"------SOMATORIO------"<<endl;
    cout<<"inicial: ";
    cin >> nInicial;

    cout<<"final: ";
    cin >> nFinal;
        
    for(i=nInicial;i<=nFinal;i++)
    {
      soma += i;
    }
    cout << soma << endl;
    
  return 0;
}
