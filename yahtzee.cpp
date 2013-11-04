/*
| Yahtzee program           |
| Written by Gabriel Simmer |
| Broke it - again!         |
*/

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>

using namespace std;

int main()
{
    SetConsoleTitle("Console Yahtzee");
    cout << "Text Yahtzee" << endl;
    cout << "By Gabriel Simmer" << endl;
    /*
    | Set console title, and display needed info |
    */
    srand(time(0)); //Seed random numbers from time
    int dice1;
    int dice2;
    int dice3;
    int dice4;
    int dice5;
    int catones;
    int cattwos;
    int catthrees;
    int catfours;
    int catfives;
    int catsixes;
    int cattotal;
    int catbonus;
    int allowedtoroll1 = 0;
    int allowedtoroll2 = 0;
    int allowedtoroll3 = 0;
    int allowedtoroll4 = 0;
    int allowedtoroll5 = 0;
    int loopbreak;
    int canUsecatones = 0;
    int canUsecattwos = 0;
    int canUsecatthrees = 0;
    int canUsecatfours = 0;
    int canUsecatfives = 0;
    int canUsecatsixes = 0;
    int catlocked1 = 0;
    int catlocked2 = 0;
    int catlocked3 = 0;
    int catlocked4 = 0;
    int catlocked5 = 0;
    int catlocked6 = 0;
    int rerolloop = 0;
    loopbreak = 0;
    string aces = "aces";
    string twos = "twos";
    string threes = "threes";
    string fours = "fours";
    string fives = "fives";
    string sixes = "sixes";
    string scoresect;
    string diceorcal; //Declares all variables needed
    while ( loopbreak != 1 ) {
    cout << " " << endl;
    cout << "Rolling for round." << endl;
    //Random numbers occur here
    dice1 = (1 + rand() % 6);
    cout << dice1;
    cout << " ";
    dice2 = (1 + rand() % 6);
    cout << dice2;
    cout << " ";
    dice3 = (1 + rand() % 6);
    cout << dice3;
    cout << " ";
    dice4 = (1 + rand() % 6);
    cout << dice4;
    dice5 = (1 + rand() % 6);
    cout << " ";
    cout << dice5 << endl ;
    int rerolldice;
        cout << "Use reroll to reroll a dice, or calculate to add up score (exit to exit)." << endl;
        cin >> diceorcal; //Choice for reroll or calculate.
        if ( diceorcal == "reroll" ){
            while ( rerolloop != 1 ) {
            cout << "Dice to reroll (enter 9 to calculate): ";
            cin >> rerolldice;
            if ( rerolldice == 1 ) {
                    if ( allowedtoroll1 < 2 ) { //So that you can only roll twice
                        dice1 = (1 + rand() % 6 );
                        cout << "Dice One: ";
                        cout << dice1 << endl;
                        allowedtoroll1 = allowedtoroll1++;
                }
                else {
                    cout << "You can not roll that dice any more." << endl;
                    cout << " " << endl;
                }
            }
            if ( rerolldice == 2 ) {
                    if ( allowedtoroll2 < 2 ) {
                        dice2 = ( 1 + rand() % 6 );
                        cout << "Dice Two: ";
                        cout << dice2 << endl;
                        allowedtoroll2 = allowedtoroll2++;
                    }
                else {
                    cout << "You can not roll that dice any more" << endl;
                        cout << " " << endl;
                    }
                }
            if ( rerolldice == 3 ) {
                if ( allowedtoroll3 < 2 ) {
                    dice3 = ( 1 + rand() % 6 );
                    cout << "Dice Three: ";
                    cout << dice3 << endl;
                    allowedtoroll3 = allowedtoroll3++;
                }
                else {
                    cout << "You can not roll this dice any more" << endl;
                    cout << " " << endl;
                }
            }
            if ( rerolldice == 4 ) {
                if ( allowedtoroll4 < 2 ) {
                    dice4 = ( 1 + rand() % 6 );
                    cout << "Dice Four: ";
                    cout << dice4 << endl;
                }
            }
            if ( rerolldice == 5 ) {
                if ( allowedtoroll5 < 2 ) {
                    dice5 = ( 1 + rand() % 6 );
                    cout << "Dice Five: ";
                    cout << dice5 << endl;
                }
                else {
                    cout << "You can not roll this dice any more" << endl;
                    cout << " " << endl;
                    }
                }
            if ( rerolldice == 9 ){
            canUsecatones = 0;
            canUsecattwos = 0;
            canUsecatthrees = 0;
            canUsecatfours = 0;
            canUsecatfives = 0;
            canUsecatsixes = 0;
            rerolloop = 1;
            cout << "Current numbers rolled:" << endl;
            cout << dice1;
            cout << " ";
            cout << dice2;
            cout << " ";
            cout << dice3;
            cout << " ";
            cout << dice4;
            cout << " ";
            cout << dice5;
            cout << " " << endl;
            cout << "Score to which category?" << endl;
            cout << "aces, twos, thress, fours, fives, or sixes?" << endl;
            cin >> scoresect; //Choice strings
            if ( scoresect == aces ) { //Thanks to Mr. Last for the help with the catagories!
                if ( canUsecatones == 0 ){
                    catones=0;
                    if (dice1==1) catones++;
                    if (dice2==1) catones++;
                    if (dice3==1) catones++;
                    if (dice4==1) catones++;
                    if (dice5==1) catones++;
                    cout << catones << endl;
                    canUsecatones++;
                }
                else if ( canUsecatones > 0 ){
                    cout << "You've already used that catagory!" << endl;
                }
            }
            else if ( scoresect == twos ) {
                if ( canUsecattwos == 0 ){
                    cattwos=0;
                    if (dice1==2) cattwos=cattwos+2;
                    if (dice2==2) cattwos=cattwos+2;
                    if (dice3==2) cattwos=cattwos+2;
                    if (dice4==2) cattwos=cattwos+2;
                    if (dice5==2) cattwos=cattwos+2;
                    cout << cattwos << endl;
                    canUsecattwos++;
                }
                else if ( canUsecattwos > 0 ){
                    cout << "You've already used this catagory!" << endl;
                }
            }
            if ( scoresect == threes ){
                if ( canUsecatthrees == 0 ){
                    catthrees=0;
                    if (dice1==3) catthrees=catthrees+3;
                    if (dice2==3) catthrees=catthrees+3;
                    if (dice3==3) catthrees=catthrees+3;
                    if (dice4==3) catthrees=catthrees+3;
                    if (dice5==3) catthrees=catthrees+3;
                    cout << catthrees << endl;
                    canUsecatthrees++;
                }
                else if ( canUsecatthrees > 0 ){
                    cout << "You've already used this catagory!" << endl;
                }
            }

            else if ( scoresect == fours ) {
                if ( canUsecatfours == 0 ){
                    catfours=0;
                    if (dice1==4) catfours=catfours+4;
                    if (dice2==4) catfours=catfours+4;
                    if (dice3==4) catfours=catfours+4;
                    if (dice4==4) catfours=catfours+4;
                    if (dice5==4) catfours=catfours+4;
                    cout << catfours << endl;
                    canUsecatfours++;
                }
                else if ( canUsecatfours > 0 ){
                    cout << "You've already used this catagory!" << endl;
                }
            }
            else if ( scoresect == fives ) {
                if ( canUsecatfives == 0 ){
                    catfives=0;
                    if (dice1==5) catfives=catfives+5;
                    if (dice2==5) catfives=catfives+5;
                    if (dice3==5) catfives=catfives+5;
                    if (dice4==5) catfives=catfives+5;
                    if (dice5==5) catfives=catfives+5;
                    cout << catfives << endl;
                    canUsecatfives++;
                }
                else if ( canUsecatfives > 0 ){
                    cout << "You've already used this catagory!" << endl;
                }

            }
            else if ( scoresect == sixes ) {
                if ( canUsecatsixes == 0 ){
                    catsixes=0;
                    if (dice1==6) catsixes=catsixes+6;
                    if (dice2==6) catsixes=catsixes+6;
                    if (dice3==6) catsixes=catsixes+6;
                    if (dice4==6) catsixes=catsixes+6;
                    if (dice5==6) catsixes=catsixes+6;
                    cout << catsixes << endl;
                    canUsecatsixes++;
                }
            else if ( canUsecatsixes > 0 ){
                cout << "You've already used this catagory!" << endl;
                }
            }
        }

    }
    rerolloop = 0;
}
        if ( diceorcal == "exit" ) {
            exit (EXIT_SUCCESS);
        }
        if ( diceorcal == "calculate" ) {
            cout << "Current numbers rolled:" << endl;
            cout << dice1;
            cout << " ";
            cout << dice2;
            cout << " ";
            cout << dice3;
            cout << " ";
            cout << dice4;
            cout << " ";
            cout << dice5;
            cout << " " << endl;
            cout << "Score to which category?" << endl;
            cout << "aces, twos, thress, fours, fives, or sixes?" << endl;
            cin >> scoresect; //Choice strings
            if ( scoresect == aces ) { //Thanks to Mr. Last for the help with the catagories!
                if ( canUsecatones == 0 ){
                    catones=0;
                    if (dice1==1) catones++;
                    if (dice2==1) catones++;
                    if (dice3==1) catones++;
                    if (dice4==1) catones++;
                    if (dice5==1) catones++;
                    cout << catones << endl;
                    canUsecatones++;
                }
                else if ( canUsecatones > 0 ){
                    cout << "You've already used that catagory!" << endl;
                }
            }
            else if ( scoresect == twos ) {
                if ( canUsecattwos == 0 ){
                    cattwos=0;
                    if (dice1==2) cattwos=cattwos+2;
                    if (dice2==2) cattwos=cattwos+2;
                    if (dice3==2) cattwos=cattwos+2;
                    if (dice4==2) cattwos=cattwos+2;
                    if (dice5==2) cattwos=cattwos+2;
                    cout << cattwos << endl;
                    canUsecattwos++;
                }
                else if ( canUsecattwos > 0 ){
                    cout << "You've already used this catagory!" << endl;
                }
            }
            if ( scoresect == threes ){
                if ( canUsecatthrees == 0 ){
                    catthrees=0;
                    if (dice1==3) catthrees=catthrees+3;
                    if (dice2==3) catthrees=catthrees+3;
                    if (dice3==3) catthrees=catthrees+3;
                    if (dice4==3) catthrees=catthrees+3;
                    if (dice5==3) catthrees=catthrees+3;
                    cout << catthrees << endl;
                    canUsecatthrees++;
                }
                else if ( canUsecatthrees > 0 ){
                    cout << "You've already used this catagory!" << endl;
                }
            }

            else if ( scoresect == fours ) {
                if ( canUsecatfours == 0 ){
                    catfours=0;
                    if (dice1==4) catfours=catfours+4;
                    if (dice2==4) catfours=catfours+4;
                    if (dice3==4) catfours=catfours+4;
                    if (dice4==4) catfours=catfours+4;
                    if (dice5==4) catfours=catfours+4;
                    cout << catfours << endl;
                    canUsecatfours++;
                }
                else if ( canUsecatfours > 0 ){
                    cout << "You've already used this catagory!" << endl;
                }
            }
            else if ( scoresect == fives ) {
                if ( canUsecatfives == 0 ){
                    catfives=0;
                    if (dice1==5) catfives=catfives+5;
                    if (dice2==5) catfives=catfives+5;
                    if (dice3==5) catfives=catfives+5;
                    if (dice4==5) catfives=catfives+5;
                    if (dice5==5) catfives=catfives+5;
                    cout << catfives << endl;
                    canUsecatfives++;
                }
                else if ( canUsecatfives > 0 ){
                    cout << "You've already used this catagory!" << endl;
                }

            }
            else if ( scoresect == sixes ) {
                if ( canUsecatsixes == 0 ){
                    catsixes=0;
                    if (dice1==6) catsixes=catsixes+6;
                    if (dice2==6) catsixes=catsixes+6;
                    if (dice3==6) catsixes=catsixes+6;
                    if (dice4==6) catsixes=catsixes+6;
                    if (dice5==6) catsixes=catsixes+6;
                    cout << catsixes << endl;
                    canUsecatsixes++;
                }
            else if ( canUsecatsixes > 0 ){
                cout << "You've already used this catagory!" << endl;
                }
            }
            loopbreak=0;
        }
    }

    return 0;
}

