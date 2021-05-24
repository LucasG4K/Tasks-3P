#include <iostream>
#define N 10
using namespace std;

void MaxMin(int *data, int *max, int *min) {
    int temp;
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            if (data[i] > data[j]) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    *max = data[N - 1];
    *min = data[0];
}

int main() {
    int max, min, data[N] = {0,9,8,7,6,5,4,3,2,1};

    MaxMin(data, &max, &min);

    cout << "Valor max = " << max << endl;
    cout << "Valor min = " << min << endl;
    
    exit(0);
}