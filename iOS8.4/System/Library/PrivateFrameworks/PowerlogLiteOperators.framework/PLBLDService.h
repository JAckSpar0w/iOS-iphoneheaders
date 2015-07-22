/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLService.h>

@class PLXPCResponderOperatorComposition, PLNSNotificationOperatorComposition, NSDictionary, PLNSTimerOperatorComposition;

@interface PLBLDService : PLService {

	PLXPCResponderOperatorComposition* _xpcResponderUIBattery;
	PLXPCResponderOperatorComposition* _xpcResponderUIBatteryForModels;
	PLNSNotificationOperatorComposition* _dailyTaskNotification;
	NSDictionary* _nonAppBundleIDsWhitelist;
	double _appBreakdownThresholdPercent;
	PLNSTimerOperatorComposition* _runLoggingTimer;

}

@property (retain) PLXPCResponderOperatorComposition * xpcResponderUIBattery;                       //@synthesize xpcResponderUIBattery=_xpcResponderUIBattery - In the implementation block
@property (retain) PLXPCResponderOperatorComposition * xpcResponderUIBatteryForModels;              //@synthesize xpcResponderUIBatteryForModels=_xpcResponderUIBatteryForModels - In the implementation block
@property (retain) PLNSNotificationOperatorComposition * dailyTaskNotification;                     //@synthesize dailyTaskNotification=_dailyTaskNotification - In the implementation block
@property (readonly) NSDictionary * nonAppBundleIDsWhitelist;                                       //@synthesize nonAppBundleIDsWhitelist=_nonAppBundleIDsWhitelist - In the implementation block
@property (readonly) double appBreakdownThresholdPercent;                                           //@synthesize appBreakdownThresholdPercent=_appBreakdownThresholdPercent - In the implementation block
@property (retain) PLNSTimerOperatorComposition * runLoggingTimer;                                  //@synthesize runLoggingTimer=_runLoggingTimer - In the implementation block
+(void)load;
+(id)defaults;
+(id)entryEventPointDefinitions;
+(id)entryEventPointBUILogging;
-(id)init;
-(void)initOperatorDependancies;
-(id)screenLock:(id)arg1 ;
-(void)initNonAppBundleIDsWhitelist;
-(void)logEventPointBUI;
-(id)UIQueryResponse:(id)arg1 ;
-(void)setXpcResponderUIBattery:(PLXPCResponderOperatorComposition *)arg1 ;
-(id)UIQueryResponseForModels:(id)arg1 ;
-(void)setXpcResponderUIBatteryForModels:(PLXPCResponderOperatorComposition *)arg1 ;
-(id)recommendSetting:(double)arg1 inTimeIntervalRange:(PLTimeIntervalRange)arg2 ;
-(id)deletedAppSet;
-(id)webAppSet;
-(id)daemonTransformation;
-(id)aggregateResult:(id)arg1 withBucketLength:(double)arg2 inTimeIntervalRange:(PLTimeIntervalRange)arg3 queryType:(int)arg4 withValidBundle:(id)arg5 withDeletedApps:(id)arg6 withWebApps:(id)arg7 withDaemonTransformation:(id)arg8 ;
-(void)logEventPointBUIWithUIData:(id)arg1 forBLDRetailData:(BOOL)arg2 ;
-(void)bldRetailResponse:(id)arg1 withValidBundle:(id)arg2 withDeletedApps:(id)arg3 withWebApps:(id)arg4 withDaemonTransformation:(id)arg5 ;
-(id)aggregateStatsResultWithBucketLength:(double)arg1 inTimeIntervalRange:(PLTimeIntervalRange)arg2 ;
-(void)storeBLDRetailResponse:(PLTimeIntervalRange)arg1 withArgs:(id)arg2 withKey:(id)arg3 withValidBundle:(id)arg4 withDeletedApps:(id)arg5 withWebApps:(id)arg6 withDaemonTransformation:(id)arg7 ;
-(id)bldRetailResponseForRange:(PLTimeIntervalRange)arg1 withArgs:(id)arg2 withValidBundle:(id)arg3 withDeletedApps:(id)arg4 withWebApps:(id)arg5 withDaemonTransformation:(id)arg6 ;
-(BOOL)isALSON;
-(id)combineEntitiesInArray:(id)arg1 withTransformation:(id)arg2 ;
-(id)reaccountExchangeEntries:(id)arg1 ;
-(int)appTypeForBundleID:(id)arg1 withValidBundles:(id)arg2 withDeletedApps:(id)arg3 withWebApps:(id)arg4 ;
-(BOOL)shouldAppBeDisplayed:(int)arg1 forQuery:(int)arg2 ;
-(id)deletedAppNameForBundleID:(id)arg1 ;
-(void)setQualifiersForAppArray:(id)arg1 withTotalEnergy:(double)arg2 ;
-(id)reviseAppEnergyBreakdown:(id)arg1 withSumOfEnergyPercent:(int)arg2 ;
-(double)getAppBreakdownThreshold;
-(void)addToDaemonTransformation:(id)arg1 withPluginEntry:(id)arg2 ;
-(void)addToDaemonTransformationForGizmo:(id)arg1 ;
-(BOOL)isStringAValidBundleName:(id)arg1 ;
-(NSDictionary *)nonAppBundleIDsWhitelist;
-(BOOL)isStringAValidName:(id)arg1 ;
-(BOOL)qualifierThresholdPass:(id)arg1 withQualifierRules:(id)arg2 forQualifierEntryKey:(id)arg3 ;
-(BOOL)setQualifier:(int)arg1 onBundle:(id)arg2 ;
-(id)combineAndTrimAppQualifiersArray:(id)arg1 ;
-(void)trimQualifiers:(id)arg1 combineOne:(id)arg2 combineTwo:(id)arg3 combineInto:(id)arg4 ;
-(void)trimQualifiers:(id)arg1 removeQualifier:(id)arg2 ifQualifierPresent:(id)arg3 ;
-(void)logEventPointBUIForBLDRetail:(BOOL)arg1 ;
-(id)getBatteryDrainInRange:(PLTimeIntervalRange)arg1 ;
-(double)appBreakdownThresholdPercent;
-(void)fetchAggregateResultsInRange:(PLTimeIntervalRange)arg1 ;
-(double)totalEnergyReturned:(id)arg1 ;
-(id)getEntryForBundleName:(id)arg1 inAppArray:(id)arg2 ;
-(id)TestQuery:(id)arg1 ;
-(void)qualifierTesting;
-(PLXPCResponderOperatorComposition *)xpcResponderUIBattery;
-(PLXPCResponderOperatorComposition *)xpcResponderUIBatteryForModels;
-(PLNSNotificationOperatorComposition *)dailyTaskNotification;
-(void)setDailyTaskNotification:(PLNSNotificationOperatorComposition *)arg1 ;
-(PLNSTimerOperatorComposition *)runLoggingTimer;
-(void)setRunLoggingTimer:(PLNSTimerOperatorComposition *)arg1 ;
@end
