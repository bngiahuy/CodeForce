#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    char vowel[6] = {'A', 'O', 'E', 'I', 'U', 'Y'};
    string dot = ".";
    bool check = 0;
    for(int i = 0; i < s.length(); i++){
        char x = s[i];
        if(x >= 97 && x <= 122) // x la chu cai thuong
            x -= 32; 

        for(int j = 0; j < 6; j++){
            if(x == vowel[j] || x == vowel[j]+32) {
                check = 0;
                break;
            }
            else check = 1;
        }
        if(check == 1){
            x += 32;
            cout << dot + x;
        }
    }
    return 0;
}