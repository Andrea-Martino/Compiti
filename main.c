#include "lib.h"
int main() {
    srand(time(NULL));
    Porto portoNA;
    situazione_porto(portoNA);
    inizializzazione_navi(portoNA);
    verifica_posto(portoNA);
}