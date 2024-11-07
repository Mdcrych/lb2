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
    int n = D.size()/2;
    std::cout<<n<<std::endl;
    std::deque<int>::iterator i = D.begin();
    std::advance(i, n);
    while(i !=D.begin()){
        if(*i%2==0){
        D.erase(i);
        i--;}
        else{
            i--;}
        }
    std::copy(D.begin(), D.end(), std::ostream_iterator<char>(std::cout," "));
    }
