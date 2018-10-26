#include <iostream>
using namespace std;

int main() {
    int a[7];
    cout << "a: " << a << endl;
    cout << "a*: " << *a << endl;
    cout << "sizeof(a): " << (sizeof(a)) << endl;
    cout << "sizeof(*a): " << (sizeof(*a)) << endl;
    cout << "Length of array = " << (sizeof(a)/sizeof(*a)) << endl;
}
