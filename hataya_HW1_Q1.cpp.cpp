#include <iostream>

using namespace std;

struct Check {
    int CheckNum;
    string CheckMemo;
    float CheckAmount;

};

class CheckBook {
    static const int N = 5;
    float balance;
    Check checkArray [N];
    float lastDeposit;
    int numofChecks;
    int checkLimit = N;


    CheckBook (): balance(0), numofChecks(0){}
    CheckBook(int b1): balance(b1), numofChecks(0){}


    void deposit (float addAmount)
    {
        cout<<"Enter amount to add: ";
        cin>>addAmount;
        balance += addAmount;
        cout<<"Current Balance: "<<balance;

    }
    void displayChecks()
    {
        for (int i=0; i<N; i++)
        {
            //array
            cout<<checkArray[i]<<endl;
        }
    }
    bool writeCheck (float amount)
    {
        Check c;
        cout<<"Enter Check Amount: ";
        cin>>amount;
        cout<<"Enter Check Memo: ";
        cin>>c.CheckMemo;


        if (amount<balance)
        {
            //array
            checkArray[numofChecks] = c;
            void deposit (float addAmount);
            return true;
        }
        else
            return false;
    }




};

int main()
{


    cout << "Hello world!" << endl;
    return 0;
}
