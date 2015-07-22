/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AdSheet/AdSheet-Structs.h>
@class NSTimer;

@interface ADNetworkController : NSObject {

	SCDynamicStoreRef _store;
	NSTimer* _notificationTimer;
	int _networkType;
	int _localLatencyCount;
	double _localLatency;
	double _localLatencyStddev;
	double _localBandwidth;
	double _localBandwidthStddev;
	double _localBandwidthBytes;

}

@property (nonatomic,readonly) double localLatency;                      //@synthesize localLatency=_localLatency - In the implementation block
@property (nonatomic,readonly) double localLatencyStddev;                //@synthesize localLatencyStddev=_localLatencyStddev - In the implementation block
@property (nonatomic,readonly) int localLatencyCount;                    //@synthesize localLatencyCount=_localLatencyCount - In the implementation block
@property (nonatomic,readonly) double localBandwidth;                    //@synthesize localBandwidth=_localBandwidth - In the implementation block
@property (nonatomic,readonly) double localBandwidthStddev;              //@synthesize localBandwidthStddev=_localBandwidthStddev - In the implementation block
@property (nonatomic,readonly) double localBandwidthBytes;               //@synthesize localBandwidthBytes=_localBandwidthBytes - In the implementation block
+(id)sharedNetworkController;
-(void)_checkForNetworkAndNotify;
-(void)_checkForNetwork;
-(void)resetNetworkStatistics;
-(void)_recordLatency:(double)arg1 ;
-(double)localLatencyStddev;
-(void)_recordBandwidth:(double)arg1 bytes:(double)arg2 ;
-(double)localBandwidthStddev;
-(void)_scheduleCheckForNetwork;
-(double)localLatency;
-(int)localLatencyCount;
-(double)localBandwidth;
-(double)localBandwidthBytes;
-(int)networkType;
-(void)start;
@end
