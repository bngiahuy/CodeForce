#include<iostream>
#include<string>
void upperString(std::string& str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        i++;
    }
}
void lowerString(std::string& str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        i++;
    }
}
int main()
{
    std::string inputUser;
    getline(std::cin, inputUser);
    //std::cin >> inputUser;
    int count_lowercase = 0, count_uppercase = 0;
    int len = inputUser.length();
    int i = 0;
    while(i < len)
    {
        if(inputUser[i] >= 97 && inputUser[i] <= 122) 
            count_lowercase++;
        if(inputUser[i] >= 65 && inputUser[i] <= 90)
            count_uppercase++;
        i++;
    }
    if(count_uppercase > count_lowercase) 
        upperString(inputUser);
    else 
        lowerString(inputUser);
    std::cout << inputUser << '\n';
    return 0;
}