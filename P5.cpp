// WAP to create a class person
#include <iostream>
using namespace std;
class Person
{
public:
    int age;
    char name;

public:
    void displayInfo()
    {
        cout << "Person Age" << age << endl;
        cout << "Person Name" << name << endl;
    }
};
int main()
{
    Person shazeb;
    shazeb.age = 20;
    shazeb.name = SHA;
    shazeb.displayInfo();
}
