#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int* end(int a[], int b[], int o, int p) {
    int* r;
    r = (int*) malloc((o + p) * sizeof(int));
    int i = 0, j = 0;
    int ind = 0;
    while (i < o && j < p) {
        if (a[i] < b[j]) {
            r[ind] = a[i];
            i++;
        }
        else {
            r[ind] = b[j];
            j++;
        }
        ind++;
    }
    while (i < o) {
        r[ind] = a[i];
        ind++;
        i++;
    }
    while (j < p) {
        r[ind] = b[j];
        ind++;
        j++;
    }
    return r;
}
int main() {
    setlocale(LC_ALL, "Russian");
    int o;
    // массивы а и b - упор€доченны по неубыванию, полученный массив r тоже
    cout << "¬ведите кол-во элементов 1 массива: ";
    cin >> o;
    int *a;
    a = (int*) malloc(o * sizeof(int));
    cout << "Vvedite elementa 1 massiva: ";
    for (int i = 0; i < o; i++) cin >> a[i];
    int p;
    cout << "¬ведите кол-во элементов 2 массива: ";
    cin >> p;
    int *b;
    b = (int*) malloc((p) * sizeof(int));
    cout << "Vvedite elementa 2 massiva: ";
    for (int i = 0; i < p; i++) cin >> b[i];
    int *r = end (a, b, o, p);
    for (int i = 0; i < p + o; i++) {
        cout << r[i] << "   ";
    }
}
