#include <iostream>
#include <cstring>
using namespace std;

class Person{
private :
    char * name;
    int age;
public :
    Person(char* name, int age)
    {
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
        this->age = age;
    }
    void showPersonInfo()
    {
        cout<<"이름 : "<<this->name<<endl;
        cout<<"나이 : "<<this->age<<endl;
    }
    Person& operator=(const Person& copy) {
        delete[] name;//자원해제, 메모리누수 방지
        this->name = new char[strlen(copy.name)+1];
        strcpy(this->name, copy.name);
        this->age = copy.age;
        return *this;
    }
    ~Person(){
    delete[] name;
    cout<<"called destructor - "<<this<<endl;
}
};

int main (){
    Person man1("Lee", 30);
    Person man2("Kim", 27);
    man2.showPersonInfo();
    man2=man1;
    man1.showPersonInfo();
    man2.showPersonInfo();
    return 0;
}