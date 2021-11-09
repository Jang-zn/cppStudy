#include<iostream>
#include<cstring>
using namespace std;

class Person{
private:
    int age;
    char name[50];
public:
    Person(int age, char* name):age(age){
        strcpy(this->name, name);
    }
    void whatYourName() const{
        cout<<"My name : "<<this->name<<endl;
    }
    void howOld() const{
        cout<<"i'm "<<this->age<<"years old"<<endl;
    }
};

class UnivStudent : public Person{
private:
    char major[50];
public:
    UnivStudent(char * name, int age, char* major)
    : Person(age, name)
    {
        strcpy(this->major, major);
    }
    void whoAreYou(){
        whatYourName();
        howOld();
        cout<<"major : "<<this->major<<endl;
    }
};

int main(){
    UnivStudent std1("KIM", 24, "Engineering");
    std1.whoAreYou();
    UnivStudent std2("LEE", 23, "Chemical");
    std2.whoAreYou();
    return 0;
}