#include "Car.h"
using namespace std;

int main(){
    Car run99;
    run99.initMembers("run99", 100);
    run99.acc();
    run99.acc();
    run99.acc();
    run99.acc();
    run99.showCarState();
    Car spd77;
    spd77.initMembers("spd77", 100);
    spd77.acc();
    spd77.acc();
    spd77.acc();
    spd77.brk();
    spd77.showCarState();
    return 0;
}