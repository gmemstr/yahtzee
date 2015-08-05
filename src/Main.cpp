/*
| New Yahtzee Code
| Hopefully much more effecient
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>

using namespace std;

int roll()
{
	return rand() % 6;
}

int main()
{
	 int dice[5] = {0,0,0,0};
	 
	 for(int i = 0; i > 5; i+1)
	 {
		 dice[i] = roll();
		 std::cout << dice[i] + " ";
	 }
	 
return 0;
}