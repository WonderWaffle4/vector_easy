#include "easy_list.h"

void itc_rev_par_list(vector<int> &mass){
    int buffer;
    for(long long i = 0; i < mass.size() - 1; i += 2){
        buffer = mass[i + 1];
        mass[i + 1] = mass[i];
        mass[i] = buffer;
    }
}
