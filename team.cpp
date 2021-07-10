#include<iostream>
using namespace std;

int main(){
    int n;
    size_t count = 0;
    int a,b,c;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        if((a == 1 && b == 1 && c != 1) 
        || (a==1&&c==1&&b!=1)||(b==1&&c==1&&a!=1)) ++count;
        if(a==1&&b==1&&c==1) ++count;
        
    }
    cout << count << '\n';
}