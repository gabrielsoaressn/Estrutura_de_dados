#include <iostream>

using namespace std;


int main() {
  int num, i = 0, a = 0;
    cout<<"------NUMEROS PRIMOS------"<<endl;
    cout<<"numero a ser verificado: ";
    cin >> num;
  
    for(i=1;i<num;i++)
    {
      if(num%i==0)
      a++;
    }
    if(a<2)
    {
      cout<<"num primo\n";
    }
    
    if(a>=2)
    {
      cout<<"num n primo\n";
    }

  return 0;
}
