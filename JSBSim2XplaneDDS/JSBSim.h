//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: JSBSim.h
//  Source: JSBSim.idl
//  Generated: Thu Oct  3 11:00:42 2013
//  OpenSplice V5.5.1OSS
//  
//******************************************************************
#ifndef _JSBSIM_H_
#define _JSBSIM_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"

namespace JSBSim
{
   struct fdmdata;

   struct fdmdata
   {
      DDS::Long ID;
      DDS::Double Velocity_Kts;
      DDS::Double Roll_deg;
      DDS::Double Pitch_deg;
      DDS::Double Altitude_ft;
      DDS::Double VerticleVelocity_fpm;
      DDS::Double Heading_deg;
      DDS::Double SideSlip;
      DDS::Double MachNumber;
      DDS::Double AtmosphereTemperature;
      DDS::Double GValue;
      DDS::Double SimTime;
      DDS::Double SimTimeGMT;
      DDS::Double FlapPosition;
      DDS::Double AltitudeAboveSeaLevel_ft;
      DDS::Double Latitude;
      DDS::Double Longitude;
      DDS::Double TotalFuel;
      DDS::Double FuelTank1;
      DDS::Double FuelTank2;
      DDS::Double FuelTank3;
      DDS::Double FuelTank4;
      DDS::Long RPMEngine1;
      DDS::Long RPMEngine2;
      DDS::Long RPMEngine3;
      DDS::Long RPMEngine4;
      DDS::Long RPMPercentEngine1;
      DDS::Long RPMPercentEngine2;
      DDS::Long RPMPercentEngine3;
      DDS::Long RPMPercentEngine4;
      DDS::Long TorqueEngine1;
      DDS::Long TorqueEngine2;
      DDS::Long TorqueEngine3;
      DDS::Long TorqueEngine4;
      DDS::Double FuelFlowEngine1;
      DDS::Double FuelFlowEngine2;
      DDS::Double FuelFlowEngine3;
      DDS::Double FuelFlowEngine4;
      DDS::Double OilPressureEngine1;
      DDS::Double OilPressureEngine2;
      DDS::Double OilPressureEngine3;
      DDS::Double OilPressureEngine4;
      DDS::Double OilTemperatureEngine1;
      DDS::Double OilTemperatureEngine2;
      DDS::Double OilTemperatureEngine3;
      DDS::Double OilTemperatureEngine4;
      DDS::Double GearboxOilPressureEngine1;
      DDS::Double GearboxOilPressureEngine2;
      DDS::Double GearboxOilPressureEngine3;
      DDS::Double GearboxOilPressureEngine4;
      DDS::Double EGTEngine1;
      DDS::Double EGTEngine2;
      DDS::Double EGTEngine3;
      DDS::Double EGTEngine4;
      DDS::Double OilCoolFlapExtensionEngine1;
      DDS::Double OilCoolFlapExtensionEngine2;
      DDS::Double OilCoolFlapExtensionEngine3;
      DDS::Double OilCoolFlapExtensionEngine4;
      DDS::Double OilQuantityEngine1;
      DDS::Double OilQuantityEngine2;
      DDS::Double OilQuantityEngine3;
      DDS::Double OilQuantityEngine4;
      DDS::Double UtilityHydraulicPressure;
      DDS::Double UtilityHydraulicQuantity;
      DDS::Double BoosterHydraulicPressure;
      DDS::Double BoosterHydraulicQuantity;
      DDS::Double AuxiliaryHydraulicPressure;
      DDS::Double AuxiliaryHydraulicQuantity;
   };

   typedef DDS_DCPSStruct_var < fdmdata> fdmdata_var;
   typedef fdmdata&fdmdata_out;
}




#endif 