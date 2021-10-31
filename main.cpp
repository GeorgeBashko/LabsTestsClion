#include <iostream>
using namespace std;
class Fraction {
private:
int chisl;
int znam;
public:
    Fraction(int ch,int zn): chisl(ch), znam(zn)
    {}
    void getfract()
    {
        cout<<"Enter chisl: ";
        cin>>chisl;
        cout<<"Enter znam:";
        cin>>znam;
        while(!znam) {
            cout << "Try again: ";
            cin >> znam;
        }

    }
    void show()
    {
        cout<<chisl<<'/'<<znam<<endl;
    }
    void umn(Fraction drob1,Fraction drob2)
    {
        cout<<"The product is: "<<(drob1.chisl*drob2.chisl)<<'/'<<(drob1.znam*drob2.znam)<<endl;
    }
    void sum(Fraction drob1,Fraction drob2)
    {
         cout<<"The sum is: "<<(drob1.chisl*drob2.znam+drob2.chisl*drob1.znam)<<'/'<<(drob1.znam*drob2.znam)<<endl;
    }
    void del(Fraction drob1,Fraction drob2)
    {
        cout<<"The product is: "<<(drob1.chisl*drob2.znam)<<'/'<<(drob1.znam*drob2.chisl)<<endl;
    }


};
int main() {
Fraction drob1(1,1);
Fraction drob2(drob1);
Fraction drob3(drob1);
drob1.getfract();
drob2.getfract();
drob2.show();
drob1.show();
drob3.umn(drob1,drob2);
drob3.sum(drob1,drob2);
drob3.del(drob1,drob2);
    return 0;
}
