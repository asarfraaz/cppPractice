#include "store.h"

int main() {

    Store ayra;

    Mobile apple1 = Mobile("iPhone 6", 600);
    apple1.display();
    ayra.add(apple1);

    Mobile apple2 = Mobile("iPhone X", 1000);
    apple2.display();
    ayra.add(apple2);

    Mobile samsung1 = Mobile("Samsung 7", 400);
    samsung1.display();
    ayra.add(samsung1);

    Mobile samsung2 = Mobile("Samsung 8", 500);
    samsung2.display();
    ayra.add(samsung2);

    ayra.show_all();

    return 0;
}
