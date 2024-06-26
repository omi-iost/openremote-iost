// !!! This C++ file is generated by ioStudio !!!
#if !defined(__STEERPROGOPERATE_H)
#define __STEERPROGOPERATE_H
#include "ioSystem/Program/Core/ioProgram.h"
#include "Programs/Steer/Control/SteerControlDataCp1.h"
#include "Programs/Steer/Control/SteerControlDataCp2.h"
#include "Programs/Steer/Ap1/SteerAp1Data.h"
#include "Programs/Steer/Ap1/SteerAp1Panel.h"
#include "Programs/Steer/Control/CommandPanelCp1.h"
#include "Programs/Steer/Control/CommandPanelCp2.h"
#include "Programs/Steer/Control/ModePanelCp1.h"
#include "Programs/Steer/Control/ModePanelCp2.h"
#include "Programs/Steer/Control/SetRefPanelCp1.h"
#include "Programs/Steer/Control/SetRefPanelCp2.h"
class SteerProgOperate : public ioProgram
{
public:
    SteerProgOperate();
    virtual ~SteerProgOperate();
    virtual void Run(Int32 activeSlot);
    virtual void ReceiveGraphicsEvent(Int32 puidValue, ioProgramGraphicsEvent typeEvent);
    virtual void ReceiveData(ioDataCollection* listData, ioData* data);
    virtual void OnRequestData(ioVarFloat* inputInt32, ioVarInt32* outInt32);
    SteerControlDataCp1 DataControlCp1;
    SteerControlDataCp2 DataControlCp2;
    SteerAp1Data DataAp1;
    SteerAp1Panel Autopilot;
    CommandPanelCp1 CommandCp1;
    CommandPanelCp2 CommandCp2;
    ModePanelCp1 ModeCp1;
    ModePanelCp2 ModeCp2;
    SetRefPanelCp1 ReferenceCp1;
    SetRefPanelCp2 ReferenceCp2;
};
#endif // __STEERPROGOPERATE_H
