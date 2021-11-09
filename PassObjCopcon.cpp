#include <iostream>
using namespace std;

class SoSimple{
private:
    int num;
public :
    SoSimple(int n):num(n) {
    }
    SoSimple(const SoSimple& copy) : num(copy.num){
    cout<<"Called CopyConstructor"<<endl;
    }
    void ShowData(){
        cout<<"num : "<<num<<endl;
    }
};

void SimpleFuncObj(SoSimple ob){
    ob.ShowData();
}
int main(){
    SoSimple obj(7);
    cout<<"함수 호출 전"<<endl;
    SimpleFuncObj(obj);//함수 매개변수로 객체가 넘어갈 경우 복사생성자 호출됨.
    cout<<"함수 호출 후"<<endl;
    return 0;
}