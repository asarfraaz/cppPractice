#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    int a = 10;
    char ch = 'a';

    int *iptr = &a;
    char *cptr = &ch;

    int array[10];
    int b;
    char name[10];

    cout << "a : " << sizeof(a) << endl;
    cout << "ch : " << sizeof(ch) << endl;
    cout << "iptr : " << sizeof(iptr) << endl;
    cout << "cptr : " << sizeof(cptr) << endl;
    cout << "array : " << sizeof(array) << endl;
    cout << "name : " << sizeof(name) << endl;

    cout << "addr of a " << &a << endl;
    //cout << "addr of ch " << int(ch) << endl;
    printf("addr of ch : %p\n", &ch);
    cout << "addr of iptr " << &iptr << endl;
    cout << "addr of cptr " << &cptr << endl;
    cout << "addr of array " << array << endl;
    cout << "addr of b " << &b << endl;
    //cout << "addr of name " << name << endl;
    printf("addr of name : %p\n", &name);
    return 0;
}
