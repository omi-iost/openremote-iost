// !!! This file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "SteerProgOperate.h"
SteerProgOperate::SteerProgOperate()
{
}
SteerProgOperate::~SteerProgOperate()
{
}
void SteerProgOperate::Run(Int32 activeSlot)
{
    if (activeSlot == 0) {}
    SendData(&DataAp1.OnRequestSteerData);
}
void SteerProgOperate::ReceiveGraphicsEvent(ioGraphics* graphics, ioEvent* graphicsEvent)
{
    if (graphics == NULL) {}
    if (graphicsEvent == NULL) {}
    else if (graphicsEvent == &CommandCp1.ButtTakeRequest.Clicked)
    {
        SendData(&DataControlCp1.TakeCommand);
    }
    else if (graphicsEvent == &CommandCp1.ButtRelease.Clicked)
    {
        SendData(&DataControlCp1.Release);
    }
    else if (graphicsEvent == &CommandCp2.ButtTakeRequest.Clicked)
    {
        SendData(&DataControlCp2.TakeCommand);
    }
    else if (graphicsEvent == &CommandCp2.ButtRelease.Clicked)
    {
        SendData(&DataControlCp2.Release);
    }
    else if (graphicsEvent == &ModeCp1.ButtStandby.Clicked)
    {
    }
    else if (graphicsEvent == &ModeCp1.ButtCourse.Clicked)
    {
    }
    else if (graphicsEvent == &ModeCp1.ButtWork.Clicked)
    {
    }
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
