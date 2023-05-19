#include <iostream>
#include "getch.h"
using namespace std;
void draw(string board[], int pieces[])
{
    system("clear");
    for (int i = 0; i < 100; i++)
    {
        if (pieces[i] == 1)
            board[i] = "1";
        else if (pieces[i] == 2)
            board[i] = "2";
        else
        {
            if (i == 0)
                board[i] = "S";
            else if (i == 99)
                board[i] = "E";
            else
                board[i] = ".";
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << board[i * 10 + j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    char c;
    string board[100];
    int pieces[100];
    for (int i = 0; i < 100; i++)
    {
        pieces[i] = 0;
    }
    pieces[0] = 1;
    while (c != 27)
    {
        draw(board, pieces);
        cout << "\nenter char\n";
        c = getch();
        // w = 119;
        // s = 115;
        // a = 97;
        // d = 100;
        if (c == 119)
        {
            int i = 0;
            while (pieces[i] != 1)
            {
                i++;
            }
            pieces[i] = 0;
            i -= 10;
            pieces[i] = 1;
        }
        else if (c == 115)
        {
            int i = 0;
            while (pieces[i] != 1)
            {
                i++;
            }
            pieces[i] = 0;
            i += 10;
            pieces[i] = 1;
        }
        else if (c == 97)
        {
            int i = 0;
            while (pieces[i] != 1)
            {
                i++;
            }
            pieces[i] = 0;
            i--;
            pieces[i] = 1;
        }
        else if (c == 100)
        {
            int i = 0;
            while (pieces[i] != 1)
            {
                i++;
            }
            pieces[i] = 0;
            i++;
            pieces[i] = 1;
        }
    }
}
