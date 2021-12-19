#include "easy_list.h"

bool itc_same_parts_list(const vector<int> &mass){
    if(mass.size() == 0)
        return false;
    for(long long i = 0; i < mass.size() - 1; i++){
        if((mass[i] > 0 && mass[i + 1] > 0) || (mass[i] < 0 && mass[i + 1] < 0))
            return true;
    }
    return false;
}
