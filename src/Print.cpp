#include <iostream>
#include<string>
#include<vector>

template <typename Container>
void Print(Container data, std::string delimiter) {
    bool first = true;

    for (auto elem : data) {
        if (!first) {
            std::cout << delimiter;
        } else {
            first = false;
        }

        std::cout << elem;
    }
    
    std::cout << "\n";
}

int main() {
    std::vector<int> data = {1, 2, 3};
    Print(data, ";");
}