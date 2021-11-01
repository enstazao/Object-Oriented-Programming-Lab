#include <iostream>
using namespace std;

class Father
{
    public:
        Father();
        ~Father();
};

Father::Father()
{
    cout << "I am a Father Constructor " << endl;
}

Father::~Father()
{
    cout << "I am a Father Destructor" << endl;
}

class Mother
{
    public:
        Mother();
        ~Mother();
};

Mother::Mother()
{
    cout << "I am Mother Constructor" << endl;
}

Mother::~Mother()
{
    cout << "I am a Mother Destructor" << endl;
}

class StepMother
{
    public:
        StepMother();
        ~StepMother();
};

StepMother::StepMother()
{
    cout << "I am a Step Mother COnstructor" << endl;
}
StepMother::~StepMother()
{
    cout << "I am a Step Mother Destructor" << endl;
}

class Child : public Mother, public Father, public StepMother
{
    public:
        Child();
        ~Child();
};

Child::Child()
{
    cout << "I am a Child Constructor" << endl;
}

Child::~Child()
{
    cout << "I am a Child Destructor" << endl;
}

int main()
{
    Father f;
    Mother m;
    StepMother s;
    Child c;
    return 0;
}