#include "mbed.h"
#include "BLEDevice.h"

BLEDevice  ble;

static const uint16_t uuid16_list[]        = {0x00A0};

const static uint8_t beaconPayload_tlm[] = {
    0xaa,
    0xfe,
 
    // TLM
 
    0x20, // Frame Type
    0x00, // Version
    0x01, // VBATT[0]
    0x00, // VBATT[1]
    0x02, // TEMP[0]
    0x00, // TEMP[1]
    0x03, // ADV[0]
    0x00, // ADV[1]
    0x00, // ADV[2]
    0x00, // ADV[3]
    0x04, // SEC_CNT[0]
    0x00, // SEC_CNT[1]
    0x00, // SEC_CNT[2]
    0x00 // SEC_CNT[3]
};

void bleUploadTLM()
{
    ble.accumulateAdvertisingPayload(GapAdvertisingData::BREDR_NOT_SUPPORTED|GapAdvertisingData::LE_GENERAL_DISCOVERABLE);
    
    ble.accumulateAdvertisingPayload(GapAdvertisingData::COMPLETE_LIST_16BIT_SERVICE_IDS, (uint8_t *)uuid16_list, sizeof(uuid16_list));
    
    ble.accumulateAdvertisingPayload(GapAdvertisingData::SERVICE_DATA, beaconPayload_tlm, sizeof(beaconPayload_tlm));
    
    ble.setAdvertisingType(GapAdvertisingParams::ADV_NON_CONNECTABLE_UNDIRECTED);
    
    ble.setAdvertisingInterval(160);
    
    ble.setTxPower(200);
    
    ble.startAdvertising();
}
int main(void)
{
    ble.init();

    bleUploadTLM();
 
    while(true) {
        ble.waitForEvent();
    }
}
