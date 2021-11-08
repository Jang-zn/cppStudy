#include "iostream"
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car{
    char gamerID[ID_LEN];
    int fuelGauge;
    int currSpeed;

    void showCarState(){
        cout<<"ID : "<<gamerID<<endl;
        cout<<"연료량 : "<<fuelGauge<<"%"<<endl;
        cout<<"현재속도 : "<<currSpeed<<"km/h"<<endl;
    }

    void acc(){
        cout<<"Accel"<<endl;
        if(fuelGauge<=0){
            return;
        }else{
            fuelGauge-=FUEL_STEP;
        }

        if(currSpeed+ACC_STEP>=MAX_SPD){
            currSpeed=MAX_SPD;
            return;
        }
        currSpeed+=ACC_STEP;
    }

    void brk(){
        cout<<"Break"<<endl;
        if(currSpeed<BRK_STEP){
            currSpeed=0;
            return;
        }
        currSpeed-=BRK_STEP;
    }
};



int main(){
    Car run99 = {"run99", 100, 0};
    while(run99.currSpeed<=50){
        run99.acc();
    }
    run99.showCarState();
    Car spd77 = {"spd77", 100, 0};
    spd77.acc();
    spd77.acc();
    spd77.acc();
    spd77.brk();
    spd77.showCarState();
    return 0;
}
