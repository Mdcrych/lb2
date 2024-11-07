#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>

int main() { 
setlocale(LC_ALL, "Russian");
std::vector<int> V0;
std::cout << "Введите размер вектора V0: ";
int sizeV0;
std::cin >> sizeV0;
std::cout << "Введите значения вектора V0: ";
for(int i = 0; i < sizeV0; i++){ int value; std::cin >> value; V0.push_back(value); }
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
        tempVec.push_back(value); 
    } 
    V.push_back(tempVec); 
} 

int count = 0; 
std::multiset<int> sV0(V0.begin(), V0.end()); 
for (int i = 0; i < N; i++) { 
    std::multiset<int> sVi(V[i].begin(), V[i].end()); 
    if (std::includes(sVi.begin(), sVi.end(), sV0.begin(), sV0.end())) { 
        count++; 
    } 
} 
std::cout << "Количество векторов, содержащих все элементы из V0: " << count << std::endl;
return 0;}
