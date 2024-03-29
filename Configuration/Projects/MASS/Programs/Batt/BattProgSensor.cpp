// !!! This file is generated by ioStudio !!!
// Generation date and time: 22.FEB.2024 07:21:31
#include "pch.h"
#pragma hdrstop
#include "BattProgSensor.h"
BattProgSensor::BattProgSensor()
{
}
BattProgSensor::~BattProgSensor()
{
}
void BattProgSensor::ReadInput(Int32 activeSlot)
{
    if (activeSlot == 0) {};
}
void BattProgSensor::Run(Int32 activeSlot)
{
    Bool retBool;
    Float in1_Float;
    Float in2_Float;
    Float in3_Float;
    Float out1_Float;
    ioTimeIntervalData out2_TimeInterval;
    Float retFloat;
    if (activeSlot == 0) {};
    in1_Float = DcDataDc12.BattAmpIn.GetValue();
    in2_Float = DcDataDc12.BattAmpOut.GetValue();
    in3_Float = DcDataDc12.BattVolt.GetValue();
    retBool = CheckBattery(in1_Float, in2_Float, in3_Float, &out1_Float);
    MainData.IsChargActive12V.SetValue(retBool);
    DcDataDc12.BattAmpAvg.SetValue(out1_Float);
    
    in1_Float = DcDataDc24.BattAmpIn.GetValue();
    in2_Float = DcDataDc24.BattAmpOut.GetValue();
    in3_Float = DcDataDc24.BattVolt.GetValue();
    retBool = CheckBattery(in1_Float, in2_Float, in3_Float, &out1_Float);
    MainData.IsChargActive24V.SetValue(retBool);
    DcDataDc24.BattAmpAvg.SetValue(out1_Float);
    
    in1_Float = DcDataDc12.BattAmpAvg.GetValue();
    in2_Float = DcDataDc24.BattAmpAvg.GetValue();
    CalcSoc(in1_Float, in2_Float, &out1_Float, &out2_TimeInterval);
    MainData.StatusOfCharge.SetValue(out1_Float);
    MainData.TimeTo10Percent.SetValue(&out2_TimeInterval);
    
    retFloat = GetInputVoltageCharger();
    MainData.StatusOfCharge.SetValue(retFloat);
}
void BattProgSensor::WriteOutput(Int32 activeSlot)
{
    if (activeSlot == 0) {};
}
Bool BattProgSensor::CheckBattery(Float currentIn, Float currentOut, Float voltage, Float* currentAvg)
{
    if (currentIn == (Float)0.0) {};
    if (currentOut == (Float)0.0) {};
    if (voltage == (Float)0.0) {};
    if (currentAvg == NULL) {};
    return 0;
}
void BattProgSensor::CalcSoc(Float currentAvg12V, Float currentAvg24V, Float* soc, ioTimeIntervalData* timeTo10Perc)
{
    if (currentAvg12V == (Float)0.0) {};
    if (currentAvg24V == (Float)0.0) {};
    if (soc == NULL) {};
    if (timeTo10Perc == NULL) {};
}
Float BattProgSensor::GetInputVoltageCharger(void)
{
    return (Float)0.0;
}
