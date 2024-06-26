// !!! This file is generated by ioStudio !!!
#if !defined(__STEERPROGCONTROL_H)
#define __STEERPROGCONTROL_H
#include "ioSystem/Program/Core/ioProgram.h"
#include "Programs/Steer/Ap1/SteerAp1Data.h"
#include "Programs/Steer/Control/SteerControlDataCp1.h"
#include "Programs/Steer/Control/SteerControlDataCp2.h"
class SteerProgControl : public ioProgram
{
public:
    SteerProgControl();
    virtual ~SteerProgControl();
    virtual void Run(Int32 activeSlot);
    virtual void ReceiveData(ioDataCollection* listData, ioData* data);
    virtual void OnRequestData(ioVarFloat* inputInt32, ioVarInt32* outInt32);
    SteerAp1Data DataAp;
    SteerControlDataCp1 DataControlCp1;
    SteerControlDataCp2 DataControlCp2;
};
#endif // __STEERPROGCONTROL_H
