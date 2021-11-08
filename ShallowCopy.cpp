#include <iostream>
#include <cstring>
using namespace std;

class Person{
private :
    char * name;
    int age;
public :
    Person(char * name, int age){
        int len = strlen(name);
        this->name = new char[len];
        strcpy(this->name, name);
        this->age=age;
    }
    void showPersonInfo(){
        cout<<"이름 : "<<this->name<<endl;
        cout<<"나이 : "<<this->age<<endl;
    }
    ~Person(){
    delete[] name;
    cout<<"called Destructor"<<endl;
}
};

int main (){
  Person man1("사람1", 30);
  Person man2(man1);
  man1.showPersonInfo();
  man2.showPersonInfo();
  return 0;
}