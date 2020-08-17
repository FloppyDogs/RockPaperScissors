// RockPaperScissors.cpp : Light code exercise making a C++ Rock, Paper, Scissors game
//

#include <iostream>

using namespace std;

string player1_guess;
string player2_guess;

void rps(string player1_guess, string player2_guess) {
    if (player1_guess == "rock" && player2_guess == "scissors") {
        cout << "Player 1 Wins!" << endl;
    }
    else if (player1_guess == "scissors" && player2_guess == "paper") {
        cout << "Player 1 Wins!" << endl; 
    }
    else if (player1_guess == "paper" && player2_guess == "rock") {
        cout << "Player 1 Wins!" << endl;
    }
    else if (player1_guess == player2_guess) {
        cout << "Tie!" << endl;
    }
    else {
        cout << "Player 2 Wins!" << endl;
    }
}

int main()
{
    //Rock Paper Scissors

    cout << "--------------------------" << endl;
    cout << "-                        -" << endl;
    cout << "-   " << "ROCK PAPER SCISSORS" << "  -" << endl;
    cout << "-                        -" << endl;
    cout << "--------------------------" << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Player 1, Rock, Paper, Scissors: " << endl;
    cin >> player1_guess;

    cout << endl;
    cout << endl;

    cout << "Player 2, Rock, Paper, Scissors: " << endl;
    cin >> player2_guess;

    rps(player1_guess, player2_guess);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
