#include <iostream>
using namespace std;

class Temp{
private :
    int num;
public :
    Temp(int n) : num(n){
    cout<<"Create Object"<<endl;
}
    ~Temp(){
    cout<<"Delete Obj"<<endl;
}
    void showTempInfo(){
    cout<<"num : "<<num<<endl;
}
};

int main(){
    Temp(100);//생성되자마자 바로 삭제
    cout<<"-----after create-----"<<endl<<endl;
    Temp(200).showTempInfo();//생성되고 showTempInfo 실행후 삭제
    cout<<"-----after create-----"<<endl<<endl;
    const Temp &ref = Temp(300);//생성되고
    cout<<"-----after create-----"<<endl<<endl;
    return 0;//return 으로 main함수 종료시 삭제.
}