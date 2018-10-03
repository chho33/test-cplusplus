#include <iostream>
using namespace std;

int main() { // why main cannot be void??
  int b0 = 100;
  int b = 10;
  int *a = &b;
  //*a = &b0; <-- why??
  int &t = b;
  //&t = b0; <-- False! 引用初始化過後不能更改
  cout << "b = 10; *a = &b; &t = b;" << endl;
  cout << "a[0]: " << a[0] << endl; 
  cout << "a[1]: " << a[1] << endl; 
  cout << "a: " << a << endl; 
  cout << "*a: " << *a << endl; 
  cout << "t: " << t << endl; 
  cout << "&t: " << &t << endl; 

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
