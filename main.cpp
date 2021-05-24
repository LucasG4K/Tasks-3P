#include <iostream>
#include <ctime>
#define N 10
using namespace std;

void createRandom(int random[]) {
    srand(time(NULL));
    for (int i = 0; i < N; i++) random[i] = rand() % 100;
}

void MaxMin(int *data, int *max, int *min) {
    *max = data[0];
    *min = data[0];

    for (int i = 1; i < N; i++) {
        data[i] > *max ? *max = data[i] : NULL;
        data[i] < *min ? *min = data[i] : NULL;
    }
}

int main() {
    int max, min;
    int data[N];
    createRandom(data);

    MaxMin(data, &max, &min);

    cout << "Sequencia aleatoria: ";
    for (int i = 0; i < N; i++) cout << data[i] << "  ";

    cout << "\nValor max = " << max << endl;
    cout << "Valor min = " << min << endl;
    
    exit(0);
}