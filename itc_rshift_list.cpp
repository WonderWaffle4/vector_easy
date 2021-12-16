#include "easy_list.h"

void itc_rshift_list(vector<int> &mass){
    if(mass.size() == 0)
        return;
    itc_super_shift_list(mass, 1);
}
