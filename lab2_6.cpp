#include <iostream>
#include <list>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "Russian");
    std::list<int> L1 = {1, 2, 3, 4, 5, 6, 7, 8};
    std::list<int> L2 = {1, 2, 3, 4, 5, 6, 7, 8};

    // Invert first half of L1 using swap_ranges and reverse iterators
    auto mid1 = L1.begin();
    std::advance(mid1, L1.size() / 2);
    std::reverse(L1.begin(), mid1);

    // Invert second half of L2 using reverse
    auto mid2 = L2.begin();
    std::advance(mid2, L2.size() / 2);
    std::reverse(mid2, L2.end());

    // Output the modified lists
    std::cout << "L1 с инвертированной половиной: ";
    for (const auto& elem : L1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "L2 с инвертированной половиной: ";
    for (const auto& elem : L2) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

