#include<iostream>

int main (void)

{
  double a=0;
  std::  cout << "Porfis ingresa un n�mero entero: " ;
  std::  cin >> a; 
    if (a%3 ==0 )
      {
	std::	cout << "El n�mero " << a << " es divisible por 3\n";
      }
    else 
    {
      std:: cout << "El n�mero " << a << " no es divisible por 3\n";
    }
  return 0;

}
