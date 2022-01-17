#include <iostream>
#include <queue>

using namespace std;

int counting(int a) {
    while (a % 2 == 0) {
        a = a / 2;
    }
    while (a % 3 == 0) {
        a = a / 3;
    }
    while (a % 5 == 0) {
        a = a / 5;
    }
    return a;
}

int main() {

    queue <int> q;
    int n;
    int num = 2;
    int x = 0;

    cout << "Input number of numbers: "; cin >> n;
    while (x < n) {
        if (counting(num) == 1) {
            q.push(num);
            x++;
        }
        num++;
    }

    for (int i = 0; i < n; i++) {
        cout << q.front() << ' ';
        q.pop();
    }

}