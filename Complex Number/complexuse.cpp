/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#include"complex.cpp"


int main()
{
   complex c1(5,-3);
   complex c2(3,2);
   c1.sumc(c2);
   cout<<"Sum :"<<endl;
   c1.display();
   c2.display();

   c1.multiply(c2);
    cout<<"multiply :"<<endl;
   c1.display();
   c2.display();




}
