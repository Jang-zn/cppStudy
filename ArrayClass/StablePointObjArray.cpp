﻿#include <iostream>
#include <cstdlib>
using namespace std;

class Point
{
private :
    int xpos, ypos;
public :
    Point(int x=0,int y=0) : xpos(x),ypos(y){}
    friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos)
{
    os<<'['<<pos.xpos<<", "<<pos.ypos<<']'<<endl;
    return os;
}


class BoundaryCheckPointArray
{
private :
    Point * arr;
    int arrlen;

    BoundaryCheckPointArray(const BoundaryCheckPointArray& arr){}
    BoundaryCheckPointArray& operator=(const BoundaryCheckPointArray& arr){}
public :
    BoundaryCheckPointArray(int len) : arrlen(len){
        arr = new Point[len];
    }
    Point& operator[] (int idx){
        if(idx<0||idx>=arrlen){
            cout<<"Array Out of bounds Exception"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    Point operator[] (int idx) const{
        if(idx<0||idx>=arrlen){
            cout<<"Array Out of bounds Exception"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    int GetArrLen() const{ return arrlen;}
    ~BoundaryCheckPointArray(){delete[] arr;}
};

int main(){
    BoundaryCheckPointArray arr(3);
    arr[0] = Point(3,4);
    arr[1] = Point(5,6);
    arr[2] = Point(7,8);

    for(int i=0;i<arr.GetArrLen();i++){
        cout<<arr[i];
    }
    return 0;
}