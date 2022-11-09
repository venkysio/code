//VSD Sample Program
#include <iostream>
using namespace std;

class VSDProgram
{
    private:
        unsigned int data;
    public: 
        VSDProgram(){
            data = 10;
        };
        int memberfunction()
        {
            return data;
        }
};
int main()
{
    VSDProgram Obj;
    std::cout<<"Object Calling:"<<Obj.memberfunction();

    VSDProgram *ptr = new VSDProgram();
    std::cout<<"Pointer Calling:"<<ptr->memberfunction();

    return 0;
}