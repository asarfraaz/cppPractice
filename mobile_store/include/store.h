#include "mobile.h"
#include <vector>

class Store {
    vector<Mobile> inventory;

    public:
        void add(Mobile &m);
        void show_all();
};
