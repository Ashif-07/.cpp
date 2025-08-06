#include <iostream>
/**/ #include<cmath>
using namespace std;
int binarytodecimal(int n)
{
    if(n==0)
        return 0;
    int ans = 0, /*mul = 1;*/ pw = 0;
    while (n > 0)
    {
        int digit = n % 10;
        ans += digit * /*mul*/ pow(2, pw);
        n /= 10;
        pw++;
        // mul *= 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter a Binary Number : ";
    cin >> n;
    cout << "Decimal : " << binarytodecimal(n);
    return 0;
}
