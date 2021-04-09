#include <iostream>
#include <cmath>
int main() {
    bool school[4];
    bool fitness[2];
    bool stalinka[10];
    bool multiStorey[25];
    bool skyscraper[107];
    std::size_t allFloor = sizeof(school) + sizeof(fitness) + sizeof(stalinka) + sizeof(multiStorey) + sizeof(skyscraper);
    std::cout << "average quantity floor " << allFloor / 5;
    return 0;
}
