#include <iostream>
using namespace std;

class Student {
  private:
    int age;

  public:

    // constructor initializes age to 12
    Student() : age(12) {}
    void getAge()
      {
        cout<<"Age is:"<<age<<std::endl;
      }
      void setAge(int newAge)
      {
        age = newAge;
      }
    void getObjectAsRef(Student *objectref) {
        delete objectref;
    }
};

int main() {
  Student obj;  // call getAge() functionii  obj.getAge();
  Student *ptr = new Student();
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
