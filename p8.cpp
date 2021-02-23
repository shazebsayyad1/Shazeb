//WAP to accept the number from the user ands find its square using a function
#include <iostream>

using namespace std;
int findsqaure(int n)
{
    return n * n;
}
int main(int argc, char const *argv[])
{
    int square, number;
    cout << "enter the number to find its square" << endl;
    cin >> number;

    //function call
    square = findsqaure(number);
    cout << "sqaure of given number is " << findsqaure(5) << endl;

    //Or
    cout << "Square of given number is" << square << endl;
    return 0;
}
