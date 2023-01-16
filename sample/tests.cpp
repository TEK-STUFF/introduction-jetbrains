//
// Created by natan on 16/01/2023.
//

#include <iostream>
#include <vector>
#include <string>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::vector<std::string> v;
    int i = 0;
    v.emplace_back("Hello");
    while (true) {
        v.emplace_back("Woooooorld " + std::to_string(i));
        i++;
    }
    return 0;
}