#include <iostream>

inline int sqr(int x){
    return x*x;
}

int main(){
    std::cout<<sqr(5)<<std::endl;
    std::cout<<sqr(12)<<std::endl;
    return 0;
}
