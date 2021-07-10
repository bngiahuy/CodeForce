#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;
    vector<int> pos;
    while(t--)
    {
        bool check = false;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == 'B' && str[i+1] == 'G')
            {
                pos.push_back(i);
            }
        }
        for(int i = 0; i < pos.size(); i++)
        {
            str.replace(pos[i], 2, "GB");
        }
    }
    cout << str << '\n';
}