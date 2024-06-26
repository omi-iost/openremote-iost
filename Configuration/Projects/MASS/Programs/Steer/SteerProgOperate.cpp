// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "SteerProgOperate.h"
#include "Programs/ioSystemGraphics.h"
SteerProgOperate::SteerProgOperate()
{
}
SteerProgOperate::~SteerProgOperate()
{
}
void SteerProgOperate::Run(Int32 activeSlot)
{
    ioVarFloat in1_Float;
    ioVarInt32 out1_Int32;
    if (activeSlot == 0) {}
    SendData(&DataAp1.OnRequestSteerData, ioPortProgramProtocol_System);
    in1_Float.SetValueVar(&DataAp1.FrontThrustMeas);
    OnRequestData(&in1_Float, &out1_Int32);
    DataControlCp1.SteerMode.SetValueVar(&out1_Int32);
}
void SteerProgOperate::ReceiveGraphicsEvent(Int32 puidValue, ioProgramGraphicsEvent typeEvent)
{
    ioSystemGraphicsType puid = ioSystemGraphics::GetGraphicsType(puidValue);
    if (puidValue == 0) {}
    if (typeEvent == ioProgramGraphicsEvent_NotDefined) {}
    switch (puid)
    {
    case Puid_Steer_Cp1_ButtTakeRequest:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&DataControlCp1.TakeCommand, ioPortProgramProtocol_System);
        break;
    case Puid_Steer_Cp1_ButtRelease:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&DataControlCp1.Release, ioPortProgramProtocol_System);
        break;
    case Puid_Steer_Cp2_ButtTakeRequest:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&DataControlCp2.TakeCommand, ioPortProgramProtocol_System);
        break;
    case Puid_Steer_Cp2_ButtRelease:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&DataControlCp2.Release, ioPortProgramProtocol_System);
        break;
    case Puid_Steer_Cp1_ButtStandby:
        break;
    case Puid_Steer_Cp1_ButtCourse:
        break;
    case Puid_Steer_Cp1_ButtWork:
        break;
    } // switch
}
void SteerProgOperate::ReceiveData(ioDataCollection* listData, ioData* data)
{
    if (listData == NULL) {}
    if (data == NULL) {}
    else if (data == &DataControlCp1.OnChangeCommand)
    {
        Autopilot.InstrHeadingRef.SetValueVar(&DataAp1.HeadingRef);
    }
    else if (data == &DataControlCp2.OnChangeCommand)
    {
        CommandCp2.TextCommandStatus.SetValueVar(&DataControlCp2.SteerMode);
    }
    else if (data == &DataControlCp1.OnChangeSteerMode)
    {
        CommandCp1.LabelCommandStatus.SetValueVar(&DataControlCp1.SteerMode);
    }
    else if (data == &DataControlCp2.OnChangeSteerMode)
    {
        CommandCp2.LabelCommandStatus.SetValueVar(&DataControlCp2.SteerMode);
    }
    else if (data == &DataAp1.OnChangeRef)
    {
        Autopilot.InstrHeadingRef.SetValueVar(&DataAp1.HeadingRef);
    }
    else if (data == &DataAp1.OnChangeCompass)
    {
        SendData(&DataControlCp1.ModeWork, ioPortProgramProtocol_System);
    }
    else if (data == &DataAp1.OnChangeRudder)
    {
    }
    else if (data == &DataAp1.OnChangeThrust)
    {
    }
    else if (data == &DataAp1.OnChangeEngine)
    {
    }
}
void SteerProgOperate::OnRequestData(ioVarFloat* inputInt32, ioVarInt32* outInt32)
{
    if (inputInt32 == NULL) {};
    if (outInt32 == NULL) {};
}
