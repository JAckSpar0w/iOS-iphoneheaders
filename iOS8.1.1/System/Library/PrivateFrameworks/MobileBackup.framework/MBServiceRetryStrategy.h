/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class MBServiceEngine;

@interface MBServiceRetryStrategy : NSObject {

	MBServiceEngine* _engine;
	double _lastAttemptStartTime;
	unsigned long long _consecutiveRetryCount;
	double _consecutiveRetryStartTime;
	unsigned long long _totalRetryCount;
	unsigned long long _softConsecutiveRetryLimit;
	unsigned long long _hardConsecutiveRetryLimit;
	double _resetConsecutiveRetriesTimeInterval;
	double _forcedRetryTimeInterval;
	double _networkRetryTimeInterval;
	double _maximumServiceUnavailableRetryInterval;

}

@property (assign,nonatomic) unsigned long long consecutiveRetryCount;                   //@synthesize consecutiveRetryCount=_consecutiveRetryCount - In the implementation block
@property (assign,nonatomic) unsigned long long softConsecutiveRetryLimit;               //@synthesize softConsecutiveRetryLimit=_softConsecutiveRetryLimit - In the implementation block
@property (assign,nonatomic) unsigned long long hardConsecutiveRetryLimit;               //@synthesize hardConsecutiveRetryLimit=_hardConsecutiveRetryLimit - In the implementation block
@property (assign,nonatomic) double resetConsecutiveRetriesTimeInterval;                 //@synthesize resetConsecutiveRetriesTimeInterval=_resetConsecutiveRetriesTimeInterval - In the implementation block
@property (assign,nonatomic) double forcedRetryTimeInterval;                             //@synthesize forcedRetryTimeInterval=_forcedRetryTimeInterval - In the implementation block
@property (assign,nonatomic) double networkRetryTimeInterval;                            //@synthesize networkRetryTimeInterval=_networkRetryTimeInterval - In the implementation block
@property (assign,nonatomic) double maximumServiceUnavailableRetryInterval;              //@synthesize maximumServiceUnavailableRetryInterval=_maximumServiceUnavailableRetryInterval - In the implementation block
-(unsigned long long)consecutiveRetryCount;
-(unsigned long long)softConsecutiveRetryLimit;
-(BOOL)shouldRetryAfterError:(id)arg1 hard:(BOOL)arg2 ;
-(BOOL)wouldRetry;
-(BOOL)canRetryAfterError:(id)arg1 ;
-(id)initWithEngine:(id)arg1 ;
-(void)setConsecutiveRetryCount:(unsigned long long)arg1 ;
-(BOOL)_shouldResetConsecutiveRetryCounter;
-(id)_updateAccountIfNeededAfterError:(id)arg1 ;
-(double)_sleepIntervalAfterError:(id)arg1 ;
-(void)_incrementKey:(id)arg1 ;
-(BOOL)_shouldForceRetry;
-(void)setSoftConsecutiveRetryLimit:(unsigned long long)arg1 ;
-(unsigned long long)hardConsecutiveRetryLimit;
-(void)setHardConsecutiveRetryLimit:(unsigned long long)arg1 ;
-(double)resetConsecutiveRetriesTimeInterval;
-(void)setResetConsecutiveRetriesTimeInterval:(double)arg1 ;
-(double)forcedRetryTimeInterval;
-(void)setForcedRetryTimeInterval:(double)arg1 ;
-(double)networkRetryTimeInterval;
-(void)setNetworkRetryTimeInterval:(double)arg1 ;
-(double)maximumServiceUnavailableRetryInterval;
-(void)setMaximumServiceUnavailableRetryInterval:(double)arg1 ;
@end
