#include <iostream>
#include "mobile_char.h"
#include <string.h>

using namespace std;

Mobile::Mobile(char *n, int c){
    int len = strlen(n);
    strncpy(name, n, len + 1);
}

void Mobile::display() {
    cout << name << " : " << cost << endl;
}
