#ifndef DRIVERS_CONFIG_HPP_
#define DRIVERS_CONFIG_HPP_

//#include <cstdint>
#include "main.h"
#include "usart.h"
#include "SBUSReceiver.hpp"

/*
    UART Mapping
*/

#define sbus_uart       &huart2

extern SBUSReceiver* sbus_pointer;

#endif