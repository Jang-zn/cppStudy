#include "iostream"
using namespace std;

class sinivelCap {
public :
    void take() const {
        cout << "콧물 삭제" << endl;
    }
};

class sneezeCap{
    public :
        void take() const{
        cout<<"재채기 삭제"<<endl;
    }
};

class snuffleCap{
public :
    void take() const{
    cout<<"코막힘 삭제"<<endl;
}
};

class CONTAC600{
    private :
        sinivelCap sin;
        snuffleCap snu;
        sneezeCap sne;
    public :
        void takeContac() const{
            sin.take();
            snu.take();
            sne.take();
        }
};

class ColdPatient{
public:
    void takePill(const CONTAC600 cont) const{
        cont.takeContac();
    }
};

int main(){
    CONTAC600 cap;
    ColdPatient cold;
    cold.takePill(cap);
    return 0;
}