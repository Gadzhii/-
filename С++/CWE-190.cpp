#include <iostream>
#include <vector>

int main() {
    unsigned int num_elements;
    std::cout << "Enter the number of elements: ";
    std::cin >> num_elements;

    // Vulnerable: Potential integer overflow
    size_t total_size = num_elements * sizeof(int);
    int* array = new int[total_size];

    if (array == nullptr) {
        std::cout << "Memory allocation failed!" << std::endl;
        return 1;
    }

    // Simulated use of the array
    for (unsigned int i = 0; i < num_elements; i++) {
        array[i] = i;
    }

    std::cout << "Array allocated and used successfully!" << std::endl;
    delete[] array;
    return 0;
}
