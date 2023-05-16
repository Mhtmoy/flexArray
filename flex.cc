#include<iostream>
#include"./flex.h"
using namespace std;

Flex::Flex()
{
   size = 0;
   capacity = 0;
   arrPtr = nullptr;
}
void Flex::push_back(int value)
{
   if(size==capacity)
      addCapacity();
   *(arrPtr + size) = value; // or arrPtr[size] = value;
   size++;
}
void Flex::addCapacity()
{
   capacity += 5;
   int* temp = arrPtr;
   arrPtr = new int[capacity];
   for(int i=0; i<size; i++)
      *(arrPtr+i) = *(temp+i);  // or arrPtr[i] = temp[i];
   delete [] temp;
}
int Flex::getSize() const
{
   return size;
}
int Flex::getCapacity() const
{
   return capacity;
}
const Flex& Flex::operator=(const Flex& f)
{
   if(this != &f)
   {
      delete [] arrPtr;
   }
}
