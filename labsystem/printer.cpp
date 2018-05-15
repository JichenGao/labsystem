#include<printer.h>
#include<iostream>

Printer::Printer(string id, string name, string comment, string type, string factory, string buytime):
    Equipment(id, name, comment, type, factory){
    _buytime = buytime;
}
void Printer::creatPrinter(){
    string id, name, comment, type, factory, buytime;
    cout << "Please Input ID" <<endl;
    cin >> id;
    cout << "Please Input Name" <<endl;
    cin >> name;
    cout << "Please Input Type" <<endl;
    cin >> type;
    cout << "Please Input Buytime" <<endl;
    cin >> buytime;
    cout << "Please Input Factory" <<endl;
    cin >> factory;
    cout << "Please Input Comment" <<endl;
    cin >> comment;

    string txtroad = getTextroad(id);
    string printerlist = getTextroad("printerlist");

    ofstream outfile;
    outfile.open(txtroad);
    string printer[2][6] = {{"Name"  ,"ID"   ,"Type"   ,"Buytime"    ,"Factory"    ,"Comment"},
                        {name, id, type, buytime, factory, comment}};
    int i,j;
    for(i=0; i<2; i++){
        for(j=0; j<6; j++){
            outfile << left << setw(20) << printer[i][j];
        }
        outfile << endl;
    }
    outfile.close();

    ofstream outfile1(printerlist,ios::app);
    if(!outfile1){
        cout << "Open the file faiure...\n";
        exit(0);
    }
    outfile1 << left << setw(20) << id << name <<endl;
    outfile1.close();

    system("cls");
    cout << "Succeed!" <<endl;
}
