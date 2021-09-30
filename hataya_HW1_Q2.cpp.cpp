#include <iostream>

using namespace std;

class Check {
    private:
    int CheckNum;
    string CheckMemo;
    float CheckAmount;

    public:
    int getCheckNum() {return CheckNum;}
    string getCheckMemo () {return CheckMemo;}
    float getCheckAmount () {return CheckAmount;}

    void setCheckNum (int x) {CheckNum=x;}
    void setCheckMemo (string x){CheckMemo=x;}
    void setCheckAmount (float x){CheckAmount=x;}
    static int number;

    Check()
    {
        CheckNum = 0;
        CheckMemo = "";
        CheckAmount = 0;
        number++;
    }

class CheckBook {
    static const int N = 5;
    float balance;
    Check checkArray [N];
    float lastDeposit;
    int numofChecks;
    int checkLimit = N;
    static int allChecks;



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
        CheckBook cb;
        cout<<"Enter Check Amount: ";
        cin>>amount;
        cout<<"Enter Check Memo: ";
        cin>>c.CheckMemo;


        if (numOfChecks<N && allChecks<10 && amount<balance)
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


//int Check::number = 0;

int main()
{
    Check c
    CheckBook cb1(1000), cb2(500);
    for(int i=0; i<10;i++)
    {
        cb1.writeCheck(150);
        cb2.writeCheck(130);
    }
    cout<<"cb1 check details"<<endl;
    cb1.displayChecks();
    cout<<"cb2 check details"<<endl;
    cb2.displayChecks();
    cout<<cb1.getallChecks()<<endl;
    cout<<cb2.getallChecks()<<endl;

    return 0;
}
