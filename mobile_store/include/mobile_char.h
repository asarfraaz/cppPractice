//#include <string>

using namespace std;

class Mobile {
    char name[20];
    int cost;

    public:
        //Mobile(string n, int c):name(n), cost(c) {}
        Mobile(char *n, int c);
        ~Mobile() {}

        void display();
        int get_cost() { return cost; }
};
