#include<iostream>

int main (void)

{
  double a=0;
  std::  cout << "Porfis ingresa un número entero: " ;
  std::  cin >> a; 
    if (a%3 ==0 )
      {
	std::	cout << "El número " << a << " es divisible por 3\n";
      }
    else 
    {
      std:: cout << "El número " << a << " no es divisible por 3\n";
    }
  return 0;

}
