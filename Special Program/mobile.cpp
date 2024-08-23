#include <iostream>
using namespace std;

class Mobile
{
private:

    string Mobile_Owner_Name;
    string Mobile_Number;
    int    Mobile_Balance;
    string OS_Name;
    bool   Lock_Status;

public:
    Mobile()
    {
        Mobile_Owner_Name="Talha";
        Mobile_Number="";
        Mobile_Balance=50;
        OS_Name="";
        Lock_Status=false;
        //cout<<"This is a empty default constructor !"<<endl;

    }
    Mobile(string e,string d,int c,string b,bool a)
    {
        Mobile_Owner_Name=e;
        Mobile_Number=    d;
        Mobile_Balance=   c;
        OS_Name=          b;
        Lock_Status=      a;

        cout<<"This is a parameterized constructor !"<<endl;
        cout<<endl;

    }
    ~Mobile()
    {
        //cout<<"Destructor is called "<<endl;
    }
    void setMobile_Owner_Name(string e)
    {
        Mobile_Owner_Name=e;
    }
    string getMobile_Owner_Name()
    {
        return  Mobile_Owner_Name;
    }


    void setMobile_Number(string d)
    {
        Mobile_Number=d;

    }
    string getMobile_Number()
    {
        return Mobile_Number;
    }


    void setMobile_Balance(int c)
    {
        Mobile_Balance=c;
    }
    int getMobile_Balance()
    {
        return Mobile_Balance;
    }


    void setOS_Name(string b)
    {
        OS_Name=b;
    }
    string getOS_Name()
    {
        return OS_Name;
    }


    void setLock_Status(bool a)
    {
        Lock_Status=a;
    }
    bool getLock_Status()
    {
        if(Lock_Status==false)
        {
            cout<<"Your mobile is unlocked"<<endl;
        }
        else
            cout<<"Your phone is locked"<<endl;

    }


    void showinfo()
    {
        cout<<"Mobile Owner Name:"<<Mobile_Owner_Name<<endl;
        cout<<"Mobile Number    :"<<Mobile_Number<<endl;
        cout<<"Mobile Balance   :"<<Mobile_Balance<<endl;
        cout<<"Mobile OS Name   :"<<OS_Name<<endl;
        getLock_Status();

    }
    void Recharge(int amount)
    {
        Mobile_Balance+=amount;
    }

    void CallSomeone(int timeDuration)
    {

        const float ct=.5;
        float Total_cost=ct*timeDuration;
        Mobile_Balance= Mobile_Balance-Total_cost;

    }
};


int main()
{  Mobile m1;
     string y="123talha",x;

    cout<<"  * * ** Welcome to your mobile interface ** * * "<<endl;

    cout<<endl;cout<<endl;

    cout<<"  ** Enter Your password and press ENTER! ** "<<endl;

    cin>>x;

   cout<<endl;cout<<endl;

   for (int i=0; i<30;i++)
   {



    if(x==y)
    {
    int op;

    cout<<"                     Choose your operation            "<<endl;cout<<endl;


    cout<<"  1.Show information           "<<endl;

    cout<<"  2.Show Balance               "<<endl;

    cout<<"  3.Recharge                   "<<endl;

    cout<<"  4.Exit !                     "<<endl;

    cout<<"                     Enter your option                "<<endl;cin>>op; //Takes the input from the user!



    if(op==1)     {m1.showinfo();}

    else if(op==2){cout<<"  Your mobile balance is "<<m1.getMobile_Balance()<<endl;}

    else if(op==3)
    {
        int x;
        cout<<"Enter your amount "<<endl;
        cin>>x;
        m1.Recharge(x);
        cout<<"Your new balance is "<<m1.getMobile_Balance()<<endl;

    }

    else if(op==4){break;}

    else {cout<<"Incorrect option ! Try Again "<<endl; return main();}

    }

    else{ cout<<"Incorrect password ! "; return main();}}

    cout<<"Do you to go to main menu again ?"<<endl;
    cout<<"1. Yes "<<" 2.No "<<endl;
    int w;
    cin>>w;

    if(w==1){return main();}
    else{ cout<<"Program ends "<<endl;}


    return 0;
}

