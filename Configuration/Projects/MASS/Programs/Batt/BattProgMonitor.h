// !!! This file is generated by ioStudio !!!
// Generation date and time: 22.FEB.2024 05:58:02
#if !defined(__BATTPROGMONITOR_H)
#define __BATTPROGMONITOR_H
#include "ioSystem/Threading/ioTask.h"
#include "Programs/Batt/BattData.h"
#include "Programs/Batt/Dc/BattDcDataDc12.h"
#include "Programs/Batt/Dc/BattDcDataDc24.h"
#include "Programs/Batt/BattPanel.h"
#include "Programs/Batt/Dc/BattDcPanelDc12.h"
#include "Programs/Batt/Dc/BattDcPanelDc24.h"
class BattProgMonitor : public ioTask
{
public:
    BattProgMonitor();
    virtual ~BattProgMonitor();
    virtual void ReadInput(Int32 activeSlot);
    virtual void Run(Int32 activeSlot);
    virtual void WriteOutput(Int32 activeSlot);
    virtual void SetRealValuePanel(Float inputValue, Double* outValue);
    BattData MainData;
    BattDcDataDc12 DcDataDc12;
    BattDcDataDc24 DcDataDc24;
    BattPanel MainPanel;
    BattDcPanelDc12 DcPanelDc12;
    BattDcPanelDc24 DcPanelDc24;
};
#endif // __BATTPROGMONITOR_H