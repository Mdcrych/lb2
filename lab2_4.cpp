#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>

int main() {
setlocale "russian";
std::string name = "output.txt";
std::vector<int> numbers = {5, 0, 8, 0, 3};

std::ofstream outputFile(name);
if (!outputFile.is_open()) {
    std::cerr << "Error opening file " << name << std::endl;
    return 1;
}

std::replace_copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(outputFile, "  "), 0, 10);

outputFile.close();

std::cout << "Numbers have been written to " << name << std::endl;

return 0;}
