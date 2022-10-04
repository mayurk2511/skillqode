#include <iostream>
using namespace std;
void prime();
int main()
{
    prime();
    return 0;
}
void prime()
{
    int num, i, x = 0;
    printf("Enter a valid number");
   scanf("%d",num);
    for (i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            x = 1;
            break;
        }
    }
    if (x == 1)
    {
        cout << num << " is not a prime number.";
    }
    else
    {
        cout << num << " is a prime number.";
    }
}