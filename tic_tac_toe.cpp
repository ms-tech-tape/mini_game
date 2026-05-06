#include <iostream>
using namespace std;

// Display the game board
void displayBoard(char board[3][3]) {
    cout << "\n";
    cout << "     |     |     \n";
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "\n";
    cout << "     |     |     \n\n";
}

// Check if a player has won
bool checkWin(char board[3][3], char player) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

// Check if the game is a draw
bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

// Reset the board with numbers 1-9
void resetBoard(char board[3][3]) {
    char value = '1';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = value++;
}

// Main Tic Tac Toe game function
void playTicTacToe() {
    char board[3][3];
    char playAgain;

    cout << "=========================================\n";
    cout << "            TIC TAC TOE GAME             \n";
    cout << "=========================================\n";
    cout << "  Player 1: X    Player 2: O             \n";
    cout << "  Enter numbers 1-9 to place your mark   \n";
    cout << "=========================================\n";

    do {
        resetBoard(board);
        char currentPlayer = 'X';
        int choice;
        bool gameOver = false;

        while (!gameOver) {
            displayBoard(board);
            cout << "Player " << currentPlayer << ", enter position (1-9): ";
            cin >> choice;

            // Validate input range
            if (choice < 1 || choice > 9) {
                cout << "\n*** Invalid input! Please enter a number between 1 and 9. ***\n";
                continue;
            }

            int row = (choice - 1) / 3;
            int col = (choice - 1) % 3;

            // Check if position is already taken
            if (board[row][col] == 'X' || board[row][col] == 'O') {
                cout << "\n*** Position already taken! Try a different one. ***\n";
                continue;
            }

            // Place the mark
            board[row][col] = currentPlayer;

            // Check for win
            if (checkWin(board, currentPlayer)) {
                displayBoard(board);
                cout << "=========================================\n";
                cout << "      *** Player " << currentPlayer << " WINS! ***            \n";
                cout << "=========================================\n";
                gameOver = true;
            } 
            // Check for draw
            else if (checkDraw(board)) {
                displayBoard(board);
                cout << "=========================================\n";
                cout << "         *** It's a DRAW! ***            \n";
                cout << "=========================================\n";
                gameOver = true;
            } 
            // Switch player
            else {
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        }

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\n=========================================\n";
    cout << "    Thanks for playing Tic Tac Toe!      \n";
    cout << "=========================================\n";
}