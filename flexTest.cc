#include<iostream>
#include"./flex.h"
using namespace std;
int main()
{
   Flex f1;
   f1.push_back(5);
   cout << "f1's size is " << f1.getSize() << endl;
   cout << "f1's capacity is " << f1.getCapacity() << endl;
   f1.push_back(7);
   cout << "f1's size is " << f1.getSize() << endl;
   cout << "f1's capacity is " << f1.getCapacity() << endl;
   f1.push_back(9);
   cout << "f1's size is " << f1.getSize() << endl;
   cout << "f1's capacity is " << f1.getCapacity() << endl;
   f1.push_back(11);
   cout << "f1's size is " << f1.getSize() << endl;
   cout << "f1's capacity is " << f1.getCapacity() << endl;
   f1.push_back(13);
   cout << "f1's size is " << f1.getSize() << endl;
   cout << "f1's capacity is " << f1.getCapacity() << endl;
   f1.push_back(15);
   cout << "f1's size is " << f1.getSize() << endl;
   cout << "f1's capacity is " << f1.getCapacity() << endl;
   return 0;
}
