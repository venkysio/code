namespace BasicCalc
{
    class Addition
    {
        public:
            void add(int a, int b);
    };
}
namespace AdvCalc
{
    class Addition
    {
        public:
        void add(int a, int b, int c);

    };
}
using namespace BasicCalc;
int main()
{
    BasicCalc::Addition basicObj;
    AdvCalc::Addition advObj;

    Addition basicObj1;


    return 0;
}