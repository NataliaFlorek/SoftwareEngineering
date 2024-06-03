#include <iostream>
#include "IDeviceFactory.h"
#include "THHDDeviceFactory.h"

int main() {
    IDeviceFactory *iDeviceFactory;
    ILaptopDevice *iLaptopDevice;
    IPCDevice *iPCDevice;
    iDeviceFactory = new THHDDeviceFactory();
    iLaptopDevice = iDeviceFactory->fLaptopDevice();
    iLaptopDevice->displayDevice();
    iPCDevice = iDeviceFactory->fPCDevice();
    iPCDevice->displayDevice();

    return 0;
}