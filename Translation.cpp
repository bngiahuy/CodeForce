#include<iostream>
#include<string>

using namespace std;

void reverseString(string& s)
{
    for(int i = 0; i < s.length()/2; i++)
    {
        swap(s[i], s[s.length() - i - 1]);
    }
}
int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);
    
    // for(int i = 0; i < s.length(); i++)
    // {
    //     for(int j = t.length() - 1; j >= 0; j--)
    //     {
    //         if(s[i] == t[j]) check = true;
    //         else check = false;
    //     }
    // }
    // if(check) cout << "YES\n";
    // else cout << "NO\n";
    reverseString(s);
    if(s == t) cout << "YES\n";
    else cout << "NO\n";

    return 0;

}