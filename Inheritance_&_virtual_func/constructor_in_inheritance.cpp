#include <iostream>
#include <string>
//#include 

using namespace std;

class base1
{
    int x;
    public:

    base1(int a)
    {
        x=a;
    }

    void show()
    {
        cout<<"value of x is "<<x<<endl;
    }
};

class base2
{
    int y;
    public:
    base2(int b)
    {
        y=b;
    }
    void show2()
    {
        cout<<"value of y is "<<y<<endl;
    }
};

class deriveds:public base1, public base2
{
    float q,w;
    public:
    deriveds(int i, int j, float g, float h):
    base1(i),base2(j)
    {
        q=g;
        w=h;
    }

    void show3()
    {
        cout<<"vlaue of q and w is -->> "<<q<<" "<<w<<endl;
    }
};

int main(){
    deriveds obj(3,7,2.5,4.5);
    obj.show3();
    obj.show2();
    obj.show();

return 0;
}