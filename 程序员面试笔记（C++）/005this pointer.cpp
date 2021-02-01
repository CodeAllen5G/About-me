#include <iostream>

using namespace std;

class Student
{
private:
    int age;
public:
    void setAge(int age) {
        this->age = age;
    }
    int getAge() {
        return age;
    }
};

int main() {
    Student stud = Student();   //这里会将stud的地址隐式作为函数第一个参数
    stud.setAge(20);            //stud.setAge(&stud, 20);   setAge(int age) => setAge(Student *this, int age);
    cout << stud.getAge() << endl;
}