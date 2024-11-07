#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class AverageCalculator {
public:
    double operator()(int a, int b) const {
        return (a + b) / 2.0;
    }
};

int main() {
    std::vector<int> L = {1, 3, 4, 6};
    std::vector<double> V;

    std::adjacent_difference(L.begin(), L.end(), std::back_inserter(V), AverageCalculator());

    V.erase(V.begin()); 

    std::cout << "Результат:\n";
    for (const double& num : V) {
        std::cout << num << ' ';
    }

    return 0;
}

