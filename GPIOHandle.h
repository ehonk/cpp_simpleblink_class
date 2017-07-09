//
// Created by Andreas on 09.07.17.
//

#ifndef CPP_SIMPLEBLINK_CLASS_GPIOHANDLE_H
#define CPP_SIMPLEBLINK_CLASS_GPIOHANDLE_H



#include <string>


class GPIOHandle {
public:
    GPIOHandle();
    GPIOHandle(std::string gpionum);
    void initializeGPIO();
    void sayHello();
    int blink(int delta);

    int setGPIO(std::string gpionum);
    int export_gpio(); // exports GPIO
    int unexport_gpio(); // unexport GPIO
    int setdir_gpio(std::string dir);
    int setval_gpio(std::string val); // Set GPIO Value ( pins)
    int getval_gpio(std::string& val);
    std::string get_gpionum() { return sGPIO; };

    int createSquareSignal( float tastgrad_perc, float clockrate);
    int createZeroSquareSignal(float clockrate);

    std::string getsGPIO();
    int getiGPIO();

private:
    std::string sGPIO;
    int iGPIO;

};



#endif //CPP_SIMPLEBLINK_CLASS_GPIOHANDLE_H
