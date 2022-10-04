#include <iostream>
using namespace std;
int main()
{
    int x, i, y = 0, z = 0;
    cout << "Enter the Number to check Prime: ";
    cin >> x;
    y = x / 2;
    for (i = 2; i <= y; i++)
    {
        if (x % i == 0)
        {
            cout << "Number is not Prime." << endl;
           z = 1;
            break;
        }
    }
    if (z == 0)
        cout << "Number is Prime." << endl;
    return 0;
}