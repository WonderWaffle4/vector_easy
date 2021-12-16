#include "easy_list.h"

void itc_rev_list(vector<int> &mass){
    if(mass.size() == 0)
        return;
    int buffer;
    for(long long i = 0; i < (mass.size() / 2 + mass.size() % 2); i++){
        buffer = mass[mass.size() - i - 1];
        mass[mass.size() - i - 1] = mass[i];
        mass[i] = buffer;
    }
}
