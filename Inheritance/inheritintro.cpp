// Simple inheritance
#include "inheritintro.h"
#include <iostream>
using namespace std;
class Derived : public Base
{
    int i; // Different from Base's i
public:
    Derived() { i = 0; }
    int change()
    {
        i = permute(); // Different name call
        return i;
    }
    void set(int ii)
    {
        i = ii;
        Base::set(ii); // Same-name function call
    }
};
int main()
{
    cout << "sizeof(Base) = " << sizeof(Base) << endl;
    cout << "sizeof(Derived) = "<< sizeof(Derived) << endl;
    Derived D;
    D.change();
    // Base function interface comes through:
    cout<<"D.read after D.change(): "<<D.read()<<endl;
    D.permute();
    // Redefined functions hide base versions:
    D.set(12);
    cout<<"D.read() after D.Set(): "<<D.read()<<endl;

    D.change();
    // Base function interface comes through:
    cout<<"D.read after D.change(): "<<D.read()<<endl;

} ///:~