#include "easy_list.h"

int itc_sl_list(const vector<int> &mass){
    if(mass.size() == 0)
        return 0;
    int counter = 0;
    for(long long i = 0; i < mass.size() - 1; i++){
        if(mass[i + 1] > mass[i])
            counter++;
    }
    return counter;
}
