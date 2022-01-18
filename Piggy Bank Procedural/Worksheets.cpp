/*
* Name:Jadon Oliver
* Program Name: Piggy Bank Procedural
* Date:12/16/21
* Extra Things: Asks the user for their 6 digit account number for their account, error traps it and stores the data for later
*/

#include "Worksheets.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
string dummy = "";

void worksheet1(string namedItem) {
    std::cout << endl << "worksheet: " << namedItem << endl << endl;
    cout.setf(ios::fixed);

    //declares all needed variables.
    bool quitv = false;
    bool quit1 = false;
    bool quit2 = false;
    bool quit3 = false;
    bool quit4 = false;
    bool quit5 = false;
    bool quit6 = false;
    bool goodData = true;
    bool goodData1 = true;
    bool goodData2 = true;
    bool goodData3 = true;
    bool goodData4 = true;
    bool goodData5 = true;
    bool goodData6 = true;
    int quarti = 0;
    int dimei = 0;
    int nickeli = 0;
    int pennyi = 0;
    int weeki = 0;
    int acnumi = 0;
    string namev = "";
    string quart = "";
    string dime = "";
    string nickel = "";
    string penny = "";
    string week = "";
    string acnum = "";


    //creates a do while statement to ask the user for thier name and input it into the final output.
    do {

        //asks the user for input
        cout << "Please enter your name" << endl;
        getline(cin, namev);
        //Uses error trapping provided by Mrs. Digiovanna to make sure the input given is acceptable.
        for (int i = 0; i < namev.length(); i++) {
            
            if (isdigit(namev[i])) {
                cout << "User was asked for name not numbers, please try again." << endl;
                goodData = false;
            }
            
            else if (namev[i] == '!' || namev[i] == '@' || namev[i] == '#' || namev[i] == '$' || namev[i] == '%' || namev[i] == '^' || namev[i] == '&' || namev[i] == '*' || namev[i] == '(' || namev[i] == ')' || namev[i] == '-' || namev[i] == '_' || namev[i] == '=' || namev[i] == '+' || namev[i] == ']' || namev[i] == '|' || namev[i] == '}' || namev[i] == '[' || namev[i] == '{' || namev[i] == '.' || namev[i] == ',' || namev[i] == '<' || namev[i] == '>' || namev[i] == '/' || namev[i] == '?' || namev[i] == '`' || namev[i] == '`' || namev[i] == ':' || namev[i] == ';') {
                cout << "User entered a special character, please try again." << endl;
                goodData = false;
            }
            
            else if (namev.length() == 0) {
                cout << "The user entered nothing, please try again." << endl;
                quitv = true;
            }

        }

        if (goodData == true) {
            quitv = true;
        }
        goodData = true;
    } while (!quitv);
    
    //EXTRA: Asks the user for their 6 digit account number for their accoun, error traps it and stores the data for later
    do {

        cout << "Please enter your 6 digit account number" << endl;
        getline(cin, acnum);

        //Uses error trapping provided by Mrs. Digiovanna to make sure the input given is acceptable.
        for (int i = 0; i < acnum.length(); i++) {

            if (!isdigit(acnum[i]) || ((acnum.length() < 6) || (acnum.length() >  6))){
                cout << "You entered bad data, please try again\n" << endl;
                goodData6 = false;
            }
        }

        if (goodData6 == true) {

            acnumi = stoi(acnum);
            quit6 = true;
        }
        goodData6 = true;
    } while (!quit6);

    //Asks the user how many quaters they've saved and uses it for output later in the code.
    do {
        
        cout << "How many quarters have you saved?" << endl;
        getline(cin, quart);

        //Uses error trapping provided by Mrs. Digiovanna to make sure the input given is acceptable.
        for (int i = 0; i < quart.length(); i++) {

            if (!isdigit(quart[i])) {
                cout << "You entered bad data, please try again\n" << endl;
                goodData1 = false;
            }
        }

        if (goodData1 == true) {
            
            quarti = stoi(quart);
            quit1 = true;
        }
        goodData1 = true;
    } while (!quit1);

    //Asks the user how many dimes they've saved and uses it for output later in the code.
    do {

        cout << "How many dimes have you saved?" << endl;
        getline(cin, dime);

        //Uses error trapping provided by Mrs. Digiovanna to make sure the input given is acceptable.
        for (int i = 0; i < dime.length(); i++) {

            if (!isdigit(dime[i])) {
                cout << "You entered bad data, please try again\n" << endl;
                goodData2 = false;
            }
        }

        if (goodData2 == true) {

            dimei = stoi(dime);
            quit2 = true;
        }
        goodData2 = true;
    } while (!quit2);

    //Asks the user how many nickels they've saved and uses it for output later in the code.
    do {

        cout << "How many nickels have you saved?" << endl;
        getline(cin, nickel);

        //Uses error trapping provided by Mrs. Digiovanna to make sure the input given is acceptable.
        for (int i = 0; i < nickel.length(); i++) {

            if (!isdigit(nickel[i])) {
                cout << "You entered bad data, please try again\n" << endl;
                goodData3 = false;
            }
        }

        if (goodData3 == true) {

            nickeli = stoi(nickel);
            quit3 = true;
        }
        goodData3 = true;
    } while (!quit3);

    //Asks the user how many pennies they've saved and uses it for output later in the code.
    do {

        cout << "How many pennies have you saved?" << endl;
        getline(cin, penny);

        //Uses error trapping provided by Mrs. Digiovanna to make sure the input given is acceptable.
        for (int i = 0; i < penny.length(); i++) {

            if (!isdigit(penny[i])) {
                cout << "You entered bad data, please try again\n" << endl;
                goodData4 = false;
            }
        }

        if (goodData4 == true) {

            pennyi = stoi(penny);
            quit4 = true;
        }
        goodData4 = true;
    } while (!quit4);

    //Asks the user how many weeks they've been saving for and uses it for output later in the code.
    do {

        cout << "How many weeks have you been saving for " << endl;
        getline(cin, week);

        //Uses error trapping provided by Mrs. Digiovanna to make sure the input given is acceptable.
        for (int i = 0; i < week.length(); i++) {

            if (!isdigit(week[i]) || (stoi(week) < 1)) {
                cout << "You entered bad data, please try again\n" << endl;
                goodData5 = false;
            }
        }

        if (goodData5 == true) {

            weeki = stoi(week);
            quit5 = true;
        }
        goodData5 = true;
    } while (!quit5);

    //prints out all of the information collected from the user and makes all the neccesary calculations.
    cout << "\nOwner: "<< namev << endl;
    cout << "Account Number: " << acnum << endl;
    cout << "Quarters:\t" << quarti << "\t$" << setprecision(2) << (quarti * .25) << endl;
    cout << "Dimes:\t\t" << dimei << "\t$" << setprecision(2) << (dimei * .1) << endl;
    cout << "Nickels:\t" << nickeli << "\t$" << setprecision(2) << (nickeli * .05) << endl;
    cout << "Pennies:\t" << pennyi << "\t$" << setprecision(2) << (pennyi * .01) << "\n" << endl;
    cout << "Total:\t" << "\t$" << setprecision(2) << ((quarti * .25)+(dimei * .1)+(nickeli * .05)+(pennyi * .01)) << "\n" << endl;
    cout << namev << ", you have saved an average of $" << setprecision(2) << (((quarti * .25) + (dimei * .1) + (nickeli * .05) + (pennyi * .01)) / weeki) << " per week!" << endl;
    cout << "\nYou're on track to earn about $" << setprecision(2) << (52 * (((quarti * .25) + (dimei * .1) + (nickeli * .05) + (pennyi * .01)) / weeki)) << " this year!" << endl;
    if (weeki > 52) {
        cout << "\nYou've been saving for over a year? Impressive!\n" << endl;
    }
}

