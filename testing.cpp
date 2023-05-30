#include <iostream>
#include <string>
using namespace std;
void truth_table_entry(bool const x, bool const y)
{
    const string s[] = {"false ", "true  ", "and ", " "};
    const string x_and_y = s[x] + s[2] + s[y];
    const string r = s[x and y] + s[3];

    if (x + y == 0)
        cout << "┌──────────────────┬─────────┐\n";
    if (x + y <= 2)
        cout << "│ " << x_and_y << " │ " << r << " │\n";
    if (x + y == 2)
        cout << "└──────────────────┴─────────┘\n";
}

int main()
{
    // truth_table_entry(false, false);
    // truth_table_entry(false, true);
    // truth_table_entry(true, false);
    // truth_table_entry(true, true);

    bool x =6;
    bool y = 4;
    bool z = x xor y;
    cout << z << endl;

}