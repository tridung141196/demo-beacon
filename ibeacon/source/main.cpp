#include "mbed.h"
#include "BLEDevice.h"

BLEDevice  ble;

void bleUploadIBeacon()
{
    const static uint8_t iBeaconPayload[] = {
        0x4C, 0x00, //ID Company
        0x02,       //Type
        0x15,       //Length of data
        0xE2, 0x0A, 0x39, 0xF4, 0x73, 0xF5, 0x4B, 0xC4, //UUID
        0xA1, 0x2F, 0x17, 0xD1, 0xAD, 0x07, 0xA9, 0x61, //
        0x04, 0x62, //Major
        0x0D, 0x10, //Mirnor
        0xC8, };     //Txpower 
                              
    
    ble.accumulateAdvertisingPayload(GapAdvertisingData::BREDR_NOT_SUPPORTED | GapAdvertisingData::LE_GENERAL_DISCOVERABLE );
    
    ble.accumulateAdvertisingPayload(GapAdvertisingData::MANUFACTURER_SPECIFIC_DATA, iBeaconPayload, sizeof(iBeaconPayload));
    
    ble.setAdvertisingType(GapAdvertisingParams::ADV_NON_CONNECTABLE_UNDIRECTED);
 
    ble.setAdvertisingInterval(160);
    
    ble.setTxPower(160);
    
    ble.startAdvertising();
}
                           
int main(void)
{
    ble.init();
    
    bleUploadIBeacon();
    
    while(true) {
        ble.waitForEvent();
    }
}
