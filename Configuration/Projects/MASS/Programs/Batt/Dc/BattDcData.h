// !!! This file is generated by ioStudio !!!
// Generation date and time: 21.FEB.2024 06:09:22
#if !defined(__BATTDCDATA_H)
#define __BATTDCDATA_H
#include "ioSystem/Data/ioDataCollection.h"
#include "ioSystem/Data/ioVar.h"
#include "Programs/ioSystemData.h"
#include "ioSystem/Data/ioEvent.h"
#include "ioSystem/Data/ioMethod.h"
class BattDcData : public ioDataCollectionDynamic
{
public:
    BattDcData();
    virtual ~BattDcData();
    virtual void InitializeData(void);
    ioVarFloat BattVolt;
    ioVarFloat BattAmpOut;
    ioVarFloat BattAmpIn;
    ioVarFloat BattAmpAvg;
    ioMethod RequestDcData;
    ioEvent ResponseDcData;
protected:
    ioData* m_ListData[6];
};
#endif // __BATTDCDATA_H
