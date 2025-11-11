// gitpr6.3it.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int* createArray(int n) {
    int* a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = i + 1;
    return a;
}

void printArray(int* a, int n) {
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

int SumSquares(int* a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i] * a[i];
    return sum;
}

template <typename T>
T SumSquares(T* a, int n) {
    T sum = T();
    for (int i = 0; i < n; i++)
        sum += a[i] * a[i];
    return sum;
}

int main() {
    const int n = 10;

    int* a = createArray(n);
    double b[n] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.0 };

    cout << fixed << setprecision(2);

    printArray(a, n);
    cout << "Sum of squares (int): " << SumSquares(a, n) << endl;
    cout << "Sum of squares (template<int>): " << SumSquares<int>(a, n) << endl;
    cout << "Sum of squares (template<double>): " << SumSquares<double>(b, n) << endl;

    delete[] a;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
