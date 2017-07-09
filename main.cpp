//============================================================================
// Name        : cppjuly.cpp
// Author      : Andreas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <fstream>
#include <string>
#include <sstream>
#include "GPIOHandle.h"

GPIOHandle gpio_blink;



using namespace std;

void blink(void);

int main(){

    int BlinkPin = 18;
    // Chip Select Pin initieren
    //GPIOHandle gpio_CS(std::to_string(cspin));
    gpio_blink.setGPIO(std::to_string(BlinkPin));
    gpio_blink.export_gpio();
    gpio_blink.setdir_gpio("out");
    gpio_blink.setval_gpio("1");

    sleep(5000000);

    gpio_blink.setval_gpio("0");
    gpio_blink.unexport_gpio();
}

