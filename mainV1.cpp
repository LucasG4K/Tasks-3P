#include <iostream>
#include <ctime>
#define N 10
using namespace std;

void createRandom(int random[]) {
    srand(time(NULL));
    for (int i = 0; i < N; i++) random[i] = rand() % 100;
}

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