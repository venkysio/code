class Shape {
    public:
        double length;
        double breadth;
        double height;   

        double calculateArea(){   
            return length * breadth;
        }

        double calculateVolume(){   
            return length * breadth * height;
        }

};

class emptyClass {
   // VSD data
   // VSD functions
};

class emptyClass {
  public:
    virtual void display()=0;
};