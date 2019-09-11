#include <iostream>
#include <string>

int main(void)
{
 double val1 = 0;
 double val2 = 0;
 std:: cout <<"escribe val1 :\n";
 std:: cout <<"escribe val2 :\n";
 std:: cin >>val1;
 std:: cin >>val2;
 int sum= val1+val2;
 int resta=val1-val2;
 int producto=val1*val2;
 double cociente=val1/val2;
   std::cout <<sum <<"\n";
   std::cout <<resta <<"\n";
   std::cout <<producto <<"\n";
   std::cout <<cociente <<"\n";

   int val= val1-val2;
   if (val>0) {
     std::cout <<val1<<"es mayor a"<<val2<< "\n";
   }
   if (val=0) {
     std::cout <<val1<<"es igual a"<<val2<< "\n";
   }
   if (val<0) {
     std::cout <<val1<<"es menor a"<<val2<< "\n";
   }


 
  return 0;

}
  
