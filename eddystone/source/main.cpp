#include "mbed.h"

#include "BLEDevice.h"

BLEDevice  ble;

void bleUploadUrl()
{
    static const uint16_t uuid16_list[]        = {0x00A0};
    const static uint8_t beaconPayload_url[] = {
        0xaa,0xfe,
        // URL
        0x10, // Frame Type
        0x20, // Ranging Data
        0x01, // URL Scheme (https:// = 0x02)
        'i','o','t','m','a','k','e','r','.','v','n',};
                                                
    ble.accumulateAdvertisingPayload(GapAdvertisingData::BREDR_NOT_SUPPORTED|GapAdvertisingData::LE_GENERAL_DISCOVERABLE);
 
    ble.accumulateAdvertisingPayload(GapAdvertisingData::COMPLETE_LIST_16BIT_SERVICE_IDS, (uint8_t *)uuid16_list, sizeof(uuid16_list));
 
    ble.accumulateAdvertisingPayload(GapAdvertisingData::SERVICE_DATA,beaconPayload_url, sizeof(beaconPayload_url));
 
    ble.setAdvertisingType(GapAdvertisingParams::ADV_NON_CONNECTABLE_UNDIRECTED);
    
    ble.setAdvertisingInterval(160);
    
    ble.setTxPower(200);
    
    ble.startAdvertising();
    
}

int main(void)
{
    ble.init();
    
    bleUploadUrl();
    
    while(true) {
        ble.waitForEvent();
    }
}
