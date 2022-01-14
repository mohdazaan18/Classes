#include <iostream>

using namespace std;

#include "student.cpp"
int main()
{
    char name[] = "abcd";
Student s1(10,name);
s1.display();

Student s2(s1);
s2.name[2] = 'p';
s1.display();
s2.display();
}
