//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBCharacteristic, CBPeripheral, EAAccessory, EASession, NSMutableData, NSStream, NSString;

@interface Device : NSObject
{
    EAAccessory *_accessory;
    EASession *_session;
    CBPeripheral *_peripheral;
    CBCharacteristic *_writeCharacter;
    CBCharacteristic *_notifyCharacter;
    NSMutableData *_receiveData;
    NSMutableData *_sendingData;
    NSString *_MAC;
    BOOL _errorFlag;
    BOOL _isSending;
    BOOL _isConnectedBy3rdApp;
    int _state;
    long long _did;
    long long _sid;
    NSStream *_input;
    NSStream *_output;
    NSString *_Name;
    int _profileConnectState;
    int _profileType;
    CBCharacteristic *_pedometerProfileCurMeasurementCharacter;
    CBCharacteristic *_pedometerProfileTargetCharacter;
}

- (void).cxx_destruct;
@property(retain) NSString *MAC; // @synthesize MAC=_MAC;
@property(retain) NSString *Name; // @synthesize Name=_Name;
@property(retain) EAAccessory *accessory; // @synthesize accessory=_accessory;
- (void)dealloc;
@property long long did; // @synthesize did=_did;
@property BOOL errorFlag; // @synthesize errorFlag=_errorFlag;
- (id)init;
@property(retain) NSStream *input; // @synthesize input=_input;
@property BOOL isConnectedBy3rdApp; // @synthesize isConnectedBy3rdApp=_isConnectedBy3rdApp;
@property BOOL isSending; // @synthesize isSending=_isSending;
@property(retain) CBCharacteristic *notifyCharacter; // @synthesize notifyCharacter=_notifyCharacter;
@property(retain) NSStream *output; // @synthesize output=_output;
@property(retain) CBCharacteristic *pedometerProfileCurMeasurementCharacter; // @synthesize pedometerProfileCurMeasurementCharacter=_pedometerProfileCurMeasurementCharacter;
@property(retain) CBCharacteristic *pedometerProfileTargetCharacter; // @synthesize pedometerProfileTargetCharacter=_pedometerProfileTargetCharacter;
@property(retain) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property int profileConnectState; // @synthesize profileConnectState=_profileConnectState;
@property int profileType; // @synthesize profileType=_profileType;
@property(retain) NSMutableData *receiveData; // @synthesize receiveData=_receiveData;
@property(retain) NSMutableData *sendingData; // @synthesize sendingData=_sendingData;
@property(retain) EASession *session; // @synthesize session=_session;
@property long long sid; // @synthesize sid=_sid;
@property int state; // @synthesize state=_state;
@property(retain) CBCharacteristic *writeCharacter; // @synthesize writeCharacter=_writeCharacter;

@end
