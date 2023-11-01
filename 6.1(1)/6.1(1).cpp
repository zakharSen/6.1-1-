#include <iostream>
#include <cmath>
#include <random>
#include <ctime>

using namespace std;

void printArray(int* arr, int size);
void generateArray(int* arr, int size, int low, int high);
int countElements(int* arr, int size);
int sumElements(int* arr, int size);
void replaceElements(int* arr, int size);

int main() {
    const int arrSize = 22;
    int t[arrSize];

    srand(time(0));

    generateArray(t, arrSize, -20, 37);

    cout << "Original array: ";
    printArray(t, arrSize);

    cout << "Number of elements: " << countElements(t, arrSize) << endl;

    cout << "Sum of elements: " << sumElements(t, arrSize) << endl;

    replaceElements(t, arrSize);

    cout << "Modified: ";
    printArray(t, arrSize);

    return 0;
}

void generateArray(int* arr, int size, int low, int high) {
    for (int i = 0; i < size; i++) {
        arr[i] = low + rand() % (high - low + 1);
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sumElements(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 && arr[i] % 5 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int countElements(int* arr, int size) {
    int count = 0;
    for (int j = 0; j < size; j++) {
        if (arr[j] < 0 && arr[j] % 5 != 0) {
            count++;
        }
    }
    return count;
}

void replaceElements(int* arr, int size) {
    for (int k = 0; k < size; k++) {
        if (arr[k] < 0 && arr[k] % 5 != 0) {
            arr[k] = 0;
        }
    }
}
