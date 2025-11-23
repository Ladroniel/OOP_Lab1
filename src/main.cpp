#include <iostream>
#include <string>
#include "replace.hpp"

int main() {
    std::string text = "Vader said: No, i am your father!";
    int n = 2;
    char old_value = 'a';
    char new_value = 'o';

    std::string res = replaceNth(text, n, old_value, new_value);
    std::cout << res << std::endl;
}
