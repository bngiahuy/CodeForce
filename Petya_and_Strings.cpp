#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;

    int check = 0;
    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] < 92) 
            s1[i] += 32;
        if(s2[i] < 92) 
            s2[i] += 32;
            
    }

    if(s1 < s2) 
        check = -1;
    else if(s1== s2) 
        check = 0;
    else 
        check = 1;

    cout << check;
    
    
}