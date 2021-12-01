#include "lib.h"
bool nprimo (int n, int a){
    if(n<0){
        return false;
    }else if (a==1){
        return true;

    }else if (n%a==0){
        return false;
    }
    nprimo (n, --a);
}
