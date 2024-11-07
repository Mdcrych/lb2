#include <iostream>
#include <list>
#include <algorithm>

int input(int a, std::string str = "Введите размер контейнера: ") {
  std::cout << str;
  std::cin >> a;
  return a;
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::list<int>L1;
    short unsigned int r1, m1;
    r1 = input(r1,"Введите кол-во элементов первого вектора: ");
    if (r1%4!=0){
        std::cout << "число элементов не кратно 4";
        return -1;}
    else{
    for (int i {0}; i < r1; i++){
        m1 = input(m1,"Введите элемент вектора: ");
        L1.push_back(m1);}}
    std::list<int>L2;
    short unsigned int r2, m2;
    r2 = input(r2,"Введите кол-во элементов второго вектора: ");
    if (r2%4!=0){
        std::cout << "число элементов не кратно 4";
        return -1;}
    else{
    for (int j {0}; j < r2; j++){
        m2 = input(m2,"Введите элемент вектора: ");
        L2.push_back(m2);}}

    auto mid1 = L1.begin();
    std::advance(mid1, L1.size() / 2);
    std::reverse(L1.begin(), mid1);

    auto mid2 = L2.begin();
    std::advance(mid2, L2.size() / 2);
    std::reverse(mid2, L2.end());

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
