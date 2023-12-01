#include <iostream>
#include <string>
#include <ctype.h>

int main() {
    std::string line;
    unsigned long int sum = 0;
    while(std::getline(std::cin, line) && !line.empty()) {
        char extract[] = { '\0', '\0', '\0' };
        for(char &c : line) {
            if(isdigit(c)) {
                extract[1] = c;
                if(extract[0] == '\0') {
                    extract[0] = c;
                }
            }
        }
        sum += atoi(extract);
    }
    std::cout << sum << std::endl;
    return 0;
}
