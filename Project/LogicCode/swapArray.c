#include "swapArray.h"

void SwapArrayAndIncreaseNewMemberGeneric(lv_coord_t *newarray, lv_coord_t *oldarray, float newmember, int arraylen){
    for(int i = 0; i < arraylen; i++){
        newarray[i] = oldarray[i + 1];
    }
    oldarray[arraylen] = newmember;
}

void SwapArray(lv_coord_t *destarray, lv_coord_t *oldarray, int arraylen){
    for(int i = 0; i < arraylen; i++){
        destarray[i] = oldarray[i];
    }
}