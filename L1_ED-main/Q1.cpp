#include <iostream>
#include <math.h>

using namespace std;

int main() {
  double raio, area;
  while(1)
  {
    cout<<"------CALCULAR A AREA DO CIRCULO------"<<endl;
    cout<<"Digite o raio: ";
    cin >> raio;
    if(raio<0)
    {
      cout <<"valor invalido"<<endl;
      continue;
    }

    area = raio*raio*M_PI;
    cout << "area = "<< area << endl;
    cout << "fim do programa"<<endl;
    break;
  }
  return 0;
}
