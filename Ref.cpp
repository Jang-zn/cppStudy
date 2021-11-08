#include "iostream"
using namespace std;

int main(){
    int num1 = 2021;
    int &num2 = num1;
    num2 = 3047;

    cout<<"value : "<<num1<<endl;
    cout<<"ref : "<<num2<<endl;

    cout<<"value : "<<&num1<<endl;
    cout<<"ref : "<<&num2<<endl;


    return 0;
}