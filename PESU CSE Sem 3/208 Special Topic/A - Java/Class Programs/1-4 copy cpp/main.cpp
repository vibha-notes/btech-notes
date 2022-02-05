#include <iostream>
using namespace std;

class test {
    public:
    int x;
};

int main() {

    test a1;
    a1.x = 3;

    test a2 = a1;

    cout << a1.x << " " << a2.x << endl;

    a1.x = 5;
    cout << a1.x << " " << a2.x << endl;

    return 0;
}