#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
#include <strings.h>

using namespace std;

int main() {
  int i = 0, j = 0, qLetras, contador[26];
  string palavra;
  char alfabeto[26]{
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'
  };

  for(i=0;i<26;i++)
  {
    contador[i]=0;
  }

  cout<<"------QUANTAS VEZES CADA UM APARECE------"<<endl;

  cout<<"digite a palavra: ";
  cin >> palavra;
  
  cout << "palavra inserida: ";
  
  cout << palavra << endl;

  cout<<"letra | repete quantas vezes"<<endl;

  for(i = 0; palavra[i]!= '\0'; i++)
  { 
    for(j=0;j<26;j++){
      if(palavra[i]==alfabeto[j])
      {
        contador[j]++;
        cout<< alfabeto[j] << "    repete "<< contador[j]<< " vezes"<< endl;
      }
    }
  }
  return 0;
}
