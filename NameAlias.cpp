#include <iostream>
using namespace std;
namespace A {
    namespace B {
        namespace C{
            int num1;
            int num2;
        }
    }
}



int main(){
    A::B::C::num1 = 20;
    A::B::C::num2 = 10;

    namespace abc = A::B::C;

    cout<<abc::num1<<endl;
    cout<<abc::num2<<endl;

    return 0;
}