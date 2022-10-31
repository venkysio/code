#include <iostream>

class Shape {
    public:
        /*
        double length;
        double breadth;
        double height;   
        */
        double calculateArea(){   
            //return length * breadth;
        }

        double calculateVolume(){   
            //return length * breadth * height;
        }

};
int main()
{
    std::cout << "Hello World" << std::endl;
    std::cout<< "Size of the class:" << sizeof(Shape) << std::endl;
    
    Shape obj;
    std::cout<< "Size of the object:" << sizeof(obj) << std::endl;

    Shape *ptrobj = new Shape();
    std::cout<< "Size of the pointer object:" << sizeof(ptrobj) << std::endl;

}