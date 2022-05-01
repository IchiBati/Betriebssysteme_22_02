//
// Created by sven on 01.05.22.
//

#include "backToFutureUtils.h"
#include <stdlib.h>

FluxCapacitor* createFluxCapacitorRand(){

    FluxCapacitor* fluxCapacitor = (FluxCapacitor*)malloc(sizeof(FluxCapacitor));
    fluxCapacitor->value = rand();

    const char allowed_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    const size_t length = ( rand() % (27) + 1);

    fluxCapacitor->c_string = calloc(length + 1, sizeof(char));

    for (int i = 0; i < length ; ++i) {

        fluxCapacitor->c_string[i] = allowed_chars[rand() % 52];

    }

    fluxCapacitor->c_string[length + 1] = '\0';

    return fluxCapacitor;
}

FluxCapacitor* createFluxCapacitorInitValue(int value){

    FluxCapacitor* fluxCapacitor = (FluxCapacitor*)malloc(sizeof(FluxCapacitor));
    fluxCapacitor->value = value;

    const char allowed_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    const size_t length = ( rand() % (27) + 1);

    fluxCapacitor->c_string = calloc(length + 1, sizeof(char));

    for (int i = 0; i < length ; ++i) {

        fluxCapacitor->c_string[i] = allowed_chars[rand() % 52];

    }

    fluxCapacitor->c_string[length + 1] = '\0';

    return fluxCapacitor;
}

FluxCapacitor** createFluxCapacitorArray(unsigned int n){

    FluxCapacitor** capacitatorArr = (FluxCapacitor**) calloc(n, sizeof(FluxCapacitor));

    for (int i = 0; i < n ; ++i) {

        capacitatorArr[i] = createFluxCapacitorRand();

    }
    return capacitatorArr;
}

FluxCapacitor** createFluxCapacitorArrayInitValue(unsigned int n, int value){

    FluxCapacitor** capacitatorArr = (FluxCapacitor**) calloc(n, sizeof(FluxCapacitor));

    for (int i = 0; i < n ; ++i) {

        capacitatorArr[i] = createFluxCapacitorInitValue(value);

    }
    return capacitatorArr;
}

IndexContainer* createIndexContainer(int length){
    IndexContainer *indexContainer = malloc(sizeof(IndexContainer));
    indexContainer->array_length = length;

    int* cap_indices = calloc(length, sizeof(int));
    for (int i = 0; i < length ; ++i) {
        cap_indices[i] = length == 21 ? i : 21 + i;

    }
    indexContainer->cap_indices = cap_indices;
    return indexContainer;

}




