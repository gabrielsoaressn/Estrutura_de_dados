#include <iostream>

using namespace std;


int main() {
  int nInicial, nFinal, select, i = 0, a=0;
    cout<<"------SEQ ENTRE------"<<endl;
    cout<<"inicial: ";
    cin >> nInicial;

    cout<<"final: ";
    cin >> nFinal;

    
    cout <<"1-a"<<endl<<"2-b"<<endl<<"3-c"<<endl;
    cin >> select;
    switch(select)
    {
      case 1:
      {
        while(nInicial != nFinal)
        {
          if(i==0)
          {
            nInicial++;
            i++;
            continue;  
          }
          cout << nInicial << endl;
          nInicial++;
        }
        break;
        
      }case 2:
      {
        do
        {
         
          nInicial++;
           if(nInicial==nFinal)
          {
            break;
          }
          cout << nInicial<<endl;

        }while(nInicial!=nFinal);
      
      }case 3:
      {
        for(i=nInicial;i<nFinal;i++)
        {
          if(a==0)
          {
            a++;
            continue;  
          }
          cout << i << endl;

        }
      }
    }
  return 0;
}
