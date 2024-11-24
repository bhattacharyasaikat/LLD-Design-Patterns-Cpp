#include <bits/stdc++.h>
#include "board.hpp"
#include "player.hpp"
using namespace std;


void Board::initilizeBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

bool Board::isFull()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
                return false;
        }
    }

    return true;
}

bool Board::isValidMove(int row, int col)
{
    int n = 3;

    if (row >= 0 && row < n && col >= 0 && col < 3)
        return true;

    return false;
}

char Board ::enumTochar(PieceType piecetype)
{
    return piecetype == PieceType :: X ? 'X' : 'O';
}


void Board ::displayBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << "  ";
        }

        cout << endl;
    }
}
bool Board ::makeMove(int row, int col, PieceType pieceType)
{

    if (isValidMove(row, col))
    {
        board[row][col] = enumTochar(pieceType);
        displayBoard();
        return true;
    }

    cout << "Error in making move\n";

    return false;
}

bool Board::checkWin(int row, int col, PieceType pieceType) {
    char symbol = enumTochar(pieceType);
    bool rowWin = true, colWin = true, diagWin = true, antiDiagWin = true;

    // Row check
    for (int c = 0; c < 3; c++) {
        if (board[row][c] != symbol) {
            rowWin = false;
            break;
        }
    }

    // Column check
    for (int r = 0; r < 3; r++) {
        if (board[r][col] != symbol) {
            colWin = false;
            break;
        }
    }

    // Diagonal check (top-left to bottom-right)
    if (row == col) {
        for (int i = 0; i < 3; i++) {
            if (board[i][i] != symbol) {
                diagWin = false;
                break;
            }
        }
    } else {
        diagWin = false;
    }

    // Anti-diagonal check (top-right to bottom-left)
    if (row + col == 2) {
        for (int i = 0; i < 3; i++) {
            if (board[i][2 - i] != symbol) {
                antiDiagWin = false;
                break;
            }
        }
    } else {
        antiDiagWin = false;
    }

    return rowWin || colWin || diagWin || antiDiagWin;
}
