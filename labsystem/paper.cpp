#include <paper.h>
#include <iostream>

Paper::Paper(string id, string name, string comment, string author, string time, string periodical,
             string location): Document(id, name, comment, author, time){
    _periodical = periodical;
    _location = location;
}

void Paper::creatPaper(){
    string id, name, comment, author, time, periodical;
    cout << "Please Input ID" <<endl;
    cin >> id;
    cout << "Please Input Title" <<endl;
    cin >> name;
    cout << "Please Input Author" <<endl;
    cin >> author;
    cout << "Please Input Periodical" <<endl;
    cin >> periodical;
    cout << "Please Input Time" <<endl;
    cin >> time;
    cout << "Please Input Comment" <<endl;
    cin >> comment;
    string location = getLocation(id);
    string paperlist = getLocation("paperlist");
    ofstream outfile;
    outfile.open(location);
    string paper[2][7] = {{"Title",  "ID",   "Author"   ,"Periodical",    "Time",    "Comment",
                           "Location"},
                        {name, id, author, periodical, time, comment, location}};
    int i,j;
    for(i=0; i<2; i++){
        for(j=0; j<7; j++){
            outfile << left << setw(20) << paper[i][j];
        }
        outfile << endl;
    }
    outfile.close();

    ofstream outfile1(paperlist,ios::app);
    if(!outfile1){
        cout << "Open the file faiure...\n";
        exit(0);
    }
    outfile1 << left << setw(20) << id << name <<endl;
    outfile1.close();

    system("cls");
    cout << "Succeed!" <<endl;
}

