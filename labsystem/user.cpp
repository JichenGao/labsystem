#include "user.h"

User::User(string n, string p, string e, string t, string id){
    _nickname = n;
    _password = p;
    _email = e;
    _tel = t;
    _ID = id;
}

string User::getTextroad(string filename)    {return "C:\\Users\\78679\\Desktop\\GradeTwoSpring\\user\\"+filename+".txt";}

void User::createUser(){
    string a,b,c,d,e;
    cout << "Please Input Nickname" <<endl;
    cin >> a;
    cout << "Please Input Password" <<endl;
    cin >> b;
    cout << "Please Input Email" <<endl;
    cin >> c;
    cout << "Please Input Telphone Number" <<endl;
    cin >> d;
    cout << "Please Input ID" <<endl;
    cin >> e;
    setUser(a,b,c,d,e);
    string txtroad = getTextroad(_ID);
    string userlist = getTextroad("userlist");

    ofstream outfile;
    outfile.open(txtroad);
    string user[2][5] = {{"Nickname"  ,"Password"   ,"Email"   ,"Telphone Number"   ,"ID"   },
                        {_nickname, _password, _email, _tel, _ID}};
    int i,j;
    for(i=0; i<2; i++){
        for(j=0; j<5; j++){
            outfile << left << setw(20) << user[i][j];
        }
        outfile << endl;
    }
    outfile.close();

    ofstream outfile1(userlist,ios::app);
    if(!outfile1){
        cout << "Open the file faiure...\n";
        exit(0);
    }
    outfile1 << left << setw(20) << _ID << _nickname <<endl;
    outfile1.close();

    system("cls");
    cout << "Succeed!" <<endl;
}

void User::setUser(string n, string p, string e, string t, string id){
    _nickname = n;
    _password = p;
    _email = e;
    _tel = t;
    _ID = id;
}
