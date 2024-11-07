#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>

int input(int a, std::string str = "Введите размер контейнера: ") {
  std::cout << str;
  std::cin >> a;
  return a;
}

int main() {
  setlocale(LC_ALL, "Russian");
std::string name = "output.txt";
std::vector<int> numbers;
short unsigned int l, n;
l = input(l,"Введите кол-во элементов вектора ");
for (int i {0}; i < l; i++){
    n = input(n,"Введите элемент вектора ");
    numbers.push_back(n);}
std::ofstream outputFile(name);
if (!outputFile.is_open()) {
    std::cerr << "ошибка в открытии файла " << name << std::endl;
    return 1;
}

std::replace_copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(outputFile, "  "), 0, 10);

outputFile.close();

std::cout << "Числа записаны в " << name << std::endl;

return 0;}
