#include<iostream>
void helloworld(int m);

int main (void)

{
  int m= 9;
  helloworld (m);
  return 0;
}
void helloworld(int m) // implementacion: que y  
{
  std:: cout << "Hello world from a function!\n";
  std :: cout << m << "\n";
}
