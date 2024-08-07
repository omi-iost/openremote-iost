// !!! This C++ file is generated by ioStudio !!!
#if !defined(__STEERAPDATA_H)
#define __STEERAPDATA_H
#include "ioSystem/Data/ioDataCollection.h"
#include "ioSystem/Data/ioVar.h"
#include "Programs/ioSystemData.h"
#include "ioSystem/Data/ioEvent.h"
#include "ioSystem/Data/ioMethod.h"
class SteerApData : public ioDataCollectionDynamic
{
public:
    SteerApData();
    virtual ~SteerApData();
    virtual void InitializeData(void);
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
#endif // __STEERAPDATA_H
