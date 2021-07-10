#include <iostream>
#include<vector>
#include<string>

using namespace std;
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    string s;
    cin >> s;
    vector<int> res;
    char plus = '+';
    for(int i = 0; i < s.length(); i++){
        if(s[i] != plus) 
            res.push_back(s[i] - '0');
    }

    // Sort
    int len = res.size();
    bool check = 0;
    for(int i = 0; i < len - 1; i++){
        check = 0;
        for(int j = 0; j < len - i - 1; j++){
            if(res[j] > res[j+1]){
                swap(res[j], res[j+1]);
                check = 1;
            }
        }
        if(!check) break;
    }

    // Print
    for(int i = 0; i < len - 1; i++) cout << res[i] << "+";
    cout << res[len-1];
    return 0;
}