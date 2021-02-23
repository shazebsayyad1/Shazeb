// WAP to print fibonacci series of the first 10 natural numbers
#include <iostream>
using namespace std;
int main()
{
    int n1 = 0;
    int n2 = 1;
    int fib = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << n1 << endl;
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;
    }

    return 0;
}