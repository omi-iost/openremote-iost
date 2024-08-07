// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "SteerProgOperateA.h"
#include "Programs/ioSystemGraphics.h"
#include "Programs/ioSystemPorts.h"
SteerProgOperateA::SteerProgOperateA()
{
}
SteerProgOperateA::~SteerProgOperateA()
{
}
void SteerProgOperateA::InitializeTask(void)
{
    ioProgram::InitializeTask();
    AddPanel((ioPanel*)&AutopilotApA);
    AddPanel((ioPanel*)&CommandCpA);
    AddPanel((ioPanel*)&ModeCpA);
    AddPanel((ioPanel*)&ReferenceCpA);
}
void SteerProgOperateA::Run(Int32 activeSlot)
{
    if (activeSlot == 0) {}
}
void SteerProgOperateA::ReceiveGraphicsEvent(Int32 puidValue, ioProgramGraphicsEvent typeEvent)
{
    ioSystemGraphicsType puid = ioSystemGraphics::GetGraphicsType(puidValue);
    if (puidValue == 0) {}
    if (typeEvent == ioProgramGraphicsEvent_NotDefined) {}
    switch (puid)
    {
    case Puid_Steer_CpA_ButtTakeRequest:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&DataCpA.TakeCommand, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11);
        break;
    case Puid_Steer_CpA_ButtRelease:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&DataCpA.Release, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11);
        break;
    case Puid_Steer_CpA_ButtStandby:
        break;
    case Puid_Steer_CpA_ButtCourse:
        break;
    case Puid_Steer_CpA_ButtWork:
        break;
    } // switch
}
void SteerProgOperateA::ReceiveData(ioDataCollection* listData, ioData* data)
{
    if (listData == NULL) {}
    if (data == NULL) {}
    else if (data == &DataCpA.OnChangeCommand)
    {
        CommandCpA.TextCommandStatus.SetValueVar(&DataCpA.ActiveStation);
    }
    else if (data == &DataCpA.OnChangeSteerMode)
    {
        CommandCpA.LabelCommandStatus.SetValueVar(&DataCpA.SteerMode);
    }
    else if (data == &DataApA.OnChangeRef)
    {
        AutopilotApA.InstrHeadingRef.SetValueVar(&DataApA.HeadingRef);
    }
    else if (data == &DataApA.OnChangeCompass)
    {
        SendData(&DataCpA.ModeWork, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11);
    }
    else if (data == &DataApA.OnChangeRudder)
    {
    }
    else if (data == &DataApA.OnChangeThrust)
    {
    }
    else if (data == &DataApA.OnChangeEngine)
    {
    }
}
