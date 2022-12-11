#include "data.h"
#include "Profiler.hpp"
#include <vector>

constexpr size_t N = 100000000;
constexpr size_t TIMES = 1000000000000;

int main()
{
    Profiler prof;

    std::cout<<"size Data1: "<<sizeof(Data1)<<"\n";
    std::cout<<"size Data2: "<<sizeof(Data2)<<"\n";

    std::vector<Data1> vec1(N);
    prof.start();
    for (size_t c = 0; c < TIMES; c++)
    {
        for (size_t i = 0; i < N; i++)
        {
            vec1[i] = {0, 0, 0, 0, 0};
        }
    }
    prof.end();

    std::vector<Data2> vec2(N);
    prof.start();
    for (size_t c = 0; c < TIMES; c++)
    {
        for (size_t i = 0; i < N; i++)
        {
            vec2[i] = {0, 0, 0, 0, 0};
        }
    }
    prof.end();

    return 0;
}
