#include <iostream>
#include <vector>
#include <deque>
#include <list>
//лаба 2 задание 1
int zad1(){
    std::vector<int> V{1, 2, 4};
    V.front() *= 2;
    V.at((int)(V.size() / 2)) *= 2;
    V.back() *= 2;
    std::cout << V.front() << std::endl;
    std::cout << V.at((int)(V.size() / 2))<< std::endl;
    std::cout << V.back() << std::endl;
    std::deque<int> D{2, 5, 9};
    D.front() *= 2;
    D.at((int)(D.size() / 2)) *= 2;
    D.back() *= 2;
    std::cout << D.front() << std::endl;
    std::cout << D.at((int)(V.size() / 2))<< std::endl;
    std::cout << D.back() << std::endl;
}
int main(){
    
}
