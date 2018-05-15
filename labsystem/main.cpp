#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <conio.h>
#include "book.h"
#include "paper.h"
#include "user.h"
#include "bookmanage.h"
#include "papermanage.h"
#include "usermanage.h"
using namespace std;

int main()
{
    int main_menu(),submenu_1(),submenu_2();
    Book mybook("","","","","","","");
    Paper mypaper("","","","","","","");
    User myuser("","","","","");
    Bookmanage mybookmanage("");
    Papermanage mypapermanage("");
    Usermanage myusermanage("");
    void Anykey();
    int choice1, choice2;
    int flag = 0;       //初始开关值为0，进入主菜单循环
    while (flag == 0) {
        choice1 = main_menu();
        system("cls");
        switch (choice1){
            case 1:
                flag = 1;    //手动激活flag开关进入子菜单循环
                while (flag == 1){
                    choice2 = submenu_1();
                    system("cls");
                    switch (choice2){
                        case 1:
                            mybook.creatBook();
                            Anykey();
                            break;
                        case 2:
                            mybook.changeBook();
                            Anykey();
                            break;
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 7:
                            cout << "hello" <<endl;
                            Anykey();
                            break;
                        case 0:
                            flag -= 1;  //返回主菜单
                            break;
                        default:
                            cout << "Wrong Operation" <<endl;
                            Anykey();
                            break;
                    }
                    system("cls");
                }
                break;

            case 2:
                flag = 1;    //手动激活flag开关进入子菜单循环
                while (flag == 1){
                    choice2 = submenu_1();
                    system("cls");
                    switch (choice2){
                        case 1:
                            mypaper.creatPaper();
                            Anykey();
                            break;
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 7:
                            cout << "hello" <<endl;
                            Anykey();
                            break;
                        case 0:
                            flag -= 1;  //返回主菜单
                            break;
                        default:
                            cout << "Wrong Operation" <<endl;
                            Anykey();
                            break;
                    }
                    system("cls");
                }
                break;

            case 3:
                flag = 1;    //手动激活flag开关进入子菜单循环
                while (flag == 1){
                    choice2 = submenu_2();
                    system("cls");
                    switch (choice2){
                        case 1:
                            myuser.createUser();
                            Anykey();
                            break;
                        case 2:
                            cout << "hello" <<endl;
                            Anykey();
                            break;
                        case 0:
                            flag -= 1;  //返回主菜单
                            break;
                        default:
                            cout << "Wrong Operation" <<endl;
                            Anykey();
                            break;
                    }
                    system("cls");
                }
                break;

            default:
                cout << "Wrong Operation" <<endl;
                Anykey();
                system("cls");
                break;
        }
    }
    return 0;
}


int main_menu(){
    int i;
    cout << "Welcome to the Management System!" << endl;
    cout << "1. Book Management" << endl;
    cout << "2. Paper Management" << endl;
    cout << "3. User Management" << endl;
    cout << "Please select a fuction:";
    cin >> i;
    return i;
}

int submenu_1(){
    int j;
    cout << "1. Adding" << endl;
    cout << "2. Modification" << endl;
    cout << "3. Deleting" << endl;
    cout << "4. Searching" << endl;
    cout << "5. Borrowing" << endl;
    cout << "6. Returing" << endl;
    cout << "7. Online Reading" << endl;
    cout << "0. Quit" << endl;
    cout << "Please select a fuction:";
    cin >> j;
    return j;
}

int submenu_2(){
    int k;
    cout << "1. Add a new user" << endl;
    cout << "2. Delete a user" << endl;
    cout << "0. Quit" <<endl;
    cout << "Please select a fuction:";
    cin >> k;
    return k;
}

void Anykey(){
    cout << "\npress any key to return..." <<endl;
    getch();
}
