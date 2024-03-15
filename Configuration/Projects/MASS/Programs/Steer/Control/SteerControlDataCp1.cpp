// !!! This file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "SteerControlDataCp1.h"
SteerControlDataCp1::SteerControlDataCp1()
{
    InitializeData();
}
SteerControlDataCp1::~SteerControlDataCp1()
{
}
void SteerControlDataCp1::InitializeData(void)
{
    SteerControlData::InitializeData();
    AddData((ioData*)&TakeCommand, Duid_Steer_Cp1_TakeCommand);
    AddData((ioData*)&ModeDp, Duid_Steer_Cp1_ModeDp);
    AddData((ioData*)&ModeRiver, Duid_Steer_Cp1_ModeRiver);
    AddData((ioData*)&ModeTrack, Duid_Steer_Cp1_ModeTrack);
    AddData((ioData*)&ModeWork, Duid_Steer_Cp1_ModeWork);
    AddData((ioData*)&ModeAuto, Duid_Steer_Cp1_ModeAuto);
    AddData((ioData*)&ModeStandby, Duid_Steer_Cp1_ModeStandby);
    SteerMode.SetValueSigned(0);
    AddData((ioData*)&SteerMode, Duid_Steer_Cp1_SteerMode);
}
