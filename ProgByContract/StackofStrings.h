
#include "progbycontract.h"
#include <string>
using namespace std;
class StackofStrings
{
    Stack stack; // Object composition, not inheritence
public:
    void push(string *str)
    {
        stack.push(str);
    }

    // Just peek, no pop
    string *peek()
    {
        return (string *)stack.peek();
    }
    string *pop()
    {
        return (string *)stack.pop();
    }
};