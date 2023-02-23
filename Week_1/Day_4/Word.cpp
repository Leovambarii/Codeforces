#include <iostream>

int main() {
    int lowers=0, uppers=0;
    std::string s;
    std::cin >> s;
    for(int i=0; i<s.length(); i++) {
        if(isupper(s[i]))
            uppers++;
        else
            lowers++;
    }
    for(int i=0; i<s.length(); i++) {
        if(uppers>lowers)
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    }
    std::cout << s << std::endl;

    return 0;
}