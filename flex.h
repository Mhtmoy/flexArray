#ifndef FLEX_H
#define FLEX_H
class Flex
{
  public:
   Flex();
   void push_back(int);
   int getSize() const;
   int getCapacity() const;
   void print() const;
   const Flex& operator=(const Flex&);
  private:
   int size;
   int capacity;
   int* arrPtr;
   // private helper function
   void addCapacity();
};
#endif
