#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>

int input(int a, std::string str = "Введите размер контейнера: ") {
  std::cout << str;
  std::cin >> a;
  return a;
}
class AverageCalculator {
public:
    double operator()(int a, int b) const {
        return (a + b) / 2.0;
    }
};
int main() {
setlocale(LC_ALL, "Russian");
std::vector<int>  L;
short unsigned int l, n;
    l = input(l,"Введите кол-во элементов списка ");
    for (int i {0}; i < l; i++){
        n = input(n,"Введите элемент списка ");
        L.push_back(n);}
std::vector<double> V;

    std::adjacent_difference(L.begin(), L.end(), std::back_inserter(V), AverageCalculator());

    V.erase(V.begin()); 

    std::cout << "Результат:\n";
    for (const double& num : V) {
        std::cout << num << ' ';
    }

    return 0;
}
