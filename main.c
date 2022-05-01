#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "backToFutureUtils.h"

DeLorean* delorean__;
FluxCapacitor** capacitors__;

void* assembleDelorean(void* indices_){
  IndexContainer *index = (IndexContainer*)indices_;
  unsigned int valueSum = 0;
  for (int i = 0; i < index->array_length ; ++i) {
      unsigned int j = index->cap_indices[i];
      printf("Capacitor-Element Nr. %d : Value %d : String %s\n", j, capacitors__[j]->value, capacitors__[j]->c_string );
      valueSum += capacitors__[j]->value;
  }
  delorean__->current_power_level_in_mega_watts += valueSum;
  return NULL;
}



int main() {

    delorean__ = (DeLorean*)malloc(sizeof(DeLorean));
    capacitors__ = createFluxCapacitorArrayInitValue(121, 10);
    IndexContainer *indexContainer_21 = createIndexContainer(21);
    IndexContainer *indexContainer_100 = createIndexContainer(100);

    //assembleDelorean(indexContainer_21);
    //assembleDelorean(indexContainer_100);

    pthread_t thread1, thread2;
    int id1, id2;

    id1 = pthread_create(&thread1, NULL, &assembleDelorean, NULL);
    printf("Thread-ID = &d", id1);















    return 0;
}
