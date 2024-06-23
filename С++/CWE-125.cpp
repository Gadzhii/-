#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int index;
    
    std::cout << "Enter an index: ";
    std::cin >> index;

    // CWE-125: Out-of-bounds read
    std::cout << "Value at index " << index << " is " << arr[index] << std::endl;

    return 0;
}
