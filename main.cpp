#include <iostream>
#include <array>

int main() {

    // assign array
    std::array<int, 9> arr = {5, 4, 3, 2, 1, 6, 9, 8, 7};

    // display unsorted
    for(auto it = arr.begin(); it != arr.end(); it++) {
        std::cout << *it << '\n';
    }

    // sort array
    

    // display sorted array

    return 0;
}
