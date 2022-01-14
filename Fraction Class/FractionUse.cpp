/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#include"Fraction.cpp"


int main()
{
    Fraction f1(1,2);
    Fraction f2(3,4);
    f1.display();
    f2.display();

    f1.addi(f2);


    f1.display();
    Fraction *f3 = new Fraction(2,4);

    f3->addi(f1);
    f3->display();

    Fraction f4(4,7);
    f4.multiply(*f3);
    f4.display();

    cout<<"New operator"<<endl;
    f1.display();
    f2.display();
    f1.subs(f2);
    f1.display();

    f2.divi(f1);
    f2.display();


}
