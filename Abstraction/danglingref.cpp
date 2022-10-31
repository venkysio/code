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

  // dynamically declare Student object
  Student* ptr = new Student();
  Student obj = *ptr;

  // call getAge() function
  obj.getAge();
  ptr->getAge();
  ptr->getObjectAsRef(&obj);
  obj.setAge(13);
  obj.getAge();
  ptr->setAge(13);
  ptr->getAge();

  // ptr memory is released
  delete ptr;

  return 0;
}
