#include <iostream>
#include <array>
#include <algorithm>

int main() {

    // assign array
    std::array<int, 9> arr = {5, 4, 3, 2, 1, 6, 9, 8, 7};

    // sort array
    std::sort(arr.begin(), arr.end());

    // display sorted array
    for(auto it = arr.begin(); it != arr.end(); it++) {
        std::cout << *it << '\n';
    }

    return 0;
}
