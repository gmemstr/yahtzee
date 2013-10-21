/*
| Yahtzee program                           |
| Written by Gabriel Simmer                 |
| I still don't know how to play yahtzee :P |
*/

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <math.h>

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
    int allowedtoroll1;
    int allowedtoroll2;
    int allowedtoroll3;
    int allowedtoroll4;
    int allowedtoroll5;
    int loopbreak;
    int catlocked1 = 0;
    int catlocked2 = 0;
    int catlocked3 = 0;
    int catlocked4 = 0;
    int catlocked5 = 0;
    int catlocked6 = 0;
    loopbreak = 0;
    allowedtoroll1 = 0;
    allowedtoroll2 = 0;
    allowedtoroll3 = 0;
    allowedtoroll4 = 0;
    allowedtoroll5 = 0; //Declares all variables needed
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
    while ( loopbreak != 1 ) {
        cout << "Reroll which dice?" << endl;
        cout << "Enter 8 to score current roll or 9 to continue to next round." << endl;
        cout << "Dice ";
        cin >> rerolldice; //Make new random numbers if dice is chosen, 9 is exit, 8 is calculate score
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
        if ( rerolldice == 9 ) {
            exit (EXIT_SUCCESS);
        }
        if ( rerolldice == 8 ) {
            loopbreak = 1; //Breaks the loop
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
            string aces = "aces";
            string twos = "twos";
            string threes = "threes";
            string fours = "fours";
            string fives = "fives";
            string sixes = "sixes";
            string scoresect;
            cin >> scoresect; //Choice strings
            if ( scoresect == aces ) {
                /*
                | The following code is messy.                         |
                | It basically is supposed to calculate the value for  |
                | each category. However, it seems to produce random   |
                | strings of numbers. No obvious pattern found.        |
                */
                if ( dice1 == 1 ){
                    catones = dice1;
                }
                else if ( dice2 == 1 ){
                    if ( catones == 0 ) {
                        catones = dice2;
                    }
                    else if ( catones > 1 ) {
                            catones = dice2 + 1;
                    }
                }
                else if ( dice3 == 1 ) {
                    if ( catones == 0 ) {
                        catones = 1;
                    }
                    else if ( catones == 1 ) {
                        catones = 2;
                    }
                    else if ( catones == 2 ){
                        catones = 3;
                    }
                }
                else if ( dice4 == 1 ) {
                    if ( catones == 0 ) {
                        catones = 1;
                    }
                    else if ( catones == 1 ) {
                        catones = 2;
                    }
                    else if ( catones == 2 ) {
                        catones = 3;
                    }
                    else if ( catones == 3 ); {
                        catones == 4;
                    }
                }
                else if ( dice5 == 1) {
                    if ( catones == 0 ) {
                        catones = 1;
                    }
                    else if ( catones == 1 ) {
                        catones = 2;
                    }
                    else if ( catones == 2 ) {
                        catones = 3;
                    }
                    else if ( catones == 3) {
                        catones = 4;
                    }
                    else if ( catones == 4 ){
                        catones == 5;
                    }
                }
            cout << catones << endl;

            }
            if ( scoresect == twos ) {
                if ( dice1 == 2 ) {
                    cattwos = dice1 + 2 ;
                }
                if ( dice2 == 2 ) {
                    catones = dice2 + 2 ;
                }
                if ( dice3 == 2 ) {
                    cattwos = dice3 + 2 ;
                }
                if ( dice4 == 2 ) {
                    cattwos = dice4 + 2 ;
                }
                if ( dice5 == 2 ) {
                    cattwos = dice5 + 2 ;
                }
            cout << cattwos << endl;

            }
            if ( scoresect == threes ){
                if ( dice1 == 3 ) {
                    catthrees = dice1 + 3 ;
                }
                if ( dice2 == 3 ) {
                    catthrees = dice2 + 3 ;
                }
                if ( dice3 == 3 ) {
                    catthrees = dice3 + 3 ;
                }
                if ( dice4 == 3 ) {
                    catthrees = dice4 + 3 ;
                }
                if ( dice5 == 3 ) {
                    catthrees = dice5 + 3 ;
                }
            cout << catthrees << endl;

            }
            if ( scoresect == fours ) {
                if ( dice1 == 4 ) {
                    catfours = 4 ;
                }
                if ( dice2 == 4 ) {
                    catfours = dice2 + 4 ;
                }
                if ( dice3 == 4 ) {
                    catfours = catfours + 4 ;
                }
                if ( dice4 == 4 ) {
                    catfours = catfours + 4 ;
                }
                if ( dice5 == 4 ) {
                    catfours = catfours + 4 ;
                }
            cout << catfours << endl;

            }
            if ( scoresect == fives ) {
                if ( dice1 == 5 ) {
                    catfives = catfives + 5 ;
                }
                if ( dice2 == 5 ) {
                    catfives = catfives + 5 ;
                }
                if ( dice2 == 5 ) {
                    catfives = catfives + 5 ;
                }
                if ( dice3 == 5 ) {
                    catfives = catfives + 5 ;
                }
                if ( dice4 == 5 ) {
                    catfives = catfives + 5 ;
                }
                if ( dice5 == 5 ) {
                    catfives = catfives + 5 ;
                }
            cout << catfives << endl;

            }
            if ( scoresect == sixes ) {
                if ( dice1 == 6 ) {
                    catsixes = catsixes + 6 ;
                }
                if ( dice2 == 6 ){
                    catsixes = catsixes + 6 ;
                }
                if ( dice3 == 6 ) {
                    catsixes = catsixes + 6 ;
                }
                if ( dice4 == 6 ) {
                    catsixes = catsixes + 6 ;
                }
                if ( dice5 == 6 ) {
                    catsixes = catsixes + 6 ;
                }
            cout << catsixes << endl;
            }
        }
    }

    return 0;
}
