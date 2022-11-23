class returnbyreference
{
private:
   int* elem; // elem points to an array of sz
 
public:
int& operator[](int i) ;
};
