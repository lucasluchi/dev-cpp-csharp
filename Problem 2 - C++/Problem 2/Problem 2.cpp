// Problem 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#define UP      0 
#define RIGHT   1 
#define DOWN    2 
#define LEFT    3

string getLastLoop(string path) {

    // Initialize starting point for robot as (0, 0)
    int x = 0, y = 0;
    int dir = 0;
    int index = 0;
    int loop = 0;
    int countRight = 0, countLeft = 0;
    int loopRight = 0, loopLeft = 0;

    // Traverse the path given for robot 
    for (int i = 0; i < path.size(); i++)
    {
        // for each movement inc/dec y and x position
        if (path[i] == 'L') {
            dir = (4 + dir - 1) % 4;
            countLeft++;
        }
        else if (path[i] == 'R') {
            dir = (dir + 1) % 4;
            countRight++;
        }
        else{ // if UP or DOWN
            loop++;

            if (dir == UP)
                y++;
            else if (dir == RIGHT)
                x++;
            else if (dir == DOWN)
                y--;
            else
                x--;
        }

        // Return movements of the looping
        // if are less than 2 movements of up and down have no loop
        if (x == 0 && y == 0 && loop > 2) {
            index = i;
            loopRight = countRight;
            loopLeft = countLeft;
        }
    }

    //                  initial movement position (looping)            total of movements
    return path.substr(abs(loopRight - loopLeft) - (1 + dir), index - abs(loopRight - loopLeft) + 2);
}

int main()
{
    ofstream fout("OUTPUT2.TXT");

    string s;
    getline(cin, s);

    string result = getLastLoop(s);

    fout << result << endl;
    fout.close();

    return 0;
}
