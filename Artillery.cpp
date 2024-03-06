/**
 * file:            Artillery.cpp
 * author:          Michael Chapman
 * date modified:   March 6th, 2024
 * description:     An artillery game
 * The String conversion to lowercase tool utilizing transform is from my game "TheGame", avalible at:
 * https://github.com/GlacierPark19/TheGame
 * This function utilizes libraries from the GNU C++ Libraries
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double velocity = 0.0;
    double angle = 0.0;
    int difficultyLevel = 10;
    int minDistance = 0, maxDistance = 0, tankPosition = 0, roundNumber = 0;
    string difficulty = "";
    string playerName = "";

    string banner;
    banner += "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    banner += "  _______          _      ____        _   _   _       \n";
    banner += " |__   __|        | |    |  _ \\      | | | | | |      \n";
    banner += "    | | __ _ _ __ | | __ | |_) | __ _| |_| |_| | ___  \n";
    banner += "    | |/ _` | '_ \\| |/ / |  _ < / _` | __| __| |/ _ \\ \n";
    banner += "    | | (_| | | | |   <  | |_) | (_| | |_| |_| |  __/ \n";
    banner += "    |_|\\__,_|_| |_|_|\\_\\ |____/ \\__,_|\\__|\\__|_|\\___| \n";
    banner += "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cout << banner << endl
         << endl;
    cout << "Copyright 2024 M Chapman.\n Make sure to check out our sister game, MasterGunner!\n";
    cout << "Enter your name commander! " << endl;
    getline(cin, playerName);
    cout << "Welcome to the unit " << playerName << "!\n The enemy aproaches and we need your expertise!\n";
    cout << "Choose your difficulty!\n";
    cout << endl;
    cout << endl;
    cout << "Choose Difficulty: Easy, Medium, or Hard" << endl;
    getline(cin, difficulty);
    // This function fixes issues regarding capitilization.
    transform(difficulty.begin(), difficulty.end(), difficulty.begin(), ::towlower);
    // Then, to make my life "Easy" I assign each difficulty a nemerical value. Why do I do this? BC I hate comparing strings. Too many possibilities
    if (difficulty == "easy")
    {
        difficultyLevel = 0;
    }
    else
    {
        if (difficulty == "medium")
        {
            difficultyLevel = 1;
        }
        else
        {
            if (difficulty == "hard")
            {
                difficultyLevel = 2;
            }
        }
    }

    cout << "Good Choice commander! " << difficulty << " Is not for everyone!\n Your tank is ready! Head for the field of battle to Victory!\n";
    // cout << "\033[2J\033[1;1H"; // clears the screen utilizing some form of console black magic bulls**t. Pardon my french

    return 0;
}