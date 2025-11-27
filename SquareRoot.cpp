#include<iostream>
using namespace std;

int sqrtInteger(int n)
{
    long long int s = 0, e = n;
    long long int mid = s + (e - s)/2;
    int ans = -1;
    while(s <= e)
    {
        if((mid * mid) > n)
        e = mid -1;
        else if((mid * mid) == n)
        return mid;
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

double sqrtPrecise(int n, int p, int t)
{
    double factor = 1;
    double ans = t;
    for(int i = 0; i < p; i ++)
    {
        factor = factor/10;
        for(double j = t; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the value :" << endl;
    cin >> n;
    int p;
    cout << "Enter the precision:" << endl;
    cin >> p;
    int temp = sqrtInteger(n);
    double answer = sqrtPrecise(n, p, temp);
    cout << "The Square root of " << n << " precise upto " << p << " digits after decimal is: " << answer << endl;
    return 0;
}