#ifndef INHERIT_INTRO_H
#define INHERIT_INTRO_H
class Base
{
    int i;

public:
    Base() { i = 0; }
    void set(int ii) { i = ii; }
    int read() const { return i; }
    int permute() { return i = i * 47; }
};
#endif // INHERIT_INTRO_H