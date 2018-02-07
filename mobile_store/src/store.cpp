#include "store.h"
#include <iostream>

void Store::add(Mobile &m) {
    inventory.push_back(m); 
}

bool compare(Mobile& left, Mobile& right) {
    return left.get_cost() < right.get_cost();
}

void Store::show_all() {
    cout << "All items in store\n"; 
    sort(inventory.begin(), inventory.end(), &compare);
    vector<Mobile>::iterator itr;
    for(itr = inventory.begin(); itr < inventory.end(); itr++) {
        itr->display();
    }
}
