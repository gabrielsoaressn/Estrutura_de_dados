#include <iostream>
#include <math.h>

using namespace std;

double calcularDelta(double coefA, double coefB, double coefC);

double calcularRaiz1(double coefA, double coefB, double delta);

double calcularRaiz2(double coefA, double coefB, double delta);

int main() {
  float a, b, c;
    cout<<"------EQ SEGUNDO GRAU------"<<endl;
    cout<<"coeficiente de a: ";
    cin >> a;
    cout<<"coeficiente de b: ";
    cin >> b;
    cout<<"coeficiente de c: ";
    cin >> c;

    cout << "r1 = " << calcularRaiz1(a,b,calcularDelta(a,b,c)) << endl;
    cout << "r2 = " << calcularRaiz2(a,b,calcularDelta(a,b,c)) << endl;
  return 0;
}

double calcularDelta(double coefA, double coefB, double coefC)
{
  return (coefB*coefB)-(4*coefA*coefC);
}


double calcularRaiz1(double coefA, double coefB, double delta)
{
  return (-coefB+sqrt(delta))/(2*coefA);
}


double calcularRaiz2(double coefA, double coefB, double delta)
{
  return (-coefB-sqrt(delta))/(2*coefA);
}
