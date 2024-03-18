/**
 * file:            Artillery.cpp
 * author:          Michael Chapman
 * date modified:   March 6th, 2024
 * description:     An artillery game
 * The String conversion to lowercase tool utilizing transform is from my game "TheGame", avalible at:
 * https://github.com/GlacierPark19/TheGame
 * This program (including a modified variant) is also avalible on GitHub
 * This function utilizes libraries from the GNU C++ Libraries
 * This program code can be viewed at: https://github.com/GlacierPark19/MasterGunner
 */

#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int high, low;
    int graceValue = 0;
    string userInput;
    double velocity = 0.0;
    double angle = 0.0;
    int difficultyLevel = 99;
    int fireDistance = 0;
    int minDistance = 100, maxDistance = 200, roundNumber = 0, i;
    string difficulty = "";
    int win = 0;
    string playerName = "";
    // Game init block. Handles enemy position and other tings
    srand(time(NULL));
    int tankPosition = rand() % (maxDistance - minDistance + 1) + minDistance;
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
        graceValue = 20;
    }
    else
    {
        if (difficulty == "medium")
        {
            difficultyLevel = 1;
            graceValue = 10;
        }
        else
        {
            if (difficulty == "hard")
            {
                difficultyLevel = 2;
                graceValue = 5;
            }
        }
    }
    for (i = 0; i <= 2; i++)
    {
        if (win != 0)
        {
            return 0;
        }
        cout << "Good Choice " << playerName << " " << difficulty << " Is not for everyone!\n Your tank is ready! Head for the field of battle to Victory!\n";
        cout << "Enter your turret angle!" << endl;
        getline(cin, userInput);
        angle = stod(userInput);
        cout << "Your Firing angle is " << angle << " degrees!" << endl;
        cout << "Enter your firing power! (Velocity)" << endl;
        getline(cin, userInput);
        velocity = stod(userInput);
        cout << "Commander we have a shooting solution! Our angle is: " << angle << " Degrees and our veloctiy is " << velocity << "! Firing!" << endl;
        fireDistance = (velocity * cos(angle * (M_PI / 180)));
        cout << "Commander! Our payload traveled " << fireDistance << " miles!" << endl;
        int high = (tankPosition + graceValue);
        int low = (fireDistance - graceValue);
        switch (difficultyLevel)
        {
        case 0:
            if ((fireDistance == tankPosition) || (low <= tankPosition <= high))
            {
                cout << "Congrats Commander! A succsessful hit! The Enenmy has been defeated!" << endl;
                cout << "The enemy was located at a distance of: " << tankPosition << " Miles! You have won!" << endl;
                cout << "----YOU WIN!------" << endl
                     << "-------GAME OVER--------" << endl;
                win = 1;
            }
            else
            {
                cout << "Our shot missed! ";
                if (fireDistance < tankPosition)
                {
                    cout << "Our shot was too Short!" << endl;
                }
                if (fireDistance > tankPosition)
                {
                    cout << "Our shot was too Long!" << endl;
                }
            }
            break;
        case 1:
            if ((fireDistance == tankPosition) || (low <= tankPosition <= high))
            {
                cout << "Congrats Commander! A succsessful hit! The Enenmy has been defeated!" << endl;
                cout << "The enemy was located at a distance of: " << tankPosition << " Miles! You have won!" << endl;
                cout << "----YOU WIN!------" << endl
                     << "-------GAME OVER--------" << endl;
                win = 1;
            }
            else
            {
                cout << "Our shot missed! ";
                if (fireDistance < tankPosition)
                {
                    cout << "Our shot was too Short!" << endl;
                }
                if (fireDistance > tankPosition)
                {
                    cout << "Our shot was too Long!" << endl;
                }
            }
            break;
        case 3:
            if ((fireDistance == tankPosition) || (low <= tankPosition <= high))
            {
                cout << "Congrats Commander! A succsessful hit! The Enenmy has been defeated!" << endl;
                cout << "The enemy was located at a distance of: " << tankPosition << " Miles! You have won!" << endl;
                cout << "----YOU WIN!------" << endl
                     << "-------GAME OVER--------" << endl;
                win = 1;
            }
            else
            {
                cout << "Our shot missed! ";
                if (fireDistance < tankPosition)
                {
                    cout << "Our shot was too Short!" << endl;
                }
                if (fireDistance > tankPosition)
                {
                    cout << "Our shot was too Long!" << endl;
                }
            }
            break;
        }
        cout << "****************************" << endl
             << endl
             << endl
             << endl;
    }
}