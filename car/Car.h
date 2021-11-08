#ifndef CPPSTUDY_CAR_H
#define CPPSTUDY_CAR_H

namespace CAR_CONST{
    enum{
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

class Car{

    private:
        char gamerID[CAR_CONST::ID_LEN];
        int fuelGauge;
        int currSpeed;
    public:
        void showCarState();
        void acc();
        void brk();

    void initMembers(char *Id, int fuel);
};

#endif //CPPSTUDY_CAR_H
