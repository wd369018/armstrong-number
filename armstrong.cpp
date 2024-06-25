#include <iostream>
using namespace std;
int main()
{
    int num, ans, digit;
    cout << "Enter the number:\n";
    cin >> num;

    while (num > 0)
    {
        digit = num % 10;
        num /= 10;
        ans = digit;
    }

    for (int i = 1; i <= digit; i++)
    {
        int mul, sum = 0;
        mul = ans ^ i;
        sum += mul;

        if (sum == num)
        {
            cout << "armstrong no";
        }
        else
            cout << "not a  armstrong number";
        break;
    }
    return 0;
}