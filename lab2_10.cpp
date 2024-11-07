#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "Russian");
    std::vector<std::string> V;
    int n;
    std::cout << "Введите количество слов: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
    std::string input;
    std::cout << "Введите слово Caps Lock`ом: ";
    std::cin >> input;
    V.push_back(input);
}

std::multimap<char, std::string> M;

for (auto it = V.rbegin(); it != V.rend(); ++it) {
    M.insert(std::make_pair((*it)[(*it).size() - 1], *it));
}

for (const auto& pair : M) {
    std::cout << pair.first << ": " << pair.second << std::endl;
}

return 0;}
