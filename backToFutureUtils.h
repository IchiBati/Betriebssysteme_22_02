//
// Created by sven on 01.05.22.
//

#ifndef BACKTOFUTUREUTILS
#define BACKTOFUTUREUTILS

typedef struct{
    unsigned char* c_string;
    unsigned int value;
}FluxCapacitor;

typedef struct
{
    double speed_in_kmh;
    double current_power_level_in_mega_watts;
}DeLorean;

typedef struct
{
    unsigned int* cap_indices;
    unsigned int array_length;
}IndexContainer;

FluxCapacitor* createFluxCapacitorRand();

FluxCapacitor* createFluxCapacitorInitValue(int value);

FluxCapacitor** createFluxCapacitorArray(unsigned int n);

FluxCapacitor** createFluxCapacitorArrayInitValue(unsigned int n, int value);

IndexContainer* createIndexContainer(int length);



#endif // BACKTOFUTUREUTILS
