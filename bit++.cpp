#include<iostream>
using namespace std;

int main(){
    int n;
    int x = 0;
    cin >> n;
    string str;
    while(n--){
        cin >> str;
        if(str[1] == '+') x++;
        else x--;
    }
    cout << x;
}