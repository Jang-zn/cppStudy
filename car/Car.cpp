#include "iostream"
#include "cstring"
#include "Car.h"
using namespace std;
using namespace CAR_CONST;

void Car::initMembers(char* Id, int fuel){
    strcpy(gamerID, Id);
    fuelGauge=fuel;
    currSpeed=0;
}

void Car::showCarState(){
    cout<<"ID : "<<gamerID<<endl;
    cout<<"연료량 : "<<fuelGauge<<"%"<<endl;
    cout<<"현재속도 : "<<currSpeed<<"km/h"<<endl;
}

void Car::acc(){
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

void Car::brk(){
    cout<<"Break"<<endl;
    if(currSpeed<BRK_STEP){
        currSpeed=0;
        return;
    }
    currSpeed-=BRK_STEP;
}
