#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>

int main() {
setlocale(LC_ALL, "Russian");
std::vector<int>V0 = {1, 2, 3};
int N = 3;
std::vector<std::vector<int>> V = {
{1, 2, 3, 4},
{1, 2, 3},
{2, 3, 4}
};
int count = 0;
std::multiset<int> sV0(V0.begin(), V0.end());
for (int i = 0; i < N; i++) {
    std::multiset<int> sVi(V[i].begin(), V[i].end());
    if (std::includes(sVi.begin(), sVi.end(), sV0.begin(), sV0.end())) {
        count++;
    }
}
std::cout << "Number of vectors containing all elements of V0: " << count << std::endl;
return 0;
}
