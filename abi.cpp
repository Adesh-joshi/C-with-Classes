#include <iostream>
#include <vector>

using namespace std;

// Function to display the tic-tac-toe board
void displayBoard(const vector<vector<char>&board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

// Function to check if a player has won
bool checkWin(const vector<vector<char>& board, char player) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true; // Check rows
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true; // Check columns
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true; // Check diagonal
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true; // Check reverse diagonal
    }
    return false;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' ')); // Initialize the board with empty spaces
    char currentPlayer = 'X';
    int row, col;

    cout << "Welcome to Tic-Tac-Toe!" << endl;

    for (int turn = 0; turn < 9; ++turn) {
        displayBoard(board);

        cout << "Player " << currentPlayer << ", enter row and column (0-2): ";
        cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[row][col] = currentPlayer;

        if (checkWin(board, currentPlayer)) {
            displayBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    if (!checkWin(board, 'X') && !checkWin(board, 'O')) {
        displayBoard(board);
        cout << "It's a draw!" << endl;
    }

    return 0;
}

