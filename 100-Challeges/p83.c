/* Program 83: Develop a simple text-based game like tic-tac-toe or hangman. */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to initialize the game board
void initializeBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

// Function to display the game board
void displayBoard(char board[3][3]) {
    printf("  0 1 2\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2)
                printf("|");
        }
        printf("\n");
        if (i < 2)
            printf("  -----\n");
    }
}

// Function to check if the game is over
bool isGameOver(char board[3][3]) {
    // Check rows
    for (int i = 0; i < 3; i++)
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;

    // Check columns
    for (int j = 0; j < 3; j++)
        if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j])
            return true;

    // Check diagonals
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;

    // Check if board is full
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return false;
    return true;
}

// Function to check if the move is valid
bool isValidMove(char board[3][3], int row, int col) {
    return row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ';
}

// Function to make a move
void makeMove(char board[3][3], int row, int col, char player) {
    board[row][col] = player;
}

int main() {
    char board[3][3];
    char currentPlayer = 'X';
    int row, col;

    printf("Welcome to Tic-Tac-Toe!\n");
    initializeBoard(board);

    // Game loop
    while (!isGameOver(board)) {
        printf("\nPlayer %c's turn:\n", currentPlayer);
        displayBoard(board);

        // Get player's move
        do {
            printf("Enter row and column (0-2): ");
            scanf("%d %d", &row, &col);
        } while (!isValidMove(board, row, col));

        // Make the move
        makeMove(board, row, col, currentPlayer);

        // Switch player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    // Game over
    displayBoard(board);
    printf("\nGame over. ");
    if (isGameOver(board))
        printf("Player %c wins!\n", currentPlayer);
    else
        printf("It's a draw!\n");

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
