#include <iostream>
using namespace std;
#include"Fraction.cpp"

int main()
{
    Fraction f1(1,2);
    Fraction f2(3,4);
    Fraction f3 = f1+f2;
    Fraction f4 = f1.addi(f2);
    f1.display();
    f2.display();
    f3.display();
    f4.display();

    if(f3 == f4){
        cout<<"Equal"<<endl;
    }
    else {
        cout<<"not Equal"<<endl;
    }

}
