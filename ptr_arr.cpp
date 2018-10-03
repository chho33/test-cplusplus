#include <iostream>
 
using namespace std;
const int MAX = 3;
const int MAX2 = 4; 
 
int main ()
{
   int  var[MAX] = {10, 100, 200};
   int *ptr[MAX];
 
   for (int i = 0; i < MAX; i++)
   {
      ptr[i] = &var[i]; 
   }
   cout << "int var[MAX]; int *ptr[MAX]; ptr[i] = &var[i]; " << endl;
   for (int i = 0; i < MAX; i++)
   {
      cout << "Value of var[" << i << "] = " << endl;
      cout << "*ptr[" << i << "]: " << *ptr[i] << endl;
      cout << "ptr[" << i << "]: " << ptr[i] << endl;
      cout << "-----------------" << endl;
   }

   cout << "====================" << endl;
   
   const char *names[MAX2] = {
                     "Zara Ali",
                     "Hina Ali",
                     "Nuha Ali",
                     "Sara Ali",
     };
   
     for (int i = 0; i < MAX2; i++)
     {
        cout << "Value of names[" << i << "] = " << endl;
        cout << "*names[" << i << "]: " << *names[i] << endl;
        cout << "names[" << i << "]: " << names[i] << endl;
        cout << "-----------------" << endl;
     }

   return 0;
}
