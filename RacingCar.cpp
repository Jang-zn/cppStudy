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
};

void showCarState(const Car &car){
    cout<<"ID : "<<car.gamerID<<endl;
    cout<<"연료량 : "<<car.fuelGauge<<"%"<<endl;
    cout<<"현재속도 : "<<car.currSpeed<<"km/h"<<endl;
}

void acc(Car &car){
    cout<<"Accel"<<endl;
    if(car.fuelGauge<=0){
        return;
    }else{
        car.fuelGauge-=FUEL_STEP;
    }

    if(car.currSpeed+ACC_STEP>=MAX_SPD){
        car.currSpeed=MAX_SPD;
        return;
    }
        car.currSpeed+=ACC_STEP;
}

void brk(Car &car){
    cout<<"Break"<<endl;
    if(car.currSpeed<BRK_STEP){
        car.currSpeed=0;
        return;
    }
    car.currSpeed-=BRK_STEP;
}

int main(){
    Car run99 = {"run99", 100, 0};
    acc(run99);
    acc(run99);
    showCarState(run99);
    brk(run99);
    showCarState(run99);

    Car spd77 = {"spd77", 100, 0};
    acc(spd77);
    brk(spd77);
    showCarState(spd77);
    return 0;
}
