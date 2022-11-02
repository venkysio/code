//Demo: Size of an empty class
#include <iostream>
class className {
   // VSD data
   public:
   int data;
   public:
   void print();
   
   // VSD functions
};
int main()
{
    std::cout<<"Size of class is:"<<sizeof(className)<<std::endl;
    className obj;
    std::cout<<"Size of int is:"<<sizeof(obj.data);

   return 0;
}
