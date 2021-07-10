#include<iostream>
#include<string>
using namespace std;

string removeDuplicate(string& str, int n)
{
   // Used as index in the modified string
   int index = 0;  
    
   // Traverse through all characters
   for (int i=0; i<n; i++) {
        
     // Check if str[i] is present before it 
     int j; 
     for (j=0; j<i; j++)
        if (str[i] == str[j])
           break;
      
     // If not present, then add it to
     // result.
     if (j == i)
        str[index++] = str[i];
   }
    
   return str;
}

int main(){
    string s;
    cin >> s;
    int count = 0;
    
    int len = s.length();
    s = removeDuplicate(s, len);
    //cout << count << '\n';
    // if(count%2!=0) cout << "IGNORE HIM!\n";
    // else cout << "CHAT WITH HER!\n";
    //cout << len;
    cout << s;
}