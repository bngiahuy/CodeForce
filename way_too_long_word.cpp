#include<iostream>

int main(){
   int n;
   std::string s;
   std::cin >> n;
   while(n--){
       std::cin >> s;
        if(s.length() > 10)
        {
            std::cout << s[0] << s.length() - 2 << s[s.length() - 1] << '\n';
        }
        else std::cout << s << '\n';
   }
}