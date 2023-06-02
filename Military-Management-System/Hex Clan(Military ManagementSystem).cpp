///Admin User name:    Admin
///Admin Password   :    AKMU

#include <iostream>
#include <fstream>
#include <ostream>
#include <istream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <string>

using namespace std;


            ///Class used here



class account
{
public:
    char a;
    int id;
    char pass[100];
    char name[50];
    char grank[1000];
    char post[1000];
    int unit;


    void create_account();
    void details();
    string retpass();
    int retid();
    void modify();
    void gotoxy(int, int);
    void table();

};


int account::retid()
{
    return id;
}


void account::gotoxy(int x, int y)
{
    COORD coord;

    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE), coord);
}





void account::create_account()
{
    gotoxy(45,5);
    cout<<"Enter your ID: ";
    cin>>id;
    gotoxy(45,6);
    cout<<"Enter the password: ";

    int i;
    for(i=0;;)
    {

        a=getch();
        if(a>='A'&&a<='Z'||a>='a'&&a<='z'||a>='0'&&a<='9')
        {
        pass[i]=a;
        cout<<"*";
        i++;
         }
         if(a=='\b'&&i>=1)
         {
             cout<<"\b \b";
             --i;
         }
         if(a=='\r')
         {
             pass[i]='\0';
             break;
         }
    }
    ///cin>>pass;

    gotoxy(45,7);
    cout<<"Enter the name: ";
    cin.ignore();
    fflush(stdin);
    gets(name);
    gotoxy(45,8);
    cout<<"Enter the rank: ";
    fflush(stdin);
    gets(grank);
    gotoxy(45,9);
    cout<<"Enter the post: ";
    fflush(stdin);
    gets(post);
    gotoxy(45,10);
    cout<<"Enter the unit: ";
    cin>>unit;

    gotoxy(45,13);
    cout<<"Account created successfully..."<<endl;
    gotoxy(45,15);
    cout<<"Press Enter to continue..."<<endl;
    cin.get();

}


void account::details()
{
    gotoxy(12,3);
    cout<<"ID"<<endl;
    gotoxy(30,3);
    cout<<"NAME"<<endl;;
    gotoxy(60,3);
    cout<<"RANK"<<endl;;
    gotoxy(80, 3);
    cout<<"POST";
    gotoxy(100,3);
    cout<<"Unit";
    gotoxy(10, 4);
    cout<<"=================================================================================================="<<endl;
    gotoxy(11,5);
    cout<<id;
    gotoxy(25,5);
    cout<<name;
    gotoxy(58,5);
    cout<<grank;
    gotoxy(77,5);
    cout<<post;
    gotoxy(101, 5);
    cout<<unit;
}


void account::table()
{

    cout<<"=================================================================================================="<<endl;
    cout<<"ID  : "<<id<<endl;
    cout<<"NAME: "<<name<<endl;
    cout<<"RANK: "<<grank<<endl;
    cout<<"POST: "<<post<<endl;
    cout<<"UNIT: "<<unit<<endl;
}



string account::retpass()
{
    return pass;
}


void account::modify()
{
    char ch;
    do
    {
        system("CLS");
    cout<<"\n\n\n"<<endl;
    cout<<"                                        ===================================="<<endl;
    cout<<"                                                   MODIFY ACCOUNT"<<endl;
    cout<<"                                        ===================================="<<endl;
    gotoxy(50, 8);
    cout<<"1. Name"<<endl;
    gotoxy(50, 9);
    cout<<"2. Rank"<<endl;
    gotoxy(50, 10);
    cout<<"3. Post"<<endl;
    gotoxy(50, 11);
    cout<<"4. Unit"<<endl;
    gotoxy(50, 12);
    cout<<"5. Main Menu"<<endl;
    gotoxy(46, 16);
    cout<<"Choose your option(1-5): ";
    cin>>ch;
    system("CLS");
    switch(ch)
    {
    case '1':
        {
            cin.ignore();
            gotoxy(50, 8);
            cout<<"Modify the Name: ";
            fflush(stdin);
            gets(name);
            system("CLS");
            gotoxy(50, 8);
            cout<<"Please wait while we change details......."<<endl;
            Sleep(3000);
            gotoxy(50, 10);
            cout<<"Name changed successfully........."<<endl;
            gotoxy(50, 12);
            cout<<"Press Enter key to continue......"<<endl;
            break;
        }
    case '2':
        {
            gotoxy(50, 8);
            cin.ignore();
            cout<<"Modify the Rank: ";
            fflush(stdin);
            gets(grank);
            system("CLS");
            gotoxy(50, 8);
            cout<<"Please wait while we change details......."<<endl;
            Sleep(3000);
            gotoxy(50, 10);
            cout<<"Rank changed successfully........."<<endl;
            gotoxy(50, 12);
            cout<<"Press Enter key to continue......"<<endl;
            break;
        }
    case '3':
        {
            gotoxy(50, 8);
            cin.ignore();
            cout<<"Modify the Post: ";
            fflush(stdin);
            gets(post);
            system("CLS");
            gotoxy(50, 8);
            cout<<"Please wait while we change details......."<<endl;
            Sleep(3000);
            gotoxy(50, 10);
            cout<<"Post changed successfully........."<<endl;
            gotoxy(50, 12);
            cout<<"Press Enter key to continue......"<<endl;
            break;
        }
    case '4':
        {
            gotoxy(50, 8);
            cin.ignore();
            cout<<"Modify the Unit: ";
            cin>>unit;
            system("CLS");
            gotoxy(50, 8);
            cout<<"Please wait while we change details......."<<endl;
            Sleep(3000);
            gotoxy(50, 10);
            cout<<"Unit changed successfully........."<<endl;
            gotoxy(50, 12);
            cout<<"Press Enter key to continue......"<<endl;
            break;
        }
    case '5':
        {
            gotoxy(50, 8);
            cout<<"Taking you to the main menu"<<endl;
            gotoxy(50, 9);
            cout<<"Press Enter key to continue...."<<endl;
            Sleep(2000);
            break;
        }
    }
    cin.ignore();
    cin.get();
    }
    while(ch!='5');
}




                ///Functions are declared here




void write_account();
void intro();
void design();
void Color(int);
void outdro();
void write_weapon();
void main_menu_log_in();
void log_in();
void bullets();
void foods();
void accessories();
void account_details(string);
void main_menu();
void admin_menu();
void gotoxy(int, int);
void details_admin(int);
void modify_details(int);
void show_all();
void delete_account(int);





                ///Main function used




int main()
{

    intro();
    main_menu();

    return 0;
}







            ///Function for coloring




void Color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}






            ///This function declares the gotoxy function








void gotoxy(int x, int y)
{
    COORD coord;

    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE), coord);
}





            ///Function of Team design





void design()
{
    Color(13);
    Sleep(100);
    gotoxy(49, 5);
    cout<<"___________________________________________"<<endl;
    Sleep(100);
    gotoxy(48, 6);
    cout<<"/"<<endl;
    Sleep(100);
    gotoxy(47,7);
    cout<<"/"<<endl;
    Sleep(100);
    gotoxy(46,8);
    cout<<"/"<<endl;
    Sleep(100);
    gotoxy(45, 9);
    cout<<"/"<<endl;
    Sleep(100);
    gotoxy(44, 10);
    cout<<"/"<<endl;
    Sleep(100);
    gotoxy(43, 11);
    cout<<"/"<<endl;
    Sleep(100);
    gotoxy(42,12);
    cout<<"/"<<endl;
    Sleep(100);
    gotoxy(92,6);
    cout<<"\\"<<endl;
    Sleep(100);
    gotoxy(93,7);
    cout<<"\\"<<endl;
    Sleep(100);
    gotoxy(94,8);
    cout<<"\\"<<endl;
    Sleep(100);
    gotoxy(95, 9);
    cout<<"\\"<<endl;
    Sleep(100);
    gotoxy(96, 10);
    cout<<"\\"<<endl;
    Sleep(100);
    gotoxy(97, 11);
    cout<<"\\"<<endl;
    Sleep(100);
    gotoxy(98, 12);
    cout<<"\\"<<endl;
    Sleep(100);
    gotoxy(42,13);
    cout<<"\\"<<endl;
    Sleep(100);
    gotoxy(43,14);
    cout<<"\\"<<endl;
    Sleep(100);
    gotoxy(44,15);
    cout<<"\\"<<endl;
    Sleep(100);
    gotoxy(45, 16);
    cout<<"\\"<<endl;
    Sleep(100);
    gotoxy(46, 17);
    cout<<"\\"<<endl;
    Sleep(100);
    gotoxy(47, 18);
    cout<<"\\"<<endl;
    Sleep(100);
    gotoxy(98, 13);
    cout<<"/"<<endl;
    Sleep(100);
    gotoxy(97,14);
    cout<<"/"<<endl;
    Sleep(100);
    gotoxy(96,15);
    cout<<"/"<<endl;
    Sleep(100);
    gotoxy(95, 16);
    cout<<"/"<<endl;
    Sleep(100);
    gotoxy(94, 17);
    cout<<"/"<<endl;
    Sleep(100);
    gotoxy(93, 18);
    cout<<"/"<<endl;
    Sleep(100);
    gotoxy(50, 7);
    cout<<"||          ||  ||========  \\\\        //"<<endl;
    Sleep(100);
    gotoxy(50, 8);
    cout<<"||          ||  ||           \\\\      //"<<endl;
    Sleep(100);
    gotoxy(50, 9);
    cout<<"||          ||  ||            \\\\    //"<<endl;
    Sleep(100);
    gotoxy(50, 10);
    cout<<"||          ||  ||             \\\\  //"<<endl;
    Sleep(100);
    gotoxy(50,11);
    cout<<"||==========||  ||========      \\\\//"<<endl;
    Sleep(100);
    gotoxy(50, 12);
    cout<<"||          ||  ||              //\\\\"<<endl;
    Sleep(100);
    gotoxy(50, 13);
    cout<<"||          ||  ||             //  \\\\"<<endl;
    Sleep(100);
    gotoxy(50, 14);
    cout<<"||          ||  ||            //    \\\\"<<endl;
    Sleep(100);
    gotoxy(50, 15);
    cout<<"||          ||  ||========   //      \\\\"<<endl;
    Sleep(100);
    gotoxy(69, 18);
    cout<<"CLAN"<<endl;
    Sleep(100);
    gotoxy(48, 19);
    cout<<"---------------------------------------------"<<endl;
}










            ///Function for main menu








void main_menu()
{
     char ab;
    char ch;
    char num[100];
        do
    {
        Color(13);
        system("CLS");
        gotoxy(52, 9);
        cout<<"==============================================="<<endl;
        gotoxy(52, 10);
        cout<<"||                                           ||"<<endl;
        gotoxy(52, 11);
        cout<<"||                  1. Admin                 ||"<<endl;
        gotoxy(52, 12);
        cout<<"||                  2. Registration          ||"<<endl;
        gotoxy(52, 13);
        cout<<"||                  3. Log In                ||"<<endl;
        gotoxy(52, 14);
        cout<<"||                  4. Exit                  ||"<<endl;
        gotoxy(52, 15);
        cout<<"||                                           ||"<<endl;
        gotoxy(52, 16);
        cout<<"==============================================="<<endl;
        gotoxy(52, 18);
        cout<<"Enter your choice(1-4): ";
        cin>>ch;
        Color(7);
        system("CLS");
        switch (ch)
        {
        case '1':
            {
            admin_menu();
            break;
            }
        case '2':
            {
            write_account();
            break;
            }

        case '3':
            {
            system("CLS");
            gotoxy(55, 7);
            cout<<"Enter the password: ";
           /// cin>>num;
            int i;

    for(i=0;;)
    {
        ab=getch();
        if(ab>='A'&&ab<='Z'||ab>='a'&&ab<='z'||ab>='0'&&ab<='9')
        {
       num[i]=ab;
        cout<<"*";
        i++;
         }
         if(ab=='\b'&&i>=1)
         {
             cout<<"\b \b";
             --i;
         }
         if(ab=='\r')
         {
             num[i]='\0';
             break;
         }
    }
            system("CLS");
            account_details(num);
            main_menu();
            break;
            }
        case '4':
            {
                outdro();
                break;
            }
    }
    cin.ignore();
    cin.get();
}
while(ch!='4');
}








            ///Function of Introduction








void intro()
{
    Color(11);
    system("CLS");
    gotoxy(55, 4);
    cout<<"=============================="<<endl;
    Sleep(200);
    gotoxy(57, 5);
    cout<<"WELCOME TO BANGLADESH ARMY"<<endl;
    Sleep(200);
    gotoxy(55, 6);
    cout<<"============================="<<endl;
    Sleep(200);
    gotoxy(43, 10);
    cout<<"****LET'S SERVE THE COUNTRY WITH OUR FULL DEDICATON****"<<endl;
    Sleep(200);
    gotoxy(36, 15);
    cout<<"======================================================================"<<endl;
    Sleep(200);
    gotoxy(57, 16);
    cout<<"MILITARY MANAGEMENT SYSTEM"<<endl;
    Sleep(200);
    gotoxy(36, 17);
    cout<<"======================================================================"<<endl;
    Sleep(2000);
    system("CLS");
    design();
    Sleep(2000);
    system("CLS");
    Color(12);
    gotoxy(36, 10);
    cout<<"======================================================================"<<endl;
    Sleep(200);
    gotoxy(67, 12);
    cout<<"MADE BY"<<endl;
    Sleep(200);
    gotoxy(64, 14);
    cout<<"TEAM HEX CLAN"<<endl;
    Sleep(200);
    gotoxy(36, 16);
    cout<<"======================================================================"<<endl;
    gotoxy(57, 18);
    Sleep(200);
    cout<<"MD. ALINUR HOSSAIN    ==20-41855-1"<<endl;
    gotoxy(57, 19);
    Sleep(200);
    cout<<"SAAD MUHAMMOD BIJOY   ==20-41880-1"<<endl;
    gotoxy(57, 20);
    Sleep(200);
    cout<<"Please Press Enter Key to continue..."<<endl;
    cin.get();
    Color(7);
}






            ///Function for outdro






void outdro()
{
               Color(14);
                gotoxy(55,3);
                Sleep(200);
                cout<<"Thanks For Using  "<<endl;
                gotoxy(34, 8);
                Sleep(200);
                cout<<"======================================================="<<endl;
                gotoxy(51, 9);
                Sleep(200);
                cout<<"MILITARY MANAGEMENT SYSTEM"<<endl;
                gotoxy(34, 10);
                Sleep(200);
                cout<<"======================================================="<<endl;
               gotoxy(46, 14);
               Sleep(200);
                cout<<"All Rights Reserved By <Team Hex Clan>"<<endl;
                cout<<"\n\n\n\n\n\n"<<endl;
                Sleep(2000);
                exit(0);
}








            ///Function to write the account







void write_account()
{
    account ac;
    ofstream outFile;
    outFile.open("account.dat", ios::app|ios::binary);
    ac.create_account();
    outFile.write(reinterpret_cast<char*>(&ac), sizeof(account));
    outFile.close();
}







                ///Function to add weapon and bullets







void write_weapon()
{
     int ch, bullets1, bullets2, bullets3, bullets4, bullets5, bullets6, bullets7, bullets8, bullets9, bullets10, bullets11;
    bullets1=bullets2= bullets3=bullets4=bullets5=bullets6=bullets7=bullets8=bullets9=bullets10=bullets11=0;

    double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    d1= d2= d3= d4= d5= d6= d7= d8= d9= d10= d11=0;

    ///sum[0]=0;
    do
    {
    system("CLS");
    gotoxy(45, 5);
    cout<<"==============================="<<endl;
    gotoxy(50, 6);
    cout<<"Add your weapons"<<endl;
    gotoxy(45, 7);
    cout<<"==============================="<<endl;
    gotoxy(30, 9);
    cout<<"*********ALL PRICE WILL BE PROVIDED BY THE GOVERNMENT***********"<<endl;
    cout<<"\n\n\n\n"<<endl;
    cout<<"                     1.   AK 47 (Assault Rifle - 99$)";
    cout<<"\t\t\t2.  AK 22 (Assault Rifle - 99$)"<<endl;
    cout<<"                     3.   AK 12 (Assault Rifle - 99$)";
    cout<<"\t\t\t4.  M416 (Assault Rifle - 99$)"<<endl;
    cout<<"                     5.   MP5 (SMG - 99$)";
    cout<<"\t\t\t\t6.  PK12 (LMG - 99$)"<<endl;
    cout<<"                     7.   Carbine (Assault Rife - 99$$)";
    cout<<"\t\t\t8.  Pistols (99$)"<<endl;
    cout<<"                     9.   Grenades (1$/Grenades)";
    cout<<"\t\t\t10. Flash bangs (1$/Flash bangs)"<<endl;
    cout<<"                     11.  Smoke bombs (1$/Smoke Bombs)";
    cout<<"\t\t\t12. Total Price"<<endl;
    cout<<"\t\t\t\t\t                     13. Exit"<<endl;
    cout<<endl<<endl;
    cout<<"\n                     Enter your choice to add a weapon(1-13): ";
    cin>>ch;
    system("CLS");
    switch (ch)
    {
    case 1:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     Enter the amount of bullets ($0.2/ 10 bullets): ";
        cin>> bullets1;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<bullets1<<" bullets added..."<<endl;
        d1 = 99+(0.02*bullets1);
        cout<<"\n                     Total price (weapon included): "<<d1<<"$";
        cout<<"\n                     Weapon and bullets added to your crate...";
        cout<<"\n\n\n"<<endl;
        cout<<"                     Press Enter Key To Continue...."<<endl;
        break;

    }
    case 2:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     Enter the amount of bullets ($0.2/ 10 bullets): ";
        cin>> bullets2;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<bullets2<<" bullets added..."<<endl;
        d2 = 99+(0.02*bullets2);
        cout<<"\n                     Total price (weapon included): "<<d2<<"$";
        cout<<"\n                     Weapon and bullets added to your crate...";
        cout<<"\n\n\n"<<endl;
        cout<<"                     Press Enter Key To Continue...."<<endl;
        break;

    }
    case 3:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     Enter the amount of bullets ($0.2/ 10 bullets): ";
        cin>> bullets3;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<bullets3<<" bullets added..."<<endl;
        d3= 99+(0.02*bullets3);
        cout<<"\n                     Total price (weapon included): "<<d3<<"$";
        cout<<"\n                     Weapon and bullets added to your crate...";
        cout<<"\n\n\n"<<endl;
        cout<<"                     Press Enter Key To Continue...."<<endl;
        break;

    }
    case 4:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     Enter the amount of bullets ($0.2/ 10 bullets): ";
        cin>> bullets4;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<bullets4<<" bullets added..."<<endl;
        d4 = 99+(0.02*bullets4);
        cout<<"\n                     Total price (weapon included): "<<d4<<"$";
        cout<<"\n                     Weapon and bullets added to your crate...";
        cout<<"\n\n\n"<<endl;
        cout<<"                     Press Enter Key To Continue...."<<endl;
        break;
    }
    case 5:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     Enter the amount of bullets ($0.2/ 10 bullets): ";
        cin>> bullets5;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<bullets5<<" bullets added..."<<endl;
        d5 = 99+(0.02*bullets5);
        cout<<"\n                     Total price (weapon included): "<<d5<<"$";
        cout<<"\n                     Weapon and bullets added to your crate...";
        cout<<"\n\n\n"<<endl;
        cout<<"                     Press Enter Key To Continue...."<<endl;
        break;
    }
    case 6:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     Enter the amount of bullets ($0.2/ 10 bullets): ";
        cin>> bullets6;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<bullets6<<" bullets added..."<<endl;
        d6 = 99+(0.02*bullets6);
        cout<<"\n                     Total price (weapon included): "<<d6<<"$";
        cout<<"\n                     Weapon and bullets added to your crate...";
        cout<<"\n\n\n"<<endl;
        cout<<"                     Press Enter Key To Continue...."<<endl;
        break;
    }
    case 7:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     Enter the amount of bullets ($0.2/ 10 bullets): ";
        cin>> bullets7;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<bullets7<<" bullets added..."<<endl;
        d7= 99+(0.02*bullets7);
        cout<<"\n                     Total price (weapon included): "<<d7<<"$";
        cout<<"\n                     Weapon and bullets added to your crate...";
        cout<<"\n\n\n"<<endl;
        cout<<"                     Press Enter Key To Continue...."<<endl;
        break;
    }
    case 8:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     Enter the amount of bullets ($0.2/ 10 bullets): ";
        cin>> bullets8;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<bullets8<<" bullets added..."<<endl;
        d8 = 99+(0.02*bullets8);
        cout<<"\n                     Total price (weapon included): "<<d8<<"$";
        cout<<"\n                     Weapon and bullets added to your crate...";
        cout<<"\n\n\n"<<endl;
        cout<<"                     Press Enter Key To Continue...."<<endl;
        break;
    }
    case 9:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     Enter the amount of grenades ($1/ grenades): ";
        cin>> bullets9;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<bullets9<<" grenades added..."<<endl;
        d9 = 1*bullets9;
        cout<<"\n                     Total price: "<<d9<<"$";
        cout<<"\n                     Grenades added to your crate...";
        cout<<"\n\n\n"<<endl;
        cout<<"                     Press Enter Key To Continue...."<<endl;
        break;
    }
    case 10:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     Enter the amount of flash bangs ($1 / flash bang): ";
        cin>> bullets10;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<bullets10<<" flash bangs added..."<<endl;
        d10 = 1*bullets10;
        cout<<"\n                     Total price: "<<d10<<"$";
        cout<<"\n                     Flash bangs added to your crate...";
        cout<<"\n\n\n"<<endl;
        cout<<"                     Press Enter Key To Continue...."<<endl;
        break;
    }
    case 11:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     Enter the amount of smoke grenades ($1/smoke grenades): ";
        cin>> bullets11;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<bullets11<<" smoke grenades added..."<<endl;
        d11= 1*bullets11;
        cout<<"\n                     Total price : "<<d11<<"$";
        cout<<"\n                     Smoke grenades added to your crate...";
        cout<<"\n\n\n"<<endl;
        cout<<"                     Press Enter Key To Continue...."<<endl;
        break;
    }
    case 12:
        {
            double a=d1+ d2+ d3+ d4+ d5+ d6+ d7+ d8+ d9+ d10+ d11;
            gotoxy(50, 8);
            cout<<"Don't worry."<<endl;
            Sleep(2000);
            gotoxy(50, 9);
            cout<<"It is being saved temporarily...."<<endl;
            Sleep(2000);
            gotoxy(50, 10);
            cout<<"Main cost will be saved in a bank draft..."<<endl;
            Sleep(2000);
            gotoxy(50, 12);
            cout<<"Please wait while we count the total price..."<<endl;
            Sleep(3000);
            system("CLS");
            gotoxy(52, 6);
            cout<<"Total cost: "<<a<<" $";
            gotoxy(42, 9);
            cout<<"N.B: Don't waste anything without need..."<<endl;
            gotoxy(50, 12);
            cout<<"Press Enter to continue..."<<endl;
            break;
        }
    case 13:
        {
            gotoxy(50, 6);
            cout<<"Exiting you to the Soldier's  menu....."<<endl;
            Sleep(1000);
            main_menu_log_in();
            break;
        }
    }
    cin.ignore();
    cin.get();
    }
    while(ch!=13);
}








                    ///Function to write bullets









void bullets()
{
      char ch;
    double bullets;
    double b =0;
    do
    {
    system("CLS");
    gotoxy(50, 6);
    cout<<"1. Buy bullets"<<endl;
    gotoxy(50, 7);
    cout<<"2. See total cost"<<endl;
    gotoxy(50, 8);
    cout<<"3. Exit"<<endl;
    gotoxy(50, 10);
    cout<<"Enter your choice(1-3): ";
    cin>>ch;
    system("CLS");
    switch(ch)
    {
        case '1':
            {
    system("CLS");
    gotoxy(30, 9);
    cout<<"*********ALL PRICE WILL BE PROVIDED BY THE GOVERNMENT*********"<<endl;
    cout<<endl<<endl;
    cout<<"\nEnter the amount of bullets ($0.02 / bullets): ";
    cin>>bullets;
    cout<<bullets<<" bullets added..."<<endl;
    b = 0.02*bullets;
    cout<<"\nTotal price (excluded weapon) : "<<b<<" $"<<endl;
    cout<<"\nBullets added to your crate..."<<endl;
    cout<<"\n\n\n"<<endl;
    cout<<"Press Enter key to continue....."<<endl;
    break;
        }
        case '2':
            {
             double a=bullets;
            gotoxy(50, 8);
            cout<<"Don't worry."<<endl;
            Sleep(2000);
            gotoxy(50, 9);
            cout<<"It is being saved temporarily...."<<endl;
            Sleep(2000);
            gotoxy(50, 10);
            cout<<"Main cost will be saved in a bank draft..."<<endl;
            Sleep(2000);
            gotoxy(50, 12);
            cout<<"Please wait while we count the total price..."<<endl;
            Sleep(3000);
            system("CLS");
            gotoxy(52, 6);
            cout<<"Total cost: "<<b<<" $";
            gotoxy(42, 9);
            cout<<"N.B: Don't waste anything without need..."<<endl;
            gotoxy(50, 12);
            cout<<"Press Enter to continue..."<<endl;
            break;
            }
        case '3':
            {
                gotoxy(50, 6);
                cout<<"Exiting you to the soldier's menu...."<<endl;
                Sleep(1000);
                main_menu_log_in();
                break;
            }
    }
    cin.ignore();
    cin.get();
    }
    while(ch!='3');
}








                ///Function to write foods









void foods()
{
     int n, rice, corn, grain, muttons, chicken, water, milk, egg, bread, fish, cigarettes, tea, vegetable;
    double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13;

    do{
    system("CLS");
    gotoxy(50, 5);
    cout<<"GET READY TO TAKE FOODS IN YOUR RUCKSACK"<<endl;
    gotoxy(45, 6);
    cout<<"================================================"<<endl;
    gotoxy(37, 9);
    cout<<"*********ALL PRICE WILL BE PROVIDED BY THE GOVERNMENT*********"<<endl;
    cout<<"\n\n"<<endl;
    cout<<"                                          1. RICE ";
    cout<<"\t\t\t2. CORNS "<<endl;
    cout<<"                                          3. GRAINS ";
    cout<<"\t\t\t4. MUTTONS "<<endl;
    cout<<"                                          5. CHICKENS";
    cout<<"\t\t\t6. WATER"<<endl;
    cout<<"                                          7. MILK";
    cout<<"\t\t\t8. EGGS"<<endl;
    cout<<"                                          9. BREADS";
    cout<<"\t\t\t10. FISHES"<<endl;
    cout<<"                                          11. CIGARETTES";
    cout<<"\t\t12. TEABAGS"<<endl;
    cout<<"                                          13. VEGETABLES";
    cout<<"\t\t14. TOTAL COST"<<endl;
    cout<<"                                                               15. EXIT"<<endl;
    cout<<"\n\n                                          Enter your choice(1-15): ";
    cin>>n;
    system("CLS");
    switch(n)
    {

    case 1:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     1. Take RICE and enter amount(0.7$/kg): ";
        cin>>rice;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<rice<<" kg rice added to your crate";
        d1 = 0.7*rice;
        cout<<"\n\n                     Total price: "<<d1<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue......"<<endl;
        break;

    }
    case 2:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     2. Take corn and enter amount(0.8$/kg): ";
        cin>>corn;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<corn<<" kg corn added to your crate";
        d2 = 0.8*corn;
        cout<<"\n\n                     Total price: "<<d2<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue......"<<endl;
        break;
    }
    case 3:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     3. Take Grain and enter amount(0.7$/kg): ";
        cin>>grain;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<grain<<" kg grain added to your crate";
        d3 = 0.7*grain;
        cout<<"\n\n                     Total price: "<<d3<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue......."<<endl;
        break;
    }
    case 4:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     4. Take Muttons and enter amount(2.5$/kg): ";
        cin>>muttons;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<muttons<<" kg Muttons added to your crate";
        d4 = 2.5*muttons;
        cout<<"\n\n                     Total price: "<<d4<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue: "<<endl;
        break;
    }
    case 5:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     5. Take Chicken and enter amount(1.5$/kg): ";
        cin>>chicken;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<chicken<<" kg Chicken added to your crate";
        d5 = 1.5*chicken;
        cout<<"\n\n                     Total price: "<<d5<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue: "<<endl;
        break;
    }
    case 6:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     6. Take Water and enter amount ($0.25/1L): ";
        cin>>water;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<water<<" L Water added to your crate";
        d6 = 0.25*water;
        cout<<"\n\n                     Total price: "<<d6<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue......."<<endl;
        break;
    }
    case 7:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     7. Take Milk and enter amount (0.3$/1L): ";
        cin>>milk;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<milk<<" L Milk added to your crate";
        d7 = 0.3*milk;
        cout<<"\n\n                     Total price: "<<d7<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue......"<<endl;
        break;
    }
    case 8:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     8. Take Egg and enter amount(.25$/eggs): ";
        cin>>egg;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<egg<<"  Eggs added to your crate";
        d8= .25*egg;
        cout<<"\n\n                     Total price: "<<d8<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue....."<<endl;
        break;
    }
    case 9:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     9. Take Breads and enter amount(.5$/packet): ";
        cin>>bread;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<bread<<"  Packet breads added to your crate";
        d9 = .5*bread;
        cout<<"\n\n                     Total price: "<<d9<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue....."<<endl;
        break;
    }
    case 10:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     10. Take Fish and enter amount(1$/kg): ";
        cin>>fish;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<fish<<" kg Fish added to your crate";
        d10 = 1*fish;
        cout<<"\n\n                     Total price: "<< d10<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue......"<<endl;
        break;
    }
    case 11:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     11. Take Cigarettes and enter amount(0.75$/packet): ";
        cin>>cigarettes;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<cigarettes<<" packet cigarettes added to your crate";
        d11= 0.75*cigarettes;
        cout<<"\n\n                     Total price: "<<d11<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue: "<<endl;
        break;
    }
    case 12:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     12. Take Teabags and enter amount(1$/30 teabags): ";
        cin>>tea;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<tea<<" Packet tea bags added to your crate";
        d12= 0.033333333333*tea;
        cout<<"\n\n                     Total price: "<<d12<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue..... "<<endl;
        break;
    }
    case 13:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     13. Take Vegetable and enter amount(1$/kg): ";
        cin>>vegetable;
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     "<<vegetable<<" kg Vegetable added to your crate";
        d13 = 1*vegetable;
        cout<<"\n\n                     Total price:"<<d13<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue......."<<endl;
        break;
    }
    case 14:
        {
            double a=d1+ d2+ d3+ d4+ d5+ d6+ d7+ d8+ d9+ d10+ d11+d12+d13;
            gotoxy(50, 8);
            cout<<"Don't worry."<<endl;
            Sleep(2000);
            gotoxy(50, 9);
            cout<<"It is being saved temporarily...."<<endl;
            Sleep(2000);
            gotoxy(50, 10);
            cout<<"Main cost will be saved in a bank draft..."<<endl;
            Sleep(2000);
            gotoxy(50, 12);
            cout<<"Please wait while we count the total price..."<<endl;
            Sleep(3000);
            system("CLS");
            gotoxy(52, 6);
            cout<<"Total cost: "<<a<<" $";
            gotoxy(42, 9);
            cout<<"N.B: Don't waste anything without need..."<<endl;
            gotoxy(50, 12);
            cout<<"Press Enter to continue..."<<endl;
            break;
        }

    case 15:
        {
            gotoxy(50, 6);
            cout<<"Exiting you to the Soldier's menu....."<<endl;
            Sleep(1000);
            main_menu_log_in();
            break;
        }
}

cin.ignore();
cin.get();

}

while(n!=15);
}








                ///Function to write accessories









void accessories()
{
   int n, med_kit, _map, scissor, compas, knives, match, woki_toki, n_v_goggles, t_v_goggles, t_light;
    double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
    do
    {
    system("CLS");
    gotoxy(45,5);
    cout<<"========================================================"<<endl;
    gotoxy(50,6);
    cout<<"TAKE SOME ACCESSORIES IN YOUR RUCKSACK"<<endl;
    gotoxy(45,7);
    cout<<"========================================================"<<endl;
    gotoxy(39,9);
    cout<<"**********ALL PRICE WILL BE PROVIDED BY THE GOVERNMENT**********"<<endl;
    gotoxy(56, 13);
    cout<<"2 $ FOR EACH ACCESSORIES"<<endl;
    cout<<"\n\n"<<endl;
    cout<<"                                          1. Med Kits  ";
    cout<<"\t\t\t2. Maps "<<endl;
    cout<<"                                          3. Scissors";
    cout<<"\t\t\t4. Compus"<<endl;
    cout<<"                                          5. Knives";
    cout<<"\t\t\t6. Lighter/Match"<<endl;
    cout<<"                                          7. Woki Toki";
    cout<<"\t\t\t8. Night Vision Goggles"<<endl;
    cout<<"                                          9. Thermal Vision Goggles";
    cout<<"     10. Torch Light"<<endl;
    cout<<"                                          11. Total cost";
    cout<<"\t\t12. Exit"<<endl;
    cout<<"\n\n                                                         Enter your choice(1-12): ";
    cin>>n;
    system("CLS");
    switch(n)
    {
    case 1:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     1.Take Med Kits. Enter quantity: ";
        cin>>med_kit;
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     "<<med_kit<<" Med Kits added to your crate";
        d1= 2*med_kit;
        cout<<"\n\n                     Total price: "<<d1<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue...."<<endl;
        break;
    }
    case 2:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     2.Take Maps. Enter quantity: ";
        cin>>_map;
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     "<<_map<<" Maps added to your crate";
        d2= 2*_map;
        cout<<"\n\n                     Total price: "<<d2<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue...."<<endl;
        break;
    }
    case 3:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     3.Take Scissors. Enter quantity: ";
        cin>>scissor;
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     "<<scissor<<" Scissors added to your crate";
        d3 = 2*scissor;
        cout<<"\n\n                     Total price: "<<d3<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue...."<<endl;
        break;
    }
    case 4:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     4.Take Compus. Enter quantity: ";
        cin>>compas;
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     "<<compas<<" Compus added to your crate";
        d4 = 2*compas;
        cout<<"\n\n                     Total price: "<<d4<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue...."<<endl;
        break;
    }
    case 5:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     5.Take Knives. Enter quantity: ";
        cin>>knives;
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     "<<knives<<" Knives added to your crate";
        d5= 2*knives;
        cout<<"\n\n                     Total price: "<<d5<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue...."<<endl;
        break;
    }
    case 6:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     6.Take Lighter/Match. Enter quantity: ";
        cin>>match;
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     "<<match<<" Lighter/Match added to your crate";
        d6 = 2*match;
        cout<<"\n\n                     Total price: "<<d6<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue...."<<endl;
        break;
    }
    case 7:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     7.Take Woki Toki. Enter quantity: ";
        cin>>woki_toki;
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     "<<woki_toki<<" Woki Toki added to your crate";
        d7 = 2*woki_toki;
        cout<<"\n\n                     Total price: "<<d7<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue...."<<endl;
        break;
    }
    case 8:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     8.Take Night Vision Goggles. Enter quantity: ";
        cin>>n_v_goggles;
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     "<<n_v_goggles<<" Night Vision Goggles added to your crate";
        d8 = 2*n_v_goggles;
        cout<<"\n\n                     Total price: "<<d8<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue...."<<endl;
        break;
    }
    case 9:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     9.Take Thermal Vision Goggles. Enter quantity: ";
        cin>>t_v_goggles;
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     "<<t_v_goggles<<" Thermal Vision Goggles added to your crate";
        d9= 2*t_v_goggles;
        cout<<"\n\n                     Total price: "<<d9<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue...."<<endl;
        break;
    }
    case 10:
    {
        cout<<"\n\n\n\n"<<endl;
        cout<<"                     10.Take Torch Light. Enter quantity: ";
        cin>>t_light;
        cout<<"\n\n\n\n"<<endl;
        cout<<"\n                     "<<t_light<<" Torch Light added to your crate";
        d10= 2*t_light;
        cout<<"\n\n                     Total price: "<<d10<<"$";
        cout<<"\n\n"<<endl;
        cout<<"                     Press Enter key to continue...."<<endl;
        break;
    }
    case 11:
        {
            double a=d1+ d2+ d3+ d4+ d5+ d6+ d7+ d8+ d9+ d10;
            gotoxy(50, 8);
            cout<<"Don't worry."<<endl;
            Sleep(2000);
            gotoxy(50, 9);
            cout<<"It is being saved temporarily...."<<endl;
            Sleep(2000);
            gotoxy(50, 10);
            cout<<"Main cost will be saved in a bank draft..."<<endl;
            Sleep(2000);
            gotoxy(50, 12);
            cout<<"Please wait while we count the total price..."<<endl;
            Sleep(3000);
            system("CLS");
            gotoxy(52, 6);
            cout<<"Total cost: "<<a<<" $";
            gotoxy(42, 9);
            cout<<"N.B: Don't waste anything without need..."<<endl;
            gotoxy(50, 12);
            cout<<"Press Enter to continue..."<<endl;
            break;
        }
    case 12:
        {
            gotoxy(50, 6);
           cout<<"Exiting you to the Soldier's menu....."<<endl;
            Sleep(1000);
            main_menu_log_in();
            break;
        }
    }
    cin.ignore();
    cin.get();

    }
    while(n!=12);
}








                ///Function to gain access for the soldier the soldier









void account_details(string n)
{
    account ac;
	bool flag=false;
	ifstream inFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
	    cout<<"\n\n\n\n\n"<<endl;
		cout<<"                                                 File could not be open !! Press Enter Key...";
		return;
	}

    	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		if(ac.retpass()==n)
		{
		    ac.details();
            cout<<"\n\n\n\n\n"<<endl;
            cout<<"                                              Please wait, gaining access....."<<endl;
            Sleep(4000);
            main_menu_log_in();
			flag=true;
		}
	}
	inFile.close();
	if(flag==false)
        cout<<"\n\n\n\n\n"<<endl;
		cout<<"                                             Wrong Password. Try Again...";
		Sleep(2000);
}








                ///Function to show table of every details








void show_all()
{
    account ac;
	ifstream inFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
	    cout<<"\n\n\n\n\n"<<endl;
		cout<<"                                                 File could not be open !! Press Enter Key...";
		return;
	}
	cout<<endl;
	cout<<"                                         All Details Of Soldiers"<<endl;
	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		ac.table();
	}
	inFile.close();
}







                ///Function of main menu after login








void main_menu_log_in()
{
    Color(14);
    char ch;
    do
    {
    system("CLS");
    gotoxy(50,5);
    cout<<"=============================="<<endl;
    gotoxy(50,6);
    cout<<"=============================="<<endl;
    gotoxy(57,7);
    cout<<"SOLDIER'S MENU"<<endl;
    gotoxy(50,8);
    cout<<"=============================="<<endl;
    gotoxy(50,9);
    cout<<"=============================="<<endl;
    gotoxy(50,10);
    cout<<"=============================="<<endl;
    gotoxy(57,11);
    cout<<"1. ADD WEAPONS"<<endl;
    gotoxy(50,12);
    cout<<"=============================="<<endl;
    gotoxy(57,13);
    cout<<"2. ADD BULLETS"<<endl;
    gotoxy(50,14);
    cout<<"=============================="<<endl;
    gotoxy(57,15);
    cout<<"3. ADD FOODS"<<endl;
    gotoxy(50,16);
    cout<<"=============================="<<endl;
    gotoxy(57,17);
    cout<<"4. ADD ACCESSORIES"<<endl;
    gotoxy(50,18);
    cout<<"=============================="<<endl;
    gotoxy(57,19);
    cout<<"5. EXIT"<<endl;
    gotoxy(50,20);
    cout<<"=============================="<<endl;
    gotoxy(55, 24);
    cout<<"Enter your choice(1-5): ";
    cin>>ch;
    system("CLS");
    switch(ch)
    {
    case '1':
        write_weapon();
        break;
    case '2':
        bullets();
        break;
    case '3':
        foods();
        break;
    case '4':
        accessories();
        break;
    case '5':
        gotoxy(50, 6);
        cout<<"Exiting you to the Main Menu.....";
        gotoxy(55, 9);
        cout<<"Please wait....";
        Sleep(2000);
        main_menu();
        break;
    }
    cin.ignore();
    cin.get();
    }while(ch!='6');
}






                    ///Show individual details about a soldier






void details_admin(int n)
{
    account ac;
	bool flag=false;
	ifstream inFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
	    cout<<"\n\n\n\n\n"<<endl;
		cout<<"                                           File could not be open !! Press Enter Key...";
		return;
	}


    	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		if(ac.retid()==n)
		{
			ac.details();
			flag=true;
		}
	}
	inFile.close();
	if(flag==false){
        cout<<"\n\n\n\n\n"<<endl;
		cout<<"                                                 Account does not exist";
	}
}






                    ///Function to modify soldier's details







void modify_details(int n)
{
    bool found=false;
	account ac;
	fstream File;
	File.open("account.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
            cout<<"\n\n\n\n\n"<<endl;
    		cout<<"                                       File could not be open !! Press Enter Key...";
		return;
	}
	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast<char *> (&ac), sizeof(account));
		if(ac.retid()==n)
		{

			ac.details();
			cout<<"\n\n\n"<<endl;
			cout<<"                                     Please wait, gaining access..."<<endl;
			Sleep(3000);
			ac.modify();
			int pos=(-1)*static_cast<int>(sizeof(account));
			File.seekp(pos,ios::cur);
			File.write(reinterpret_cast<char *> (&ac), sizeof(account));
			found=true;
		  }
	}
	File.close();
	if(found==false){
        cout<<"\n\n\n\n\n\n"<<endl;
		cout<<"                                                 Record Not Found ";
	}
}






                    ///This function will delete an account





 void delete_account(int n)
{
	account ac;
	ifstream inFile;
	ofstream outFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
	    cout<<"\n\n\n\n\n"<<endl;
		cout<<"                                           File could not be open !! Press Enter Key...";
		return;
	}
	outFile.open("Temp.dat",ios::binary);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		if(ac.retid()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
		}
	}
	inFile.close();
	outFile.close();
	remove("account.dat");
	rename("Temp.dat","account.dat");
	gotoxy(55, 9);
	cout<<"Record Deleted ....";
	gotoxy(55, 10);
	cout<<"Press Enter to Continue..."<<endl;
}








                    ///This function declares admin MENUBARINFO







 void admin_menu()
 {
     Color(12);
    char p[100];
     char c;
     int num;
     string u;
     string user = "Admin";
     string password = "AKMU";
     system("CLS");
     gotoxy(52, 8);
     cout<<"Please Enter the User name: ";
     cin>>u;
     gotoxy(52, 9);
     cout<<"Please Enter the Password: ";
     ///cin>>p;
     int i;

    for(i=0;;)
    {
        c=getch();
        if(c>='A'&&c<='Z'||c>='a'&&c<='z'||c>='0'&&c<='9')
        {
        p[i]=c;
        cout<<"*";
        i++;
         }
         if(c=='\b'&&i>=1)
         {
             cout<<"\b \b";
             --i;
         }
         if(c=='\r')
         {
             p[i]='\0';
             break;
         }
    }

     if(u == user && p == password)
     {
    char ch;
    do{
    system("CLS");
    gotoxy(50, 2);
    cout<<"========================================"<<endl;
    gotoxy(63, 3);
    cout<<"ADMIN MENU"<<endl;
    gotoxy(50, 4);
    cout<<"========================================"<<endl;
    gotoxy(55, 6);
    cout<<"1. Show All Soldier's Details"<<endl;
    gotoxy(50, 7);
    cout<<"========================================"<<endl;
    gotoxy(51, 8);
    cout<<"2. Show Individual Details of Soldier"<<endl;
    gotoxy(50, 9);
    cout<<"========================================"<<endl;
     gotoxy(55, 10);
    cout<<"3. Delete A Soldier's Details"<<endl;
    gotoxy(50, 11);
    cout<<"========================================"<<endl;
    gotoxy(55, 12);
    cout<<"4. Modify A Soldier's Details"<<endl;
    gotoxy(50, 13);
    cout<<"========================================"<<endl;
    gotoxy(61, 14);
    cout<<"5. Add A Soldier"<<endl;
    gotoxy(50, 15);
    cout<<"========================================"<<endl;
    gotoxy(60, 16);
    cout<<"6. Go To Main Menu"<<endl;
    gotoxy(57, 20);
    cout<<"Choose your option(1-6): ";
    cin>>ch;
    system("CLS");
    switch(ch)
    {
    case '1':
        {
            show_all();
            break;
        }
    case '2':
        {
            system("CLS");
            gotoxy(55, 9);
            cout<<"Enter the ID: ";
            cin>>num;
            system("CLS");
            details_admin(num);
            break;
        }
    case '3':
        {
            system("CLS");
            gotoxy(55, 9);
            cout<<"Enter the ID: ";
            cin>>num;
            system("CLS");
            delete_account(num);
            break;
        }
    case '4':
        {
            system("CLS");
            gotoxy(55, 9);
            cout<<"Enter the ID: ";
            cin>>num;
            system("CLS");
            modify_details(num);
            break;
        }
    case '5':
        {
            write_account();
            break;
        }
    case '6':
        {
            gotoxy(52, 9);
            cout<<"Taking you back to the main menu"<<endl;
            Sleep(2000);
            main_menu();
            break;
        }
    }
    cin.ignore();
    cin.get();
     }while(ch!='6');
     }
     else
     {
         system("CLS");
         gotoxy(52, 7);
         cout<<"Sorry. Wrong Username or Password"<<endl;
         gotoxy(52, 9);
         cout<<"Only Authorized Admin can access this system"<<endl;

         Sleep(2000);
         admin_menu();
     }
}


