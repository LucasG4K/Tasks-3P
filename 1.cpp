#include <iostream>
#include <ctime>
#define TOTAL 10
using namespace std;

void createRandom(int random[]) {
    srand(time(NULL));
    for (int i = 0; i < TOTAL; i++) random[i] = rand() % 100;
}

void MaxMin(int *data, int *max, int *min) {
    *max = data[0];
    *min = data[0];

    for (int i = 1; i < TOTAL; i++) {
        data[i] > *max ? *max = data[i] : NULL;
        data[i] < *min ? *min = data[i] : NULL;
    }
}

int main() {
    int max, min;
    int random[TOTAL];
    createRandom(random);

    MaxMin(random, &max, &min);

    cout << "Sequencia: ";
    for (int i = 0; i < TOTAL; i++) cout << random[i] << "  ";

    cout << "\nValor max = " << max << endl;
    cout << "Valor min = " << min << endl;
    
    exit(0);
}