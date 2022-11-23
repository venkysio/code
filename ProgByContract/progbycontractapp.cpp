#include "StackofStrings.h"
#include "StackofIntegers.h"

#include <iostream>
#include <string.h>
#include <fstream>


using namespace std;

int main() {
  ifstream in("simple.txt");
  string line;
  StackofStrings textlines;
  StackofIntegers integers;
  
  //push to the stack
  while(getline(in, line))
    textlines.push(new string(line));
  
  string* s;

  //pop from the stack
  while((s = textlines.pop()) != 0) 
    cout << *s << endl;

  return 0;
}