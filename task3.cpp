#include <iostream>
using namespace std;

char square[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9'};
string playerMarks[3] = {"", "Player X", "Player O"};

int checkwin() {
     if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;
    
}

void board() {
    cout << "Player 1 be (X)"<<endl<<"Player 2 be (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|______" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|______" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl;
    
}

void playGame() {
    char playChoice;
    do {
        for (int i = 1; i <= 9; ++i)
            square[i] = (char)(i + '0');

        int player = 1, i, choice;
        char mark;
        string players[3] = {"", "X", "O"};

        do {
            board();
            mark = players[player][0];

            cout << playerMarks[player] << ", Enter the number: ";
            cin >> choice;

            if (choice >= 1 && choice <= 9 && square[choice] == (char)(choice + '0')) {
                square[choice] = mark;
            } else {
                cout << "Invalid move!";
                player--;
                cin.ignore();
                cin.get();
            }
            i = checkwin();
            player = (player % 2) + 1;
        } while (i == -1);

        board();
        if (i == 1) {
            cout << "\n\nCONGRATULATIONS! " << playerMarks[(player % 2) + 1] << " wins!"<<endl;
        } else {
            cout << "\n\nGAME DRAWN!"<<endl;
        }

        cout << "\n\nDo you want to play again? (Y/N): ";
        cin >> playChoice;
    } while (playChoice == 'Y' || playChoice == 'y');
}

int main() {
    cout << "\n\n*****WELCOME TO OUR T I C -- T A C -- T O E GAME****\n\n" << endl;
    playGame();

    cin.ignore();
    cin.get();
    return 0;
}