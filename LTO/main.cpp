#include "distance1.h" 
#include "distance2.h" 
#include "Profiler.hpp"

constexpr size_t N = 1000000000;

int main() {
    Profiler prof;

    prof.start();
    for(size_t i = 0; i < N; i++){
        distance1(1, 1);
    }
    prof.end();

    prof.start();
    for(size_t i = 0; i < N; i++){
        distance2(1, 1);
    }
    prof.end();

    return 0;
}
