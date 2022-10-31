#include <iostream>
using namespace std;
class Student {
  private:
    int age;
  public:
    // constructor initializes age to 12
    Student() : age(12) {}
    void getAge() {
      cout << "Age = " << age << endl;
    }
    void setAge(int fixAge) {
        age = fixAge;
    }
    void getObjectAsRef(Student *objectref) {
        delete objectref;
    }
};
int main() {

  // declare Student object
    Student obj;

  // call getAge() function
  obj.getAge();
  
  //entry to commit sucide
  obj.getObjectAsRef(&obj);
  
  obj.setAge(13);
  obj.getAge();
  
  return 0;
}
