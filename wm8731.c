/**
  * @file wm8731.c
  * @author generated by mrt-device utility 
  * @link [https://github.com/uprev-mrt/mrtutils/wiki/mrt-device]
  * @brief Device driver for wm8731 device
  *
  */

#include "wm8731.h"



/**
 * @brief initializes device
 * @param dev ptr to wm8731 device
 * @return status 
 */
static mrt_status_t wm_init(wm8731_t* dev)
{   
    /* Initialize Register Descriptors */
    REG_INIT( dev->mLeftIn , WM_REG_LEFT_IN_ADDR , uint16_t, REG_PERM_W  );
    REG_INIT( dev->mRightIn , WM_REG_RIGHT_IN_ADDR , uint16_t, REG_PERM_W  );
    REG_INIT( dev->mLeftOut , WM_REG_LEFT_OUT_ADDR , uint16_t, REG_PERM_W  );
    REG_INIT( dev->mRightOut , WM_REG_RIGHT_OUT_ADDR , uint16_t, REG_PERM_W  );
    REG_INIT( dev->mAnPath , WM_REG_AN_PATH_ADDR , uint16_t, REG_PERM_W  );
    REG_INIT( dev->mDigPath , WM_REG_DIG_PATH_ADDR , uint16_t, REG_PERM_W  );
    REG_INIT( dev->mPowerDwn , WM_REG_POWER_DWN_ADDR , uint16_t, REG_PERM_W  );
    REG_INIT( dev->mDigIface , WM_REG_DIG_IFACE_ADDR , uint16_t, REG_PERM_W  );
    REG_INIT( dev->mSample , WM_REG_SAMPLE_ADDR , uint16_t, REG_PERM_W  );
    REG_INIT( dev->mActive , WM_REG_ACTIVE_ADDR , uint16_t, REG_PERM_W  );
    REG_INIT( dev->mReset , WM_REG_RESET_ADDR , uint16_t, REG_PERM_W  );


    /*user-block-init-start*/

    /* Assing the custom write function to the RegDev base */
    dev->mRegDev.fWrite = wm8731_write_i2c;

    /*user-block-init-end*/

    return MRT_STATUS_OK;
}


mrt_status_t wm_init_i2c(wm8731_t* dev, mrt_i2c_handle_t i2c)
{
    mrt_status_t status;

    status = init_i2c_register_device(&dev->mRegDev, i2c, WM8731_I2C_ADDRESS, WM8731_REG_ADDR_SIZE );

    wm_init(dev);


    /*user-block-init-i2c-start*/
    /*user-block-init-i2c-end*/
    
    return MRT_STATUS_OK;
}

mrt_status_t wm_test(wm8731_t* dev)
{
    /*user-block-test-start*/

    /* Device is Write only. 

    /*user-block-test-end*/
    return MRT_STATUS_ERROR;
}


/*user-block-bottom-start*/

void wm_set_volume(wm8731_t* dev, uint8_t left, uint8_t right)
{
    /*Converted values for register*/
    uint8_t leftVal = ((int)left * WM_LEFT_IN_VOLUME_MAX) / 100;
    uint8_t rightVal = ((int)right * WM_RIGHT_IN_VOLUME_MAX)/ 100;

    /* Set volume fields */
    wm_set_left_in_volume(dev, leftVal);
    wm_set_right_in_volume(dev, rightVal); 
}


mrt_status_t wm8731_write_i2c(mrt_regdev_t* dev, uint32_t addr, uint8_t* data,int len)
{
    /* wm8731 actually writes a single 16bit value with a 7bit register address and a 9 bit register value.. */
    uint16_t regVal = (addr<< 9) | *data;
    addr = (addr << 1) | (*data >> 8);
    
    /* Once we have shifted the 9th data bit into the address, we can write the remainder as a single byte*/
    return MRT_I2C_MEM_WRITE(dev->mI2cHandle, dev->mAddr, addr, dev->mMemAddrSize , data, 1, dev->mTimeout );

}


/*user-block-bottom-end*/
