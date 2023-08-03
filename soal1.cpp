#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string alamat;
};

void tukar(Mahasiswa &a, Mahasiswa &b) {
    Mahasiswa temp = a;
    a = b;
    b = temp;
}

void bubbleSort(Mahasiswa arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].nama > arr[j + 1].nama) {
                tukar(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(Mahasiswa arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].nama < arr[minIndex].nama) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            tukar(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    Mahasiswa data[] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"}
    };

    int n = sizeof(data) / sizeof(data[0]);

    // Bubble Sort
    bubbleSort(data, n);

    cout << "Hasil dengan Bubble Sort:\n";
    cout << "Nama\tAlamat\n";
    for (int i = 0; i < n; i++) {
        cout << data[i].nama << "\t" << data[i].alamat << endl;
    }

    cout << endl;

    // Selection Sort
    selectionSort(data, n);

    cout << "Hasil dengan Selection Sort:\n";
    cout << "Nama\tAlamat\n";
    for (int i = 0; i < n; i++) {
        cout << data[i].nama << "\t" << data[i].alamat << endl;
    }

    return 0;
}
