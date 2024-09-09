#include <iostream>
using namespace std;

char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
char current_marker;
int current_player;

void drawBoard() 
{
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) 
    {
        cout << "| ";
        for (int j = 0; j < 3; j++) 
        {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

bool placeMarker(int slot) 
{
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') 
    {
        board[row][col] = current_marker;
        return true;
    }
    return false;
}

int checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) 
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) 
            return current_player;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) 
            return current_player;
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) 
        return current_player;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) 
        return current_player;

    // No win
    return 0;
}

void swapPlayerAndMarker() {
    if (current_marker == 'X') 
        current_marker = 'O';
    else 
        current_marker = 'X';

    if (current_player == 1) 
        current_player = 2;
    else 
        current_player = 1;
}

void game() 
{
    cout << "Player 1, choose your marker (X or O): ";
    char markerP1;
    cin >> markerP1;

    current_player = 1;
    current_marker = markerP1;

    drawBoard();

    int playerWon;

    for (int i = 0; i < 9; i++) 
    {
        cout << "It's player " << current_player << "'s turn. Enter your slot: ";
        int slot;
        cin >> slot;

        if (slot < 1 || slot > 9) 
        {
            cout << "Invalid slot! Please enter a slot number between 1 and 9.\n";
            i--;
            continue;
        }

        if (!placeMarker(slot)) 
        {
            cout << "Slot already taken! Try another slot.\n";
            i--;
            continue;
        }

        drawBoard();

        playerWon = checkWin();

        if (playerWon == 1) 
        {
            cout << "Player 1 won! Congratulations!\n";
            break;
        }
        else if (playerWon == 2) 
        {
            cout << "Player 2 won! Congratulations!\n";
            break;
        }

        swapPlayerAndMarker();
    }

    if (playerWon == 0)
        cout << "It's a tie!\n";
}

int main() {
    game();
    return 0;
}
