#include<iostream>
using namespace std;
class Person {
    protected:
        string name;
        string nrcno;
    public: //"Cherry","5/mayana(n)123456"
        void initData(string name, string nrc) {
            this->name = name;
            this->nrcno = nrc;
        }
        void showData() {
            cout<<"\nName - "<<name;
            cout<<"\nNrcno - "<<nrcno;
        }
};
class Student : public Person {
    
    private:
        int rno;
    public: //1,"Aung Aung", "12/sakhana(n)123456"
        Student(int rno, string name, string nrcno) {
            this->rno = rno;
            initData(name, nrcno);
        }
        void showData() { // method overriding 
            Person::showData();
            cout<<"\nRno - "<<rno;
        }
        void attend() {
            cout<<"\nHello, I am attending 5th year";
        }
        
};
class Programmer : public Person {
    private:
        string skillset;
    public:
        void setSkillset(string skills) {//skill = "Js, Python, C++"
            this->skillset = skills;
        }
        void viewSkillset() {
            cout<<"Hello, I am a programmer.I am skillful in these languages - \n";
            cout<<skillset;
        }
};
int main() {
    Student obj1 = Student(1,"Aung Aung", "12/sakhana(n)123456");
    cout<<"\n------- Student Info ------\n";
    obj1.attend();
    obj1.showData();

    cout<<"\n------ Programmer Info -------\n";
    Programmer obj2 = Programmer();
    obj2.initData("Cherry","5/mayana(n)123456");
    obj2.setSkillset("Js, Python, C++");
    obj2.viewSkillset();
    obj2.showData();

}