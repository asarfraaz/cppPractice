#include <string>

using namespace std;

class Mobile {
    string name;
    int cost;

    public:
        Mobile(string n, int c):name(n), cost(c) {}
        ~Mobile() {}

        void display();
        int get_cost() { return cost; }
};
