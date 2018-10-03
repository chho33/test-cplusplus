#include <iostream>
 
using namespace std;
const int MAX = 3; // why must be const?? if var[MAX]
const int MAX2 = 4; 
 
int main ()
{

   int  var0[MAX] = {10, 100, 200};
   int *ptr0 = var0;
 
   cout << "##############################################" << endl;
   cout << "int var0[3] = {10, 100, 200}; int *ptr0 = var0" << endl;
   cout << "##############################################" << endl;
   for (int i = 0; i < MAX; i++)
   {
      cout << "ptr0[" << i << "]: " << ptr0[i] << endl;
      cout << "&ptr0[" << i << "]: " << &ptr0[i] << endl;
      cout << "-----------------" << endl;
   }

   int  var[MAX] = {10, 100, 200};
   int *ptr[MAX];
 
   for (int i = 0; i < MAX; i++)
   {
      ptr[i] = &var[i]; 
   }
   cout << "#############################################" << endl;
   cout << "int var[3]; int *ptr[MAX]; ptr[i] = &var[i]; " << endl;
   cout << "#############################################" << endl;
   for (int i = 0; i < MAX; i++)
   {
      cout << "*ptr[" << i << "]: " << *ptr[i] << endl;
      cout << "ptr[" << i << "]: " << ptr[i] << endl;
      cout << "-----------------" << endl;
   }

  
   cout << "##################################################" << endl;
   cout << "const char *names[4] = {\"xxx\",\"xxx\",\"xxx\",\"xxx\"}; " << endl;
   cout << "##################################################" << endl;
   const char *names[MAX2] = {
                     "Zara Ali",
                     "Hina Ali",
                     "Nuha Ali",
                     "Sara Ali",
   };
   
   for (int i = 0; i < MAX2; i++)
   {
      cout << "*names[" << i << "]: " << *names[i] << endl;
      cout << "names[" << i << "]: " << names[i] << endl;
      cout << "-----------------" << endl;
   }

   return 0;
}
