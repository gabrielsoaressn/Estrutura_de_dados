#include <iostream>

using namespace std;

int main() {
  int nota1, nota2, nota3;
  float notaN, media;
    cout<<"------MEDIA NECESSARIA------"<<endl;
    cout<<"nota 1: ";
    cin >> nota1;
    cout<<"nota 2: ";
    cin >> nota2;
    cout<<"nota 3: ";
    cin >> nota3;

    media = (nota1+nota2+nota3)/3;
    if(media>=7)
    {
      cout <<"aprovado"<<endl;
    }
    if((media>=4)&&(media<7))
    {
      notaN = 4*media - nota1 - nota2 - nota3;
      cout <<"recuperar "<< notaN <<endl;
    }
    if(media<4)
    {
      cout <<"reprovado"<<endl;
    }
  return 0;
}
