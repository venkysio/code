// VSD Stack.h

#ifndef ENCAPS_STACK_H
#define ENCAPS_STACK_H

class Stack {
  struct Link {
    void* data;
    Link* next;
    void initialize(void* dat, Link* nxt);
  }* head;
public:
  void initialize();
  void push(void* dat);
  void* peek();
  void* pop();
  void cleanup();
};
#endif // ENCAPS_STACK_H
