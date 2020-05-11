#include <iostream>
#include <string>

bool isPalindrome(const std::string & str);

int main() {

    bool isIt = false;

    std::string tests[] {
        "aba",
        "abba",
        "xy",
        "x",
        "kajak",
        "pp",
        "kobyla ma maly bok",
        "kobyla  ma maly bok"
    };

    for(std::string s : tests) {
        isIt = isPalindrome(s);
    }
    
    return 0;
}

bool isPalindrome(const std::string & str) {
    if(str.length() < 2) {
        std::cout << "\"" << str << "\" is too short" << std::endl;
        return false;
    }
    int i = 0, j = str.length() - 1;
    while(i < j) {
        if(str[i] != str[j]) {
            std::cout << "\"" << str << 
            "\" is NOT a palindrome" << std::endl;
            return false;
        }
        
        do {i++;} while(str[i] == ' ');
        do {j--;} while(str[j] == ' ');


    }
    std::cout << "\"" << str << 
    "\" is a palindrome" << std::endl;
    return true;
}