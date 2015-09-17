#include <iostream>
#include <vector>

class Range() {
    int count;
    vector<int> data;

    void fill_data(int n) {
        for (int i = 1; i<n; i++) {
            data.push_back(i);
        }
    }

    public :
        Range(int n) {
            count = n;
            fill_data(count);
        }

        ~Range() {
            // TODO : implement this
        }

        tab_print() {
            int mid = data.size()/2;
            vector<int>::iterator iter = data.begin();
            while (iter != data.end()) {
                cout << *iter;
                cout << " ";
                cout << *(iter + mid) << endl;

                ++iter;
            }

            if (data.size() % 2 > 0) {
                cout << " " << *iter << endl;
            }
            
        }
};

int main() {
    int max;

    cout << "What is the number of seats in your bus? ";
    cin >> max;

    Range seats(max);
    seats.tab_print();
}
