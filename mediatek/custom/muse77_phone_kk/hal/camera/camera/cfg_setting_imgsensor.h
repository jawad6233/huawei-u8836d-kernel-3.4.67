#ifndef _CFG_SETTING_IMGSENSOR_H_
#define _CFG_SETTING_IMGSENSOR_H_


/*******************************************************************************
* Image Sensor Orientation
*******************************************************************************/
SensorOrientation_T const&
getSensorOrientation()
{
    static SensorOrientation_T const inst = {
        u4Degree_0  : 90,   //  main sensor in degree (0, 90, 180, 270)
        u4Degree_1  : 270,    //  sub  sensor in degree (0, 90, 180, 270)
    };
    return inst;
}


/*******************************************************************************
* Return fake orientation for front sensor or not
*       MTRUE: return 90 for front sensor in degree 0, 
*              return 270 for front sensor in degree 180.
*       MFALSE: not return fake orientation.
*******************************************************************************/
MBOOL isRetFakeSubOrientation()  
{
	return MFALSE;
}


/*******************************************************************************
* Sensor Input Data Bit Order
*   Return:
*       0   : raw data input [9:2]
*       1   : raw data input [7:0]
*       -1  : error
*******************************************************************************/
MINT32
getSensorInputDataBitOrder(EDevId const eDevId)
{
    switch  (eDevId)
    {
    case eDevId_ImgSensor0:
        return  0;
    case eDevId_ImgSensor1:
        return  0;
    default:
        break;
    }
    return  -1;
}


/*******************************************************************************
* Sensor Pixel Clock Inverse in PAD side.
*   Return:
*       0   : no inverse
*       1   : inverse
*       -1  : error
*******************************************************************************/
MINT32
getSensorPadPclkInv(EDevId const eDevId)
{
    switch  (eDevId)
    {
    case eDevId_ImgSensor0:
        return  0;
    case eDevId_ImgSensor1:
        return  0;
    default:
        break;
    }
    return  -1;
}

MINT32
getSensorViewAngle(EDevId const eDevId)
{
    switch  (eDevId)
    {
    case eDevId_ImgSensor0:
        return  ((60<<16)|(49)); //MSB16bits: horizontal view angle, LSB16bits: vertical view angle
    case eDevId_ImgSensor1:
        return  ((60<<16)|(40));//MSB16bits: horizontal view angle, LSB16bits: vertical view angle
    //case eDevId_ImgSensor2:
    //    return  0;  //MSB16bits: horizontal view angle, LSB16bits: vertical view angle      
    default:
        break;
    }
    return  -1;
}




#endif //  _CFG_SETTING_IMGSENSOR_H_

