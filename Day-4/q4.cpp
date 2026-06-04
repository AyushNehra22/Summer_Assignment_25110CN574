#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    for (int num = 1; num <= n; num++) {
        int originalNum = num;
        int sum = 0;

        int digits = 0, temp = num;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
       
        while (temp > 0) {
            int lastdigit = temp % 10;

            int power = 1;
            for (int i = 0; i < digits; i++) {
                power *= lastdigit;
            }

            sum += power;
            temp /= 10;
        }

        if (sum == originalNum) {
            cout << originalNum << " ";
        }
    }

    return 0;
}
