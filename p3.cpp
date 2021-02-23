// WAP to find the greatest of three number.
#include <iostream>
using namespace std;
int main()
{
    int n1 = 40;
    int n2 = 30;
    int n3 = 10;
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout << "n1 is greatest" << endl;
        }
        else
        {
            cout << "n3 is greatest" << endl;
        }
    }
    else
    {
        if (n2 > n3)
        {
            cout << "n2 is greatest" << endl;
        }
        else
        {
            cout << "n3 is greatest" << endl;
        }
    }
}