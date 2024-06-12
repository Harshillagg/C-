#include <iostream>

using namespace std;

long long int accuratesqrt(int n)
{
    int s = 0, e = n;
    long long int ans = -1;
    while (s <= e)
    {
        long long int mid = (s + e) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

double precision(int n, double temp, int decimal)
{
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < decimal; i++)
    {
        factor = factor / 10;
        for (int j = 1; j < 10; j++)
        {
            temp = ans + factor;
            if (temp * temp < n)
            {
                cout << temp << endl;
                ans = temp;
            }
            else
            {
                break;
            }
        }
    }
    return ans;
}

int main()
{

    int n;
    cout << "enter a number : ";
    cin >> n;

    double temp = accuratesqrt(n);

    cout << "The accurate sqrt of " << n << " is --> " << temp << endl;

    int decimal;
    cout << "enter number of decimal points : ";
    cin >> decimal;

    cout << "The precise sqrt of " << n << " is --> " << precision(n, temp, decimal);

    return 0;
}