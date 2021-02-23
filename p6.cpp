// WAP to create a class car
#include <iostream>
using namespace std;
class Car
{
public:
    int price;
    void display()
    {
        cout << price << endl;
    }
};

int main()
{
    Car mercedes;
    mercedes.price = 1000;
    mercedes.display();
    Car bmw;
    bmw.price = 900;
    bmw.display();
    return 0;
}