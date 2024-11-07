#include <iostream>
#include <deque>
#include <iterator>

int input(int a, std::string str = "Введите размер контейнера: ") {
  std::cout << str;
  std::cin >> a;
  return a;
}

int main(){
    setlocale(LC_ALL, "Russian");
    std::deque<int> D;
    short unsigned int k, number;
    k = input(k,"Введите кол-во элементов дека ");
    if (k%4 == 0){
        for (int i {0}; i < k; i++){
        number = input(number,"Введите элемент дека ");
        D.push_back(number);}}
    else{
    std::cout << "число элементов не кратно 4";
        return -1;}
    int N = D.size();
    auto i = D.begin();
    for (int j = 0; j < N/4; ++j) {
        i = D.erase(++i);
    }
    std::cout << "Результат после удаления элементов с четными порядковыми номерами в первой половине:" << std::endl;
    for (int num : D) {
        std::cout << num << " ";
    }
    return 0;
}
