#include <iostream>
using namespace std;

class Temp{
private :
    int num;
public :
    Temp(int n) : num(n){
        cout<<"Create New Object "<<this<<endl;
    }
    Temp(const Temp& copy) : num(copy.num){
        cout<<"Create Copy Object "<<this<<endl;
    }
    ~Temp(){
        cout<<"Delete Obj "<<this<<endl;
    }
};

Temp TempFuncObj(Temp t){
    cout<<"Parm ADR : "<<&t<<endl;
    return t;
}

int main(){
    Temp t(7);
    TempFuncObj(t);
    cout<<endl;
    Temp tempRef = TempFuncObj(t);
    cout<<"Return Obj : "<<&tempRef<<endl;
    return 0;

}