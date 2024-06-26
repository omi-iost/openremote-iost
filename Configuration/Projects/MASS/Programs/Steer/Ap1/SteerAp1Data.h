// !!! This file is generated by ioStudio !!!
#if !defined(__STEERAP1DATA_H)
#define __STEERAP1DATA_H
#include "ioSystem/Data/ioDataCollection.h"
#include "ioSystem/Data/ioVar.h"
#include "Programs/ioSystemData.h"
#include "ioSystem/Data/ioEvent.h"
#include "ioSystem/Data/ioMethod.h"
class SteerAp1Data : public ioDataCollectionDynamic
{
public:
    SteerAp1Data();
    virtual ~SteerAp1Data();
    void InitializeData(void);
    ioVarFloat RudderAngleMeas;
    ioVarFloat FrontThrustMeas;
    ioVarFloat RateOfTurnMeas;
    ioVarFloat HeadingMeas;
    ioVarFloat FrontThrustRef;
    ioEvent OnChangeRef;
    ioVarFloat HeadingRef;
    ioVarFloat RateOfTurnRef;
    ioVarFloat RudderAngleRef;
    ioMethod OnRequestSteerData;
    ioEvent OnChangeCompass;
    ioEvent OnChangeRudder;
    ioEvent OnChangeThrust;
    ioVarFloat EngineRpmMeas;
    ioVarFloat EngineRpmRef;
    ioEvent OnChangeEngine;
protected:
    ioData* m_ListData[16];
};
#endif // __STEERAP1DATA_H
