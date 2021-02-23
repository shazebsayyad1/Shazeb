// WAP to create a class account (class is keyword)
#include <iostream>
using namespace std;
class Account
{
public:
    int accNo;
    double balance;

public:
    void displayInfo()
    {
        cout << "Account Number" << accNo << endl;
        cout << "Account Balance" << balance << endl;
    }
};
int main()
{
    Account shazeb;
    shazeb.accNo = 101;
    shazeb.balance = 100001.01;
    shazeb.displayInfo();

    Account SHA;
    SHA.accNo = 104;
    SHA.balance = 100005;
    SHA.displayInfo();

    return 0;
}
