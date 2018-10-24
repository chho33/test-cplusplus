#include <iostream>
using namespace std;

int main() { // why main cannot be void??
  int b0 = 100;
  int b = 10;
  int* a = &b;
  //*a = &b0; <-- False, why?? ==> a = &b0
  int& t = b;
  cout << "&t: " << &t << endl; 
  cout << "t: " << t << endl; 
  t =b0;
  cout << "int b0 = 100; int b = 10; int* a = &b; int& t = b;" << endl;
  cout << "a[0]: " << a[0] << endl; 
  cout << "a[1]: " << a[1] << endl; 
  cout << "a: " << a << endl; 
  cout << "*a: " << *a << endl; 
  cout << "&a: " << &a << endl; 
  cout << "&t: " << &t << endl; 
  cout << "t: " << t << endl; 
  cout << "&b0: " << &b0 << endl; 
  cout << "b0: " << b0 << endl; 
  cout << "&b: " << &b << endl; 
  cout << "b: " << b << endl; 


  int c[5];
  c[0] = 56;
  int *d = c;
  int *e = &c[0];
  cout << "---------------------" << endl;
  cout << "int c[5]; c[0] = 56; *d = c; *e = &c[0];" << endl;
  cout << "d: " << d << endl;
  cout << "d[0]: " << d[0] << endl; 
  cout << "c[0]: " << c[0] << endl; 
  cout << "d[10]: " << d[10] << endl; 
  cout << "c[10]: " << c[10] << endl; 
}
