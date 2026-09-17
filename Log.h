#pragma once
#include "RingBuffer.h"

class ISensor{
    public:
    virtual void FetchAndPush(RingBuffer* buffer) = 0;
    virtual ~ISensor() {};
};

class LogSensor : public ISensor{
    public:
    void FetchAndPush(RingBuffer* buffer) override;
};
