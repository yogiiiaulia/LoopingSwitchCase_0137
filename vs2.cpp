#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //perulangan while
    int x;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    srand(time(0));
    x = rand() % 10;
    cout << "Perulangan While " << endl;
    cout << "Nilai x awal = " << x << endl;

    while (x < 7) {
        cout << "Nilai X = " << x << " Lari Keliling " << endl;
        x = rand() % 10;
        perulanganWhile++;
    }

    cout << "Nilai x Terakhir = " << x << endl;
    cout << "Jumlah Perulangan = " << perulanganWhile << endl;

    //perulangan Do While
    cout << endl;
    cout << "perulangan Do While " << endl;
    do{
        cout << "Nilai x = " << x << " Lari Keliling " << endl;
        x = rand () % 10;
        perulanganDo++;
    }while (x < 7);
    cout << "Nilai x Terakhir : " << x << endl;
    cout << "Jumlah Perulangan Do While : " << perulanganDo << endl;
}