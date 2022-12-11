#include <chrono>
#include <iostream>
#include <iomanip>

using namespace std::chrono;
class Profiler{
    private:
        time_point<high_resolution_clock> _start;
        time_point<high_resolution_clock> _end;
    public:
        void start(){
            _start = high_resolution_clock::now();
        }

        void end(){
            _end = high_resolution_clock::now();
            duration<double> diff = _end - _start;
            std::cout << std::setprecision(9);
            std::cout << "Time: " << diff.count() << " s\n";
        }
};