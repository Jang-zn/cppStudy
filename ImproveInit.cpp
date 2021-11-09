#include <iostream>
using namespace std;


class aaa{
private :
    int num;
public :
    aaa(int n=0) : num(n){
    cout<<"aaa(int n=0) constructor"<<endl;
}
    aaa(const aaa& ref) : num(ref.num){
        cout<<"aaa(const aaa& ref) constructor"<<endl;
}
    aaa& operator=(const aaa& ref){
        num = ref.num;
        cout<<"operator=(const aaa& ref)"<<endl;
        return *this;
}
};

class bbb{
private :
    aaa mem;
public :
    bbb(const aaa& ref) : mem(ref){}
};

class ccc {
private :
    aaa mem;
public :
    ccc(const aaa& ref){
    mem = ref;
}
};

int main(){
    aaa obj1(12);
    cout<<"------------------------"<<endl;
    bbb obj2(obj1);
    cout<<"------------------------"<<endl;
    ccc obj3(obj1);
    cout<<"------------------------"<<endl;
    return 0;
}