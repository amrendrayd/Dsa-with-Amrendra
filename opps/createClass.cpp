#include <iostream>
using namespace std;

class Animal {
    private:
    int weight;

    public:

    int age;
    string type;

    void eat() {
        cout << "Eating food" << endl;
    }

    void sleep() {
        cout << "Sleeping" << endl;
    }

    int getWeight() {
        return weight;
    }

    void setWeight(int w) {
        weight = w;
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

    dog.setWeight(15);
    cout << dog.getWeight() << endl;



    
    return 0;
}