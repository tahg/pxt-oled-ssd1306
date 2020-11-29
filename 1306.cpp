#include "pxt.h"

namespace i2c {

    //%
    void i2cStart()
    {
      ubit.i2c.start();
    }
    
    //%
    void i2cStop()
    {
      ubit.i2c.stop();
    }
    
    //%
    void i2cWrite(int value)
    {
      ubit.i2c.write(value);
    }
}
