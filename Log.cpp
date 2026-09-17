#include "Log.h"

void FetchAndPush(RingBuffer* buffer)  {
    int reading = 25;
    buffer->push(reading);
}