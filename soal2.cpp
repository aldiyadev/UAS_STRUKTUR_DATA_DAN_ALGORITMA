#include <iostream>

int main() {
    int data[] = {19, 40, 10, 90, 2, 50, 60, 50, 1};
    int dataSize = sizeof(data) / sizeof(data[0]);

    int input;
    std::cout << "Masukkan angka yang ingin dicari: ";
    std::cin >> input;

    bool found = false;

    std::cout << "Output : ";
    for (int i = 0; i < dataSize; ++i) {
        if (data[i] == input) {
            if (found) {
                std::cout << "dan ";
            }
            std::cout << "Angka " << input << " ada di indeks ke " << i << " ";
            found = true;
        }
    }

    if (!found) {
        std::cout << "Angka " << input << " tidak ada dalam array";
    }

    std::cout << std::endl;

    return 0;
}
