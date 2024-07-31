#include <iostream>
using namespace std;

class Animal {
    public:

    int age;
    string type;

    void eat() {
        cout << "Eating food" << endl;
    }

    void sleep() {
        cout << "Sleeping" << endl;
    }
};

int main() {

    Animal dog;

    dog.age = 5;
    dog.type = "Lebra";

    cout << "Age if Dog is: " << dog.age << endl;
    cout << "Type if Dog is: " << dog.type << endl;

    dog.eat();
    dog.sleep();


    
    return 0;
}