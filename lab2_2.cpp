#include <iostream>
#include <iterator>
#include <list>

int input(int a, std::string str = "Введите размер контейнера: ") {
  std::cout << str;
  std::cin >> a;
  return a;
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::list<int> L;
    short unsigned int r, m;
    r = input(r,"Введите кол-во элементов списка ");
    if ( r%3 !=0 ){
        std::cout << "число элементов не кратно 3";
        return -1;}
    else{
    for (int i {0}; i < r; i++){
        m = input(m,"Введите элемент списка ");
        L.push_back(m);}}
    int j = 1;
    j=(L.size()+1)/3-1;
    std::cout << j<< std::endl;
    std::list<int>::iterator it = L.begin();
    std::advance(it, j);
    while(it !=L.begin()) {
        L.push_back(*it);
        it--;
    }
    L.push_back(*it);
    std::copy(L.begin(), L.end(), std::ostream_iterator<int>(std::cout, " "));
}
