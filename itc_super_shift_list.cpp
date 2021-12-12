#include "easy_list.h"

void itc_super_shift_list(vector<int> &mass, int n){
    int buffer;
    long long counter = 0;
    vector<int> arr;
    n = n - (n / mass.size()) * mass.size();
    for(long long i = mass.size() - n; counter != mass.size(); i++){
        arr.push_back(mass[i - (i / mass.size()) * mass.size()]);
        counter++;
    }
    for(long long i = 0; i < mass.size(); i++){
        mass[i] = arr[i];
    }
}

