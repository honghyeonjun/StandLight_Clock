#ifndef SERVICE_H
#define SERVICE_H

#include <string>
#include "View.h"
#include "LightState.h"


#pragma once

class Service
{
public:
    Service(View *viewer);
    virtual ~Service();
    void updateState(std::string strState);

private:
    int lightState;
    View *view;
};

#endif