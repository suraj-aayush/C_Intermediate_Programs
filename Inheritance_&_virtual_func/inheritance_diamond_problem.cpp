#include <iostream>
#include <string>
//#include 
using namespace std;

class student
{
    protected:
    int roll;
    string name;

    void getinfo()
    {
        cout<<"enter name and roll ";
        getline(cin,name);
        cin>>roll;
       
    }

};

class sports:virtual protected student
{
   // string name1=name;
   // int roll1=roll;

    protected:
    int sp1,sp2,sp3;
    void getstudents()
    {
        getinfo();
    }
    void getsports()
    {
        cout<<" \n enter 3 sports marks ";
        cin>>sp1>>sp2>>sp3;
    }
};

class academic : virtual protected student
{
    protected:
    int m1,m2,m3,m4,m5;

    void getacademic()
    {
        cout<<" \n enter 5 subjects marks ";
        cin>>m1>>m2>>m3>>m4>>m5;
    }
};

class result : protected sports, protected academic
{
    private:
    int total_marks;

    public:
    void total()
    {
        getstudents();
        getsports();
        getacademic();

        total_marks = m1+m2+m3+m4+m5+sp1+sp2+sp3;
    }

    void display()
    {
        cout<<"name is "<<name<<endl;
        cout<<"roll no is "<<roll<<endl;
        cout<<"total marks "<<total_marks;
    }
};


int main(){
    
result obj1;
obj1.total();
obj1.display();

return 0;
}