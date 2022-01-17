
#include <iostream>
using namespace std;
#include "DynamicArray.cpp"

int main()
{
    Dynamic d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    d1.print();


    Dynamic d2(d1);
    d2.print();
    d2.add(2,100);



    Dynamic d3;
    d3 = d2;
    d3.print();
    return 0;
}
