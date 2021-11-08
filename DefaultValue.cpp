#include <iostream>

int boxVolume(int x, int y=1, int z=1);

int main(){
    std::cout<<"[3,3,3] : "<<boxVolume(3,3,3)<<std::endl;
    std::cout<<"[5,5,D] : "<<boxVolume(5,5)<<std::endl;
    std::cout<<"[7,D,D] : "<<boxVolume(7)<<std::endl;
//    std::cout<<"[D,D,D] : "<<boxVolume(3,3,3)<<std::endl;
}

int boxVolume(int x, int y, int z){
    return x*y*z;
}