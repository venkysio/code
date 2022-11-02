//Demo: Size of an empty class
#include <iostream>
class className {
   // VSD data
   public:
   int data;
   public:
   virtual void print()=0;
   
   // VSD functions
};
int main()
{
    std::cout<<"Size of class is:"<<sizeof(className);
    //className *ptr = new className();
    //std::cout<<"Size of int is:"<<sizeof(ptr->data);

   return 0;
}
