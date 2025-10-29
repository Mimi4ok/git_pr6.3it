// gitpr6.3it.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int SumSquares(int* a, const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += a[i] * a[i];
    return sum;
}

template <typename T>
T SumSquares(T* a, const int size) {
    T sum = T();
    for (int i = 0; i < size; i++)
        sum += a[i] * a[i];
    return sum;
}

int main() {
    const int n = 10;

    int a[n] = { 1,2,3,4,5,6,7,8,9,10 };
    double b[n] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.0 };

    cout << "SumSquares(a, n) = " << SumSquares(a, n) << endl;
    cout << "SumSquares<int>(a, n) = " << SumSquares<int>(a, n) << endl;
    cout << "SumSquares<double>(b, n) = " << SumSquares<double>(b, n) << endl;

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
