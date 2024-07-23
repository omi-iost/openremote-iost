// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "ioSystemPorts.h"
ioSystemPorts::ioSystemPorts()
{
}
ioSystemPorts::~ioSystemPorts()
{
}
Int32 ioSystemPorts::GetNetworkID(ioSystemPortsType nuid)
{
    return (Int32)nuid;
}
ioSystemPortsType ioSystemPorts::GetPortType(Int32 nuidValue)
{
    if ((nuidValue >= 0) && (nuidValue < 7))
        return (ioSystemPortsType)nuidValue;
    else
        return Nuid_NotDefined;
}