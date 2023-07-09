#include <iostream>
#include <sstream>
#include <iomanip>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <unordered_set>
#include <vector>

// familiar with try-catch
int main() {
    int score;
    std::vector<int> data;
    while (std::cin >> score) {
        try {
            if (score < 0 || score > 100) {
                throw(score);
            }
            data.push_back(score);
        }
        catch (int score) {
            std::cerr << "score illegal "<< std::endl;
            break;
        }
    }
    std::cout << "size :" << data.size() << std::endl;
    std::cout << "task completed " << std::endl;
    return 0;
}