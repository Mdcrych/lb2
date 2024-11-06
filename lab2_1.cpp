#include <iostream>
#include <vector>
#include <deque>
#include <list>
int input(int a, std::string str = "Введите размер контейнера: ") {
  std::cout << str;
  std::cin >> a;
  return a;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int x = 1;
    std::cout << "Введите номер задачи" << std:: endl;
    std::cin >> x;
    switch (x) {
        case 1:
        std::vector<int> V;
    short unsigned int l, n;
    l = input(l,"Введите кол-во элементов вектора ");
    if (l-3 <0 or l%2 == 0){
        std::cout << "число элементов не больше 3х или четно";
        return -1;}
    else{
    for (int i {0}; i < l; i++){
        n = input(n,"Введите элемент вектора ");
        V.push_back(n);}
    }
    V.front() *= 2;
    V.at((int)(V.size() / 2)) *= 2;
    V.back() *= 2;
    std::cout << V.front() << std::endl;
    std::cout << V.at((int)(V.size() / 2))<< std::endl;
    std::cout << V.back() << std::endl;
    std::deque<int> D;
    short unsigned int k, number;
    k = input(k,"Введите кол-во элементов дека ");
    if (k-3 <0 or k%2 == 0){
        std::cout << "число элементов не больше 3х или четно";
        return -1;}
    else{
    for (int i {0}; i < k; i++){
        number = input(number,"Введите элемент дека ");
        D.push_back(number);}}
    D.front() *= 2;
    D.at((int)(D.size() / 2))*= 2;
    D.back() *= 2;
    std::cout << D.front() << std::endl;
    std::cout << D.at((int)(D.size() / 2))<< std::endl;
    std::cout << D.back() << std::endl;
     std::list<int> L;
    short unsigned int r, m;
    r = input(r,"Введите кол-во элементов дека ");
    if (r-3 <0 or r%2 == 0){
        std::cout << "число элементов не больше 3х или четно";
        return -1;}
    else{
    for (int i {0}; i < r; i++){
        m = input(m,"Введите элемент дека ");
        L.push_back(m);}}
    L.front() *= 2;
    L.back() *= 2;
    for (int n : L.size()/2)
        std::cout << n << "\t";
    std::cout << std::endl;
    std::cout << L.front() << std::endl;
    
    std::cout << L.back() << std::endl;
   
    }
}
