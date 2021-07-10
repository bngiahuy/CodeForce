#include<iostream>
#include<string>
using namespace std;

bool checkDistinct(int x)
{
    string s = to_string(x);
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        for(int j = i + 1; j < len; j++)
        {
            if(s[i] == s[j]) return false;
        }
    }
    return true;
}
int main()
{
    int x;
    cin >> x;
    if(x >= 1000 && x <= 9000)
    {
        while(true)
        {
            x++;
            if(checkDistinct(x)) break;
            else continue;
        }
        cout << x << '\n';
    }
    
}