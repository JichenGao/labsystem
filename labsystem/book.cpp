#include <book.h>
#include <iostream>

Book::Book(string id, string name, string comment, string author, string time, string isbn, string press):
    Document(id, name, comment, author, time){
    _ISBN = isbn;
    _press = press;
}
void Book::creatBook(){
    string id, name, comment, author, time, isbn, press;
    cout << "Please Input ID" <<endl;
    cin >> id;
    cout << "Please Input Name" <<endl;
    cin >> name;
    cout << "Please Input Author" <<endl;
    cin >> author;
    cout << "Please Input Press" <<endl;
    cin >> press;
    cout << "Please Input Time" <<endl;
    cin >> time;
    cout << "Please Input ISBN" <<endl;
    cin >> isbn;
    cout << "Please Input Comment" <<endl;
    cin >> comment;

    string txtroad = getTextroad(id);
    string booklist = getTextroad("booklist");

    ofstream outfile;
    outfile.open(txtroad);
    string book[2][7] = {{"Name"  ,"ID"   ,"Author"   ,"Press"   ,"Time"    ,"ISBN"    ,"Comment"},
                        {name, id, author, press, time, isbn, comment}};
    int i,j;
    for(i=0; i<2; i++){
        for(j=0; j<7; j++){
            outfile << left << setw(20) << book[i][j];
        }
        outfile << endl;
    }
    outfile.close();

    ofstream outfile1(booklist,ios::app);
    if(!outfile1){
        cout << "Open the file faiure...\n";
        exit(0);
    }
    outfile1 << left << setw(20) << id << name <<endl;
    outfile1.close();

    system("cls");
    cout << "Succeed!" <<endl;
}
void Book::changeBook(){
    string id;
    cout << "Please enter the book ID you want to change" <<endl;
    cin >> id;
}
