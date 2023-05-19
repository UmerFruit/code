#include <iostream>
using namespace std;
void draw(string board[][10],int pieces[][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            if (pieces[i][j] == 1)
                board[i][j] = "1";
            else if (pieces[i][j] == 2)
                board[i][j] = "2";
            else
                board[i][j] = ".";
        }
    }
    board[0][0] = "S";
    board[9][9] = "E";
    for (int i = 9; i >= 0; i--)
    {
        for (int j = 9; j >= 0; j--)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    string board[10][10];
    int pieces[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            pieces[i][j]=0;
        }
    }
    cout<<"enter char";
    char c = getch();
    cout<<c;
    // draw(board,pieces);
}
