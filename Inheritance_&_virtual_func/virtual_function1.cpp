#include <iostream>
#include <string>
using namespace std;

class base{
    public:
    virtual void show()
    {
        cout<<"base class printed \n";
    }
};

class derived :public base
{
    public:
    void show()
    {
        cout<<"derived class \n";
    }
};

int main(){
    derived obj, object;
    obj.show();
// we can call derived class function by it object and
// by making BASE pointer and assigning derived object and 
//..and calling using this pointer
    base *ptr;
    ptr=&object;
    ptr->show();

return 0;
}