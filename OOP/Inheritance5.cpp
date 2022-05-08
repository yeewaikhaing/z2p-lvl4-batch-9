#include<iostream>
using namespace std;
class Student {
    private: 
        int rno;
    public:
        void entroll() {
            cout<<"\nI have to enroll any subject";
        }
        void payTutionFees() {
            cout<<"\nI have to pay tution fees";
        }
};
class Instructor {
    private:
        int salary;
    public:
        void setSalary(int salary) {
            this->salary = salary;
        }
        void teach() {
            cout<<"\nI have to teach";
        }
        void viewSalary() {
            cout<<"\nI got "<<salary<<"ks";
        }
};
class TeachingAssistant : public Student, public Instructor {
    public:
        TeachingAssistant() {
            cout<<"I am a teaching assistant...\n";
        }
};
int main() {
    TeachingAssistant obj = TeachingAssistant();
    obj.entroll();
    obj.payTutionFees();
    obj.setSalary(1000000);
    obj.teach();
    obj.viewSalary();
}