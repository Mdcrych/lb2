#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <numeric>
#include <set>
#include <map>

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
    std::cout<<"введите номер задания"<<std::endl;
    int x = 0;
    std::cin>> x;
    switch(x){
        case 1:{
        std::vector<int> V;
        short unsigned int l, n;
        l = input(l,"Введите кол-во элементов вектора ");
        if (l-3 <0 or l%2 == 0){
            std::cout << "число элементов не больше 3х или четно";
            return -1;}
        else{
            for (int i {0}; i < l; i++){
                n = input(n,"Введите элемент вектора ");
                V.push_back(n);}}
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
        r = input(r,"Введите кол-во элементов вектора ");
        if (r-3 <0 or r%2 == 0){
            std::cout << "число элементов не больше 3х или четно";
            return -1;}
        else{
            for (int i {0}; i < r; i++){
                m = input(m,"Введите элемент вектора");
                L.push_back(m);}}
        L.front() *= 2;
        L.back() *= 2;
        int j = 1;
        j=L.size()/2;
        std::cout << L.front() << std::endl;
        std::list<int>::iterator it = L.begin();
        std::advance(it, j);
        int a = *it;
        std::cout << a*2 << std::endl;
        std::cout << L.back() << std::endl;
        break;}
        case 2:{
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
                it--;}
            L.push_back(*it);
            std::copy(L.begin(), L.end(), std::ostream_iterator<int>(std::cout, " "));
            break;}
        case 3:{
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
                i = D.erase(++i);}
            std::cout << "Результат после удаления элементов с четными порядковыми номерами в первой половине:" << std::endl;
            for (int num : D) {
                std::cout << num << " ";}
            return 0;
            break;}
        case 4:{
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
                return 1;}
            std::replace_copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(outputFile, "  "), 0, 10);
            outputFile.close();
            std::cout << "Числа записаны в " << name << std::endl;
            return 0;
            break;}
        case 5:{
            int K;
            std::cout << "введите K: ";
            std::cin >> K;
            std::vector<int> V;
            short unsigned int l, n;
            l = input(l,"Введите кол-во элементов вектора ");
            for (int i {0}; i < l; i++){
                n = input(n,"Введите элемент вектора ");
                if(n ==1 or n == 0){
                    V.push_back(n);}}
            auto it = std::search_n(V.rbegin(), V.rend(), K, 0);
            if (it != V.rend()) {
                V.erase(it.base() - K, it.base());}
            std::cout << "новый вектор V: ";
            for (int num : V) {
                std::cout << num << " ";}
            std::cout << std::endl;
            return 0;
            break;}
        case 6:{
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
                std::cout << elem << " ";}
            std::cout << std::endl;
            std::cout << "L2 с инвертированной половиной: ";
            for (const auto& elem : L2) {
                std::cout << elem << " ";}
            std::cout << std::endl;
            return 0;
            break;}
        case 7:{
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
            break;}
        case 8:{
            std::vector<int>  L;
            short unsigned int l, n;
            l = input(l,"Введите кол-во элементов списка: ");
            for (int i {0}; i < l; i++){
                n = input(n,"Введите элемент списка: ");
                L.push_back(n);}
            std::vector<double> V;
            std::adjacent_difference(L.begin(), L.end(), std::back_inserter(V), AverageCalculator());
            V.erase(V.begin()); 
            std::cout << "Результат:\n";
            for (const double& num : V) {
                std::cout << num << ' ';}
            return 0;
            break;}
        case 9:{
            std::vector<int> V0;
            std::cout << "Введите размер вектора V0: ";
            int sizeV0;
            std::cin >> sizeV0;
            std::cout << "Введите значения вектора V0: ";
            for(int i = 0; i < sizeV0; i++){
                int value;
                std::cin >> value;
                V0.push_back(value); }
            int N; 
            std::cout << "Введите количество векторов: "; 
            std::cin >> N; 
            std::vector<std::vector<int>> V; 
            for(int i = 0; i < N; i++){ 
                std::cout << "Введите размер вектора " << i+1 << ": "; 
                int sizeVi; 
                std::cin >> sizeVi; 
                std::vector<int> tempVec; 
                std::cout << "Введите значения вектора " << i+1 << ": "; 
            for(int j = 0; j < sizeVi; j++){ 
                int value; 
                std::cin >> value; 
                tempVec.push_back(value); } 
            V.push_back(tempVec);} 
            int count = 0; 
            std::multiset<int> sV0(V0.begin(), V0.end()); 
            for (int i = 0; i < N; i++) { 
                std::multiset<int> sVi(V[i].begin(), V[i].end()); 
                if (std::includes(sVi.begin(), sVi.end(), sV0.begin(), sV0.end())) { 
                    count++;}} 
            std::cout << "Количество векторов, содержащих все элементы из V0: " << count << std::endl;
            return 0;
            break;}
        case 10:{
            std::vector<std::string> V;
            int n;
            std::cout << "Введите количество слов: ";
            std::cin >> n;
            for (int i = 0; i < n; i++) {
                std::string input;
                std::cout << "Введите слово Caps Lock`ом: ";
                std::cin >> input;
                V.push_back(input);}
            std::multimap<char, std::string> M;
            for (auto it = V.rbegin(); it != V.rend(); ++it) {
                M.insert(std::make_pair((*it)[(*it).size() - 1], *it));}
            for (const auto& pair : M) {
                std::cout << pair.first << ": " << pair.second << std::endl;}
            return 0;
            break;}
        }
    }
