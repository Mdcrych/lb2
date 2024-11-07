#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int input(int a, std::string str = "Введите размер контейнера: ") {
  std::cout << str;
  std::cin >> a;
  return a;
}

int main() {
int K;
std::cout << "введите K: ";
std::cin >> K;
std::vector<int> V;
short unsigned int l, n;
    l = input(l,"Введите кол-во элементов вектора ");
    for (int i {0}; i < l; i++){
        n = input(n,"Введите элемент вектора ");
        if(n ==1 or n == 0){
            V.push_back(n);}
    }
auto it = std::search_n(V.rbegin(), V.rend(), K, 0);

if (it != V.rend()) {
    V.erase(it.base() - K, it.base());
}

std::cout << "новый вектор V: ";
for (int num : V) {
    std::cout << num << " ";
}
std::cout << std::endl;

return 0;
}

