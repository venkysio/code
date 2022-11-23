
#include "progbycontract.h"
#include <string>
using namespace std;
class StackofIntegers
{
    Stack stack; // Object composition, not inheritence
public:
    void push(int *str)
    {
        stack.push(int);
    }

    // Just peek, no pop
    int *peek()
    {
        return (int *)stack.peek();
    }
    int *pop()
    {
        return (int *)stack.pop();
    }
};