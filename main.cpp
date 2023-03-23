#include <iostream> //   b napisz program w c++ wykorzystujący funkcje break jesli i=0, i < 10, i++ pętla ma się zatrzymać na liczbie 4
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << "\n";
    }
    return 0;
}
