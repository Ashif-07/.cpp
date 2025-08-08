#include <iostream>
using namespace std;

int binaryToDecimal(int n)
{   if(n==1) return 1;
    if(n==0) return 0;
    int ans = 0, mod, base = 1;
    while (n > 0)
    {
        mod = n % 10;
        ans += mod * base;
        base *= 2;
        n /= 10;
    }
    return ans;
}

int decimalToBinary(int n)
{    if(n==1) return 1;
    if(n==0) return 0;
    int ans = 0, mod, base = 1;
    while (n > 0)
    {
        mod = n % 2;
        n /= 2;
        ans += mod * base;
        base *= 10;
    }
    return ans;
}

int main()
{
    int choice, n, ans;
    cout << "Press 1 for Binary to Decimal or Press 0 for Decimal to Binary :";
    cin >> choice;
    cout << "Enter Value :";
    cin >> n;
    if (choice)
    {
        if (choice > 1 || choice < 0)
            cout << "Please Enter either 1 or 0 ";
        else
            ans = binaryToDecimal(n);
    }
    else
        ans = decimalToBinary(n);
    cout << "Converted version : " << ans;

    return 0;
}
