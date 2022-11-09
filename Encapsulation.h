//Encapsulation.h
// Access control demo
#ifndef ENCAPSULATION_H
#define ENCAPSULATION_H
class Encapsule
{
    int size;     // Size of each space
    int quantity; // Number of storage spaces
    int next;     // Next empty space
    // Dynamically allocated array of bytes:
    unsigned char *storage;
    void inflate(int increase);

public:
    void initialize(int size);
    void cleanup();
    int add(void *element);
    void *fetch(int index);
    int count();
};
#endif // ENCAPSULATION_H ///: