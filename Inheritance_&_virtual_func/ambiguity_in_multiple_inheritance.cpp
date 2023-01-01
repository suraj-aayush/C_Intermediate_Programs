#include <iostream>
#include <string>
using namespace std;

class base1
{
    public:
    void show()
    {
        cout<<"base 1 \n";
    }
};

class base2
{
    public:
    void show()
    {
        cout<<"base 2 \n ";
    }
};

class derived : public base1, public base2
{
    public:
    void show()
    {
        cout<<"derived 1 \n";

        cout<<"base 1 calling now --> \n";
        base1::show();
    }
};

int main(){
    
    derived ob1;
    ob1.show();

    ob1.base2::show();


return 0;
}