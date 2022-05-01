#include <stdio.h>
#include <stdlib.h>
#include "backToFutureUtils.h"

DeLorean* delorean__;
FluxCapacitor** capacitors__;

void* assembleDelorean(void* indices_){
  IndexContainer *index = (IndexContainer*)indices_;
  int valueSum = 0;
    for (int i = 0; i < index->array_length ; ++i) {
        int j = index->cap_indices[i];
        printf("Capacitor-Element Nr. %d : Value %d : String %s\n", j, capacitors__[j]->value, capacitors__[j]->c_string );
        valueSum += capacitors__[j]->value;
    }
    delorean__->current_power_level_in_mega_watts = valueSum;
}



int main() {

    delorean__ = (DeLorean*)malloc(sizeof(DeLorean));
    capacitors__ = createFluxCapacitorArrayInitValue(121, 10);
    IndexContainer *indexContainer_21 = createIndexContainer(21);
    IndexContainer *indexContainer_120 = createIndexContainer(120);
    assembleDelorean(indexContainer_21);
    //assembleDelorean(indexContainer_120);
    //printf("\n\n\nSUM: %d", delorean__->current_power_level_in_mega_watts);













    return 0;
}
