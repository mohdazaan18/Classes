

#include <iostream>

using namespace std;
#include"inc.cpp"
int main()
{
   Polynomial p1;
   p1.setCoefficient(2,2);
   p1.setCoefficient(1,3);
   p1.setCoefficient(3,3);
   p1.setCoefficient(0,7);

   Polynomial p2;
    p2.setCoefficient(2,12);
     p2.setCoefficient(1,2);
      p2.setCoefficient(3,2);
       p2.setCoefficient(0,2);

       Polynomial p3 = p1 - p2;
       p3.print();

       Polynomial p4 = p1+p2;
       p4.print();

       Polynomial p5 = p1*p2;
       p5.print();






    return 0;
}
