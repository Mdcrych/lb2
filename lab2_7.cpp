#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

int input(int a, std::string str = "Введите размер контейнера: ") {
  std::cout << str;
  std::cin >> a;
  return a;
}
int main() {
setlocale(LC_ALL, "Russian");
std::list<int> L;
short unsigned int l, n;
    l = input(l,"Введите кол-во элементов списка ");
    for (int i {0}; i < l; i++){
        n = input(n,"Введите элемент списка ");
        L.push_back(n);}
auto isEven = [](int n) { return n % 2 == 0; };

auto it = std::partition(L.begin(), L.end(), isEven);

int numEven = std::distance(L.begin(), it);
int numOdd = std::distance(it, L.end());

std::cout << "четные: " << numEven << std::endl;
std::cout << "нечетные: " << numOdd << std::endl;

return 0;
}
