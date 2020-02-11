/**
  * @file wm8731_dev.h
  * @author generated by mrt-device utility 
  * @link [https://github.com/uprev-mrt/mrtutils/wiki/mrt-device]
  * @brief values and constants for the wm8731 device registers
  * 
  */

#define WM8731_I2C_ADDRESS 0x34
#define WM8731_REG_ADDR_SIZE 1


/*******************************************************************************
  Register Addresses                                                                              
*******************************************************************************/

#define WM_REG_LEFT_IN_ADDR                                        0x00 /* Left line in control */
#define WM_REG_RIGHT_IN_ADDR                                       0x01 /* Right line in control */
#define WM_REG_LEFT_OUT_ADDR                                       0x02 /* Left Headphone Out control */
#define WM_REG_RIGHT_OUT_ADDR                                      0x03 /* Right Headphone Out control */
#define WM_REG_AN_PATH_ADDR                                        0x04 /* Analogue audio path control */
#define WM_REG_DIG_PATH_ADDR                                       0x05 /* Digital audio path control */
#define WM_REG_POWER_DWN_ADDR                                      0x06 /* Power Down control */
#define WM_REG_DIG_IFACE_ADDR                                      0x07 /* Digital audio interface format */
#define WM_REG_SAMPLE_ADDR                                         0x08 /* Sampling control */
#define WM_REG_ACTIVE_ADDR                                         0x09 /* Active Control */
#define WM_REG_RESET_ADDR                                          0x0F /* Reset control */


/*******************************************************************************
  Fields                                                                              
*******************************************************************************/

/* LEFT_IN Register Fields */
    /* LEFT_IN -> Flags */
    #define WM_LEFT_IN_MUTE                                        0x0080 /* Mutes Left input */
    #define WM_LEFT_IN_LRINBOTH                                    0x0100 /* Left to Right Channel Line Input Volume and Mute Data Load Control */
    /* LEFT_IN -> VOLUME */
    #define WM_LEFT_IN_VOLUME_FIELD_MASK                           0x001F /* Volume control for Left input in 1.5dB steps range -34.5dB -> +12dB */
    #define WM_LEFT_IN_VOLUME_FIELD_OFFSET                         0x0000
      #define WM_LEFT_IN_VOLUME_MIN                                0x0000 /* -34.5dB */
      #define WM_LEFT_IN_VOLUME_0DB                                0x0015 /* 0db Gain */
      #define WM_LEFT_IN_VOLUME_MAX                                0x001F /* +12dB */
      #define WM_LEFT_IN_VOLUME_STEP                               0x0001 /* 1.5dB Step */

/* RIGHT_IN Register Fields */
    /* RIGHT_IN -> Flags */
    #define WM_RIGHT_IN_MUTE                                       0x0080 /* Mutes Right input */
    #define WM_RIGHT_IN_LRINBOTH                                   0x0100 /* Left to Right Channel Line Input Volume and Mute Data Load Control */
    /* RIGHT_IN -> VOLUME */
    #define WM_RIGHT_IN_VOLUME_FIELD_MASK                          0x001F /* Volume control for right input in 1.5dB steps range -34.5dB -> +12dB */
    #define WM_RIGHT_IN_VOLUME_FIELD_OFFSET                        0x0000
      #define WM_RIGHT_IN_VOLUME_MIN                               0x0000 /* minimum -34.5dB */
      #define WM_RIGHT_IN_VOLUME_0DB                               0x0015 /* 0db Gain */
      #define WM_RIGHT_IN_VOLUME_MAX                               0x001F /* maximum +12dB */
      #define WM_RIGHT_IN_VOLUME_STEP                              0x0001 /* 1.5dB Step */

/* AN_PATH Register Fields */
    /* AN_PATH -> Flags */
    #define WM_AN_PATH_MICBOOST                                    0x0001 /* Microphone Input Level Boost */
    #define WM_AN_PATH_MUTEMIC                                     0x0002 /* Mute Mic input to ADC */
    #define WM_AN_PATH_INSEL                                       0x0004 /* Selects input between Mic and Line-in */
    #define WM_AN_PATH_BYPASS                                      0x0008 /* Combines Line-in signal to Output */
    #define WM_AN_PATH_DACSEL                                      0x0010 /* DAC Select */
    #define WM_AN_PATH_SIDETONE                                    0x0020 /* Combines Mic signal to Output */
    /* AN_PATH -> SIDEATT */
    #define WM_AN_PATH_SIDEATT_FIELD_MASK                          0x00C0 /* Side Tone attenuation */
    #define WM_AN_PATH_SIDEATT_FIELD_OFFSET                        0x0006
      #define WM_AN_PATH_SIDEATT_6DB                               0x0000 /* 6dB of attenuation */
      #define WM_AN_PATH_SIDEATT_9DB                               0x0001 /* 9dB of attenuation */
      #define WM_AN_PATH_SIDEATT_12DB                              0x0002 /* 12dB of attenuation */
      #define WM_AN_PATH_SIDEATT_15DB                              0x0003 /* 15dB of attenuation */

/* DIG_PATH Register Fields */
    /* DIG_PATH -> Flags */
    #define WM_DIG_PATH_ADCHPD                                     0x0001 /* ADC High Pass Filter */
    #define WM_DIG_PATH_DACMU                                      0x0008 /* DAC Soft Mute */
    #define WM_DIG_PATH_HPOR                                       0x0010 /* Store dc offset when High Pass Filter disabled */
    /* DIG_PATH -> DEEMP */
    #define WM_DIG_PATH_DEEMP_FIELD_MASK                           0x0006 /* De-emphasis Control */
    #define WM_DIG_PATH_DEEMP_FIELD_OFFSET                         0x0001
      #define WM_DIG_PATH_DEEMP_DIS                                0x0000 /* Disable */
      #define WM_DIG_PATH_DEEMP_32KHZ                              0x0001 /* 32 kHz */
      #define WM_DIG_PATH_DEEMP_44_1KHZ                            0x0002 /* 44.1 kHz */
      #define WM_DIG_PATH_DEEMP_48KHZ                              0x0003 /* 48 kHz */

/* POWER_DWN Register Fields */
    /* POWER_DWN -> Flags */
    #define WM_POWER_DWN_LINEINPD                                  0x0001 /* Line Input Power Down */
    #define WM_POWER_DWN_MICPD                                     0x0002 /* Microphone Input an Bias PowerDown */
    #define WM_POWER_DWN_ADCPD                                     0x0004 /* ADC Power Dow */
    #define WM_POWER_DWN_DACPD                                     0x0008 /* DAC Power Down */
    #define WM_POWER_DWN_OUTPD                                     0x0010 /* Powers down ALL outputs including digital */
    #define WM_POWER_DWN_OSCPD                                     0x0020 /* Oscillator Power Down */
    #define WM_POWER_DWN_CLKOUTPD                                  0x0040 /* CLKOUT power down */
    #define WM_POWER_DWN_POWEROFF                                  0x0080 /* POWEROFF mode */

/* DIG_IFACE Register Fields */
    /* DIG_IFACE -> Flags */
    #define WM_DIG_IFACE_BLCKINV                                   0x0080 /* Inverts the bit clock */
    #define WM_DIG_IFACE_MASTER_MODE                               0x0040 /* Enables Master mode */
    #define WM_DIG_IFACE_LRSWAP                                    0x0020 /* Swaps LR clock polarity */
    #define WM_DIG_IFACE_LRP                                       0x0010 /* DACLRC phase control (in left, right or I2S modes) */
    /* DIG_IFACE -> IWL */
    #define WM_DIG_IFACE_IWL_FIELD_MASK                            0x000C /* Word Length. Audio data size */
    #define WM_DIG_IFACE_IWL_FIELD_OFFSET                          0x0002
      #define WM_DIG_IFACE_IWL_32BIT                               0x0003 /* 32 bit sample size */
      #define WM_DIG_IFACE_IWL_24BIT                               0x0002 /* 24 bit sample size */
      #define WM_DIG_IFACE_IWL_20BIT                               0x0001 /* 20 bit sample size */
      #define WM_DIG_IFACE_IWL_16BIT                               0x0000 /* 16 bit sample size */
    /* DIG_IFACE -> FORMAT */
    #define WM_DIG_IFACE_FORMAT_FIELD_MASK                         0x0003 /* Selects digital audio format */
    #define WM_DIG_IFACE_FORMAT_FIELD_OFFSET                       0x0000
      #define WM_DIG_IFACE_FORMAT_RIGHT_JUST                       0x0000 /* MSB-First right justified */
      #define WM_DIG_IFACE_FORMAT_LEFT_JUST                        0x0001 /* MSB-first left justified */
      #define WM_DIG_IFACE_FORMAT_I2S                              0x0002 /* I2S format. MSB-First left -1 justified */
      #define WM_DIG_IFACE_FORMAT_DSP                              0x0003 /* DSP Mode. frame sync + 2 data packed words */

/* ACTIVE Register Fields */
    /* ACTIVE -> Flags */
    #define WM_ACTIVE_ENABLE                                       0x0001 /* Enables Digital Audio interface */

/* RESET Register Fields */
    /* RESET -> RESET */
    #define WM_RESET_RESET_FIELD_MASK                              0x00FF /* Setting to 0 resets the device */
    #define WM_RESET_RESET_FIELD_OFFSET                            0x0000


/*******************************************************************************
  Default Values                                                                              
*******************************************************************************/

#define WM_LEFT_IN_DEFAULT                                         0x0097
#define WM_RIGHT_IN_DEFAULT                                        0x0097
#define WM_LEFT_OUT_DEFAULT                                        0x0079
#define WM_RIGHT_OUT_DEFAULT                                       0x0079
#define WM_AN_PATH_DEFAULT                                         0x000A
#define WM_DIG_PATH_DEFAULT                                        0x0008
#define WM_POWER_DWN_DEFAULT                                       0x009F
#define WM_DIG_IFACE_DEFAULT                                       0x009F
#define WM_SAMPLE_DEFAULT                                          0x0000
#define WM_ACTIVE_DEFAULT                                          0x0000
#define WM_RESET_DEFAULT                                           0x0FFF

/*******************************************************************************
  Flag Set/Clear/Check                                                                             
*******************************************************************************/

/**
  *@brief sets flags on device
  *@param dev ptr to wm8731 device
  *@param reg ptr to register definition
  *@param mask mask of flags to set
  */
#define wm_set_flag(dev, reg, mask) regdev_set_flags(&(dev)->mRegDev,(reg), (mask))

/**
  *@brief clears flags on device
  *@param dev ptr to wm8731 device
  *@param reg ptr to register definition
  *@param mask mask of flags to set
  */
#define wm_clear_flag(dev, reg, mask) regdev_clear_flags(&(dev)->mRegDev,(reg), (mask))

/**
  *@brief checks flags on device
  *@param dev ptr to wm8731 device
  *@param reg ptr to register definition
  *@param mask mask of flags to set
  *@return true if all flags in mask are set 
  *@return false if any flags in mask are not set
  */
#define wm_check_flag(dev, reg, mask) regdev_check_flags(&(dev)->mRegDev,(reg), (mask))

/*******************************************************************************
  Field Getters                                                                              
*******************************************************************************/



/*******************************************************************************
  Field Setters                                                                              
*******************************************************************************/

/**
 * @brief writes the VOLUME field to the LEFT_IN register 
 * @param dev ptr to wm8731 device
 * @option WM_LEFT_IN_VOLUME_MIN -34.5dB
 * @option WM_LEFT_IN_VOLUME_0DB 0db Gain
 * @option WM_LEFT_IN_VOLUME_MAX +12dB
 * @option WM_LEFT_IN_VOLUME_STEP 1.5dB Step
 */
#define wm_set_left_in_volume(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mLeftIn, WM_LEFT_IN_VOLUME_FIELD_MASK , (val) )

/**
 * @brief writes the VOLUME field to the RIGHT_IN register 
 * @param dev ptr to wm8731 device
 * @option WM_RIGHT_IN_VOLUME_MIN minimum -34.5dB
 * @option WM_RIGHT_IN_VOLUME_0DB 0db Gain
 * @option WM_RIGHT_IN_VOLUME_MAX maximum +12dB
 * @option WM_RIGHT_IN_VOLUME_STEP 1.5dB Step
 */
#define wm_set_right_in_volume(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mRightIn, WM_RIGHT_IN_VOLUME_FIELD_MASK , (val) )

/**
 * @brief writes the SIDEATT field to the AN_PATH register 
 * @param dev ptr to wm8731 device
 * @option WM_AN_PATH_SIDEATT_6DB 6dB of attenuation
 * @option WM_AN_PATH_SIDEATT_9DB 9dB of attenuation
 * @option WM_AN_PATH_SIDEATT_12DB 12dB of attenuation
 * @option WM_AN_PATH_SIDEATT_15DB 15dB of attenuation
 */
#define wm_set_an_path_sideatt(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mAnPath, WM_AN_PATH_SIDEATT_FIELD_MASK , (val) )

/**
 * @brief writes the DEEMP field to the DIG_PATH register 
 * @param dev ptr to wm8731 device
 * @option WM_DIG_PATH_DEEMP_DIS Disable
 * @option WM_DIG_PATH_DEEMP_32KHZ 32 kHz
 * @option WM_DIG_PATH_DEEMP_44_1KHZ 44.1 kHz
 * @option WM_DIG_PATH_DEEMP_48KHZ 48 kHz
 */
#define wm_set_dig_path_deemp(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mDigPath, WM_DIG_PATH_DEEMP_FIELD_MASK , (val) )

/**
 * @brief writes the IWL field to the DIG_IFACE register 
 * @param dev ptr to wm8731 device
 * @option WM_DIG_IFACE_IWL_32BIT 32 bit sample size
 * @option WM_DIG_IFACE_IWL_24BIT 24 bit sample size
 * @option WM_DIG_IFACE_IWL_20BIT 20 bit sample size
 * @option WM_DIG_IFACE_IWL_16BIT 16 bit sample size
 */
#define wm_set_dig_iface_iwl(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mDigIface, WM_DIG_IFACE_IWL_FIELD_MASK , (val) )

/**
 * @brief writes the FORMAT field to the DIG_IFACE register 
 * @param dev ptr to wm8731 device
 * @option WM_DIG_IFACE_FORMAT_RIGHT_JUST MSB-First right justified
 * @option WM_DIG_IFACE_FORMAT_LEFT_JUST MSB-first left justified
 * @option WM_DIG_IFACE_FORMAT_I2S I2S format. MSB-First left -1 justified
 * @option WM_DIG_IFACE_FORMAT_DSP DSP Mode. frame sync + 2 data packed words
 */
#define wm_set_dig_iface_format(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mDigIface, WM_DIG_IFACE_FORMAT_FIELD_MASK , (val) )

/**
 * @brief writes the RESET field to the RESET register 
 * @param dev ptr to wm8731 device
 */
#define wm_set_reset_reset(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mReset, WM_RESET_RESET_FIELD_MASK , (val) )


/*******************************************************************************
  Configs                                                                            
*******************************************************************************/

/**
 * @brief Device configured for stereo input with 16bit data
 * @param dev ptr to wm8731 device
 */
#define WM_LOAD_CONFIG_16BIT_LINE_IN(dev) \
wm_write_reg( (dev), &(dev)->mReset, 0x0000);    /* RESET: 0 */                   \
MRT_DELAY_MS(100);                               /* Delay for RESET */ \
wm_write_reg( (dev), &(dev)->mLeftIn, 0x0015);   /* MUTE: False , LRINBOTH: False , VOLUME: 0dB */ \
wm_write_reg( (dev), &(dev)->mRightIn, 0x0015);  /* MUTE: False , LRINBOTH: False , VOLUME: 0dB */ \
wm_write_reg( (dev), &(dev)->mDigPath, 0x0000);  /* ADCHPD: False */              \
wm_write_reg( (dev), &(dev)->mAnPath, 0x000A);   /* BYPASS: True , INSEL: LINE , MUTEMIC: True */ \
wm_write_reg( (dev), &(dev)->mPowerDwn, 0x000A); /* MICPD: True , DACPD: True , OUTPD: False */ \
wm_write_reg( (dev), &(dev)->mDigIface, 0x0002); /* IWL: 16BIT , FORMAT: I2S */   \
wm_write_reg( (dev), &(dev)->mActive, 0x0001);   /* Enable: True */               \

