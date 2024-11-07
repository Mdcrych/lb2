#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

int main() {
setlocale(LC_ALL, "Russian");
std::list<int> L = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

auto isEven = [](int n) { return n % 2 == 0; };

auto it = std::partition(L.begin(), L.end(), isEven);

int numEven = std::distance(L.begin(), it);
int numOdd = std::distance(it, L.end());

std::cout << "четные: " << numEven << std::endl;
std::cout << "нечетные: " << numOdd << std::endl;

return 0;
}
