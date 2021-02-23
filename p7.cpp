// WAP to accept two number from the user and find the grestest
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int n1;
    int n2;
    cout << "Enter two numbers";
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        cout << "n1 is greatest" << endl;
    }
    else
    {
        cout << "n2 is greatest" << endl;
    }
    return 0;
}
