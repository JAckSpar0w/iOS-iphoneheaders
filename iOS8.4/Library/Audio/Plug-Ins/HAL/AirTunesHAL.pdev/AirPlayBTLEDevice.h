/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Library/Audio/Plug-Ins/HAL/AirTunesHAL.pdev/AirTunesHAL
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AirTunesHAL/AirTunesHAL-Structs.h>
@interface AirPlayBTLEDevice : NSObject {

	unsigned long long _lastQueryTicks;
	unsigned long long _lastUpdateTicks;
	SCD_Struct_Ai0 _lastAdvData;
	int _lastRSSI;
	CFDictionaryRef _lastInfo;
	HTTPClientPrivateRef _httpClient;
	unsigned long long _deviceID;
	unsigned char _soloCapable;
	unsigned char _supportsMediaControlPort;

}
@end
