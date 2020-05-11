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
        "kobyla  ma maly bok",
        "Kobyla  ma maly bok",
        "kOb yl A mA maly bo K",
        "kOb yl A mA maly bo K ",
        " kOb yl A mA maly bo K"
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
    int caseModL = 0, caseModR = 0;

    while(i < j) {
        while(str[i] == ' ') i++;
        while(str[j] == ' ') j--;

        (str[i] >= 'A' && str[i] <= 'Z') ? caseModL = 32 : caseModL = 0;
        (str[j] >= 'A' && str[j] <= 'Z') ? caseModR = 32 : caseModR = 0;

        if((str[i] + caseModL) != str[j] + caseModR) {
            std::cout << "\"" << str << 
            "\" is NOT a palindrome" << std::endl;
            return false;
        }
        
        i++;
        j--;
    }

    std::cout << "\"" << str << 
    "\" is a palindrome" << std::endl;
    return true;
}