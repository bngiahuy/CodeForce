#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = count(s.begin(), s.end(), 'A');
    int d = count(s.begin(), s.end(), 'D');
    if(a > d) cout << "Anton\n";
    else if(a < d) cout << "Danik\n";
    else cout << "Friendship\n";
}