#include <iostream>
using namespace std;

class Simple {
private:
    int num;
public:
    Simple(int n) : num(n) {

    }

    Simple &AddNum(int n) {
        num += n;
        return *this;
    }

    void ShowData() const {
        cout << "num : " << num << endl;
    }
};
int main (){
    const Simple obj(8); //const 객체 생성
    //obj.AddNum(5); //const 선언되지 않은 멤버함수라 호출 불가
    obj.ShowData();
    return 0;
}