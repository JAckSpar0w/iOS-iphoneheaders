/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:02:53 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface iAP2PowerSourceInfo : NSObject {

	unsigned short availableCurrentForDevice;
	char isValidAvailableCurrentForDevice;
	char shouldChargeDeviceBattery;
	char isValidShouldChargeDeviceBattery;
	unsigned paramCountArr[3];

}

@property (assign) unsigned short availableCurrentForDevice; 
@property (assign) char shouldChargeDeviceBattery; 
@property (assign) char isValidAvailableCurrentForDevice; 
@property (assign) char isValidShouldChargeDeviceBattery; 
-(unsigned)paramCount:(int)arg1 ;
-(void)incrementParamCount:(int)arg1 ;
-(int)processPowerSourceUpdate:(id)arg1 ;
-(unsigned short)availableCurrentForDevice;
-(void)setAvailableCurrentForDevice:(unsigned short)arg1 ;
-(char)shouldChargeDeviceBattery;
-(void)setShouldChargeDeviceBattery:(char)arg1 ;
-(char)isValidAvailableCurrentForDevice;
-(void)setIsValidAvailableCurrentForDevice:(char)arg1 ;
-(char)isValidShouldChargeDeviceBattery;
-(void)setIsValidShouldChargeDeviceBattery:(char)arg1 ;
-(void)dealloc;
-(id)init;
@end
