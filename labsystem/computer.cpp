#include <computer.h>
#include <iostream>

Computer::Computer(string id, string name, string comment, string type, string factory, string buytime,
                   string owner): Equipment(id, name, comment, type, factory){
    _buytime = buytime;
    _owner = owner;
}

void Computer::creatComputer(){
    string id, name, comment, type, factory, buytime, owner;
    cout << "Please Input ID" <<endl;
    cin >> id;
    cout << "Please Input Name" <<endl;
    cin >> name;
    cout << "Please Input Owner" <<endl;
    cin >> owner;
    cout << "Please Input Type" <<endl;
    cin >> type;
    cout << "Please Input Buytime" <<endl;
    cin >> buytime;
    cout << "Please Input Factory" <<endl;
    cin >> factory;
    cout << "Please Input Comment" <<endl;
    cin >> comment;

    string txtroad = getTextroad(id);
    string computerlist = getTextroad("computerlist");

    ofstream outfile;
    outfile.open(txtroad);
    string computer[2][7] = {{"Name"  ,"ID"   ,"Owner"   ,"Type"   ,"Buytime"    ,"Factory"    ,"Comment"},
                        {name, id, owner, type, buytime, factory, comment}};
    int i,j;
    for(i=0; i<2; i++){
        for(j=0; j<7; j++){
            outfile << left << setw(20) << computer[i][j];
        }
        outfile << endl;
    }
    outfile.close();

    ofstream outfile1(computerlist,ios::app);
    if(!outfile1){
        cout << "Open the file faiure...\n";
        exit(0);
    }
    outfile1 << left << setw(20) << id << name <<endl;
    outfile1.close();

    system("cls");
    cout << "Succeed!" <<endl;
}
