#include <iostream>

void passbyvalue(int b)
{
    b += 1;
    std::cout<<"passbyvalue() - value of b:"<<b<<std::endl;
}
void passbyref(const int *b)
{
    *b += 1;
    std::cout<<"passbyref() - value at b:"<<*b<<std::endl;
    
}

int main()
{
    const int a=10;
    std::cout<<"value of a in main() before calling passbyvalue(): "<<a<<std::endl;
    passbyvalue(a);
    std::cout<<"value of a in main() after calling passbyvalue(): "<<a<<std::endl;
    passbyref(&a);
    std::cout<<"value of a in main() after calling passbyref(): "<<a<<std::endl;

    
    return 0;
}