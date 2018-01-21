#include <stdio.h>
#include <iostream>

#define MAX 5

using namespace std;

int scores[MAX] = { 10, 20, 30, 40};
int runs[] = {11, 22, 33, 44};

void find_sum3(int *inp, int asize){
    //int *pptr = inp;
    int *pptr;

    pptr = inp;

    printf("  inp : %p\n", inp);
    printf("  *inp : %d\n", *inp);
    printf("  *(inp + 0) : %d\n", *(inp + 0));

    printf("  inp + 1 : %p\n", inp + 1);
    printf("  *(inp + 1) : %d\n", *(inp + 1));

    int i = 0, total = 0;
    for(i = 0; i<asize; i++) {
        total += inp[i];
        printf("  inp[%d] : %p : val : %d\n", i, &inp[i], inp[i]);
    }
    cout << "sum3 is : " << total << endl;

    printf("  pptr : %p\n", pptr);
    pptr++;
    printf("  pptr : %p\n", pptr);
    pptr++;
    printf("  pptr : %p\n", pptr);

    pptr = inp;
    int tt = 0;
    int idx = 0;
    while (idx < asize) {
        tt = tt + *(pptr + idx);
        idx++;
    }

    cout << "tt sum3 is : " << tt << endl;


    // quiz
    pptr = inp;
    tt = 0;
    idx = 0;
    while (idx < asize) {
        tt += *pptr++;
        idx++;
        //pptr++;
    }

    cout << "new tt sum3 is : " << tt << endl;

    // quiz
    int num = 0;
    cout << "quiz" << endl;
    cout << num << endl;
    cout << num++ << endl;
    cout << num++ << endl;
    cout << ++num << endl;

    pptr = inp;
    tt = 0;
    idx = 0;
    while (idx < asize) {
        tt += (*pptr)++;
        cout << " tt : " << tt << " *pptr "<< *pptr << endl;
        idx++;
        //pptr++;
    }

    cout << "new tt sum3 is : " << tt << endl;

    cout << "final array\n";
    for(idx = 0; idx < asize; idx++) {
        cout << pptr[idx] << endl;
    }

}

void find_sum2(int inp[], int asize){
    int i = 0, total = 0;
    for(i = 0; i<asize; i++) {
        total += inp[i];
    }
    cout << "sum2 is : " << total << endl;
}

void find_sum(int inp[]){
    printf("  inp : %p\n", inp);
    cout << "size of inp " << sizeof(inp) << endl;
    int i = 0, total = 0;
    for(i = 0; i<MAX; i++) {
        total += inp[i];
    }
    cout << "sum is : " << total << endl;
}

int main() {

    int nruns = sizeof(runs)/sizeof(int);

    int *p = scores;
    printf("p : addr of scores : %p\n", p);

    cout << "size of scores : " << sizeof(scores) << endl;

    printf("scores : %p\n", scores);
    printf("runs : %p\n", runs);
    find_sum(scores);
    find_sum2(scores, MAX);
    find_sum2(runs, nruns);
    find_sum3(runs, nruns);
    return 0;
}
