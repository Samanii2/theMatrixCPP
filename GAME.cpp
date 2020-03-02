#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
 
int main()
{
    int answer;
    cout << "Knock knock Neo, Red or Blue pill?" << endl << "Press 1 for red, 2 for blue" << endl;
    cin >> (answer);
    if(answer == 1){
        cout << "Let's go into the rabbit hole, how deep will it go?..." << endl;
    }
    else if(answer == 2){
        cout << "Here is where the story ends" << endl;
    }
    cout << "Game over." << endl;
    cout << "\n----------------------Press any key to continue----------------------" << endl;
    getchar();
    return 0;
}

