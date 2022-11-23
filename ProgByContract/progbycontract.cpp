// VSD Encapsulation Demo
#include "progbycontract.h"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void Stack::Link::initialize(void *dat, Link *nxt)
{
    data = dat;
    next = nxt;
}

void Stack::initialize() { head = 0; }

void Stack::push(void *dat)
{
    Link *newLink = new Link;
    newLink->initialize(dat, head);
    head = newLink;
}

void *Stack::peek()
{
    if (head != 0)
        return head->data;
    else
    std:
        cout << "Stack is empty";
}

void *Stack::pop()
{
    if (head == 0)
        return 0;
    void *result = head->data;
    Link *oldHead = head;
    head = head->next;
    // delete oldHead;
    return result;
}

void Stack::cleanup()
{
    if (head != 0)
     std::cout<< "Stack not empty";
}

