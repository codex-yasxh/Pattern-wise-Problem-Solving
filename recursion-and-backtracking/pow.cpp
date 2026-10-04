#include <iostream>
using namespace std;

long double power(long double x, long long n)
{
    if (n == 0)
        return 1;

    long double half = power(x, n / 2);

    if (n % 2 == 0)
        return half * half;

    return x * half * half;
}

int main()
{
    long double x;
    long long n;

    cout << "Enter base x: ";
    cin >> x;

    cout << "Enter exponent n: ";
    cin >> n;

    long long exponent = n;

    // Handle negative exponent
    if (exponent < 0)
    {
        x = 1.0L / x;
        exponent = -exponent;
    }

    long double result = power(x, exponent);

    cout << "Answer: " << result << endl;

    return 0;
}