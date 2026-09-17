#include "Log.h"

int main(){
    RingBuffer buffer(5);
    LogSensor sensor;
    sensor.FetchAndPush(&buffer);
    sensor.FetchAndPush(&buffer);
    sensor.FetchAndPush(&buffer);
    sensor.FetchAndPush(&buffer);

    buffer.print();
    std::cin.get();
    return 0;
}
