#include <iostream>
using namespace std;

template <class T>
T add(T num1, T num2){
    return num1+num2;
}

int main(){
    cout<<add<int>(1,5)<<endl;
    cout<<add<double>(2.9,6.8)<<endl;
    cout<<add<int>(3.2,3.2)<<endl;
    return 0;
}