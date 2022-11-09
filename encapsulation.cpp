//: C13:Encapsule.cpp {O}
// Pointer Stash definitions
#include "Encapsulation.h"
#include "require.h"
#include <iostream>
#include <cstring> // 'mem' functions

using namespace std;
int Encapsule::add(void *element)
{
    const int inflateSize = 10;
    if (next >= quantity)
        inflate(inflateSize);
    storage[next++] = element;
    return (next - 1); // Index number
}
// No ownership:
Encapsule::~Encapsule()
{
    for (int i = 0; i < next; i++)
        require(storage[i] == 0,
                "Encapsule not cleaned up");
    delete[] storage;
}
// Operator overloading replacement for fetch
void *Encapsule::operator[](int index) const
{
    require(index >= 0,
            "Encapsule::operator[] index negative");
    if (index >= next)
        return 0; // To indicate the end
    // Produce pointer to desired element:
    return storage[index];
}
void *Encapsule::remove(int index)
{
    void *v = operator[](index);
    // "Remove" the pointer:
    if (v != 0)
        storage[index] = 0;
    return v;
}
void Encapsule::inflate(int increase)
{
    const int psz = sizeof(void *);
    void **st = new void *[quantity + increase];
    memset(st, 0, (quantity + increase) * psz);
    memcpy(st, storage, quantity * psz);
    quantity += increase;
    delete[] storage; // Old storage
    storage = st;     // Point to new memory
} ///:~
