#include <iostream>
using namespace std;

int double2int(double *k) {
  cout << "double2int (*k in function) " << k << endl;
  return *k;
}

double callbyaddr(double *addr){
  cout << "callbyaddr(&b) (in function): " << addr << endl;
  return *addr;
}

int callbyname(double &name){
  cout << "callbyname(b) (in function): " << &name << endl;
  return name;
}

int callbyvalue(double value){
  cout << "callbyaddr(b) (in function): " << &value << endl;
  return value;
}

int main() { // why main cannot be void??
  double b = 10.3;
  double* a = &b;
  // int* intPointer = &b; --> Fail
  //int* a = b;
  cout << "double b = 10.3; double* a = &b;" << endl; 
  cout << "--------------------------------" << endl; 
  cout << "*a: " << a << endl; 
  cout << "&a: " << &a << endl; 
  cout << "double b: " << b << " " << &b << endl;
  double d2i = double2int(&b);
  cout << "double2int(&b): " << d2i << " " << &d2i << " <---- addr differ from &b, double can transform to int???" << endl; 
  cout << "3/2 = " << 3/2 << endl; 
  cout << "===== call by test: =====" << endl; 
  cout << "b: " << b << " " << &b << endl; 
  double caddr = callbyaddr(&b);
  cout << "callbyaddr(&b) (output): " << caddr << " " << &caddr << " <---- address of output still change even if i don't change type of output...??"<< endl; 
  int cname = callbyname(b);
  cout << "callbyname(b) (output): " << cname << " " << &cname << endl; 
  int cval  = callbyvalue(b);
  cout << "callbyvalue(b) (output): " << cval << " " << &cval << endl; 
}

