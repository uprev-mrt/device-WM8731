/**
  * @file wm8731.h
  * @author generated by mrt-device utility 
  * @link [https://github.com/uprev-mrt/mrtutils/wiki/mrt-device]
  * @brief Device driver for wm8731 device
  *
  *
  */

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>
#include "Devices/RegDevice/register_device.h"
#include "wm8731_regs.h"

/*user-block-top-start*/
/*user-block-top-end*/


/*******************************************************************************
  Sruct                                                                                
*******************************************************************************/

typedef struct{
    mrt_regdev_t mRegDev; //ptr to base register-device 
    mrt_reg_t mLeftIn;  //Left line in control
    mrt_reg_t mRightIn;  //Right line in control
    mrt_reg_t mLeftOut;  //Left Headphone Out control
    mrt_reg_t mRightOut;  //Right Headphone Out control
    mrt_reg_t mAnPath;  //Analogue audio path control
    mrt_reg_t mDigPath;  //Digital audio path control
    mrt_reg_t mPowerDwn;  //Power Down control
    mrt_reg_t mDigIface;  //Digital audio interface format
    mrt_reg_t mSample;  //Sampling control
    mrt_reg_t mActive;  //Active Control
    mrt_reg_t mReset;  //Reset control
/*user-block-struct-start*/
/*user-block-struct-end*/
}wm8731_t;

/**
 * @brief initializes wm8731 device for i2c bus
 * @param dev ptr to wm8731 device
 * @param i2c handle for i2c bus
 */
mrt_status_t wm_init_i2c(wm8731_t* dev, mrt_i2c_handle_t i2c);

/**
  *@brief tests interface with device
  *@param dev ptr to wm8731 device
  *@return MRT_STATUS_OK if test is passed 
  *@return MRT_STATUS_ERROR if test fails
  */
mrt_status_t wm_test(wm8731_t* dev);

/**
  *@brief writes register of device
  *@param dev ptr to wm8731 device
  *@param reg ptr to register definition
  *@param data data to be write
  *@return status (type defined by platform)
  */
#define wm_write_reg(dev, reg, data) regdev_write_reg(&(dev)->mRegDev, (reg), (data))

/**
  *@brief reads register of device
  *@param dev ptr to wm8731 device
  *@param reg ptr to register definition
  *@param data ptr to store data
  *@return value of register
  */
#define wm_read_reg(dev, reg) regdev_read_reg(&(dev)->mRegDev, (reg))


/*user-block-bottom-start*/

/**
 * @brief sets input volume of device
 * @param dev ptr to wm8731 device
 * @param left volume for left side 0-100 
 * @param right volume for right side
 */
void wm_set_volume(wm8731_t* dev, uint8_t left, uint8_t right);


/*user-block-bottom-end*/

#ifdef __cplusplus
}
#endif