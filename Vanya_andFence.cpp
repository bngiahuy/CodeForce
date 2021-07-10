#include<iostream>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int count = 0;
    while(n--)
    {
        int x, width;
        cin >> x;
        if(x > h)
        {
            width = 2;
        }
        else width = 1;
        count += width;
    }
    cout << count << '\n';
}