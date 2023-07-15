#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <memory.h>
#include <map>
#include <unordered_map>
#include <utility>

int main() {
    std::unordered_map<std::string, int> mapa;
    mapa.insert(std::make_pair("dut",2));
    mapa.insert(std::make_pair("test",3));

    auto it = mapa.find("test");
    if(it != mapa.end()) {
        std::cout << it->second << std::endl;
    }
    return 0;
}