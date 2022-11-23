#include "returnbyReference.h"
#include <iostream>

int& returnbyreference::operator[](int i)
{
    return elem[i];
}

int main()
{
    int arr[3] = {1,2,3};
    int value = arr[2];
    std::cout<<"value:"<<value<<std::endl;

}