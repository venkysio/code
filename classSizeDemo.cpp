//Demo: Size of an empty class
#include <iostream>
class className {
   // VSD data
   public:
   int data;
   int data2;
   int *ptr;
   int data3;

   public:
   //void print();  
   // VSD functions
};
int main()
{
    
    className obj;
    className *ptrObj = new className();

    
    std::cout<<"Size of object.data is:"<<sizeof(obj.data)<<std::endl;
    
    std::cout<<"Size of int is:"<<sizeof(int)<<std::endl; 

    std::cout<<"Size of int pointer is:"<<sizeof(obj.ptr)<<std::endl;
    
    std::cout<<"Size of int pointer is:"<<sizeof(obj.ptr)<<std::endl;
    
    std::cout<<"Size of class is:"<<sizeof(className)<<std::endl;

    std::cout<<"Size of object is:"<<sizeof(obj)<<std::endl;

    std::cout<<"Size of the pointerobject is:"<<sizeof(ptrObj)<<std::endl;


    obj.ptr = new int(100);
    std::cout<<"Size of class after dynamic mem allocation is:"<<sizeof(className)<<std::endl;

    std::cout<<"Size of the object after dynamic mem allocation is:"<<sizeof(obj)<<std::endl;


   return 0;
}
