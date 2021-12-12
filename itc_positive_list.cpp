#include "easy_list.h"

int itc_positive_list(const vector<int> &mass){
    int positiveNumber = 0;
    for(long long i = 0; i < mass.size(); i++){
        if(mass[i] > 0)
            positiveNumber++;
    }
    return positiveNumber;
}
