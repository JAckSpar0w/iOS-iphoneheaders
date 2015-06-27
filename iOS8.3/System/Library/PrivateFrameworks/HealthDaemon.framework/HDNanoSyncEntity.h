/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:57:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDNanoSyncEntity
@required
+(long long)finalAnchorForNanoSyncRestoreWithStore:(id)arg1 deviceSourceIdentifier:(id)arg2 nowDate:(id)arg3 healthDaemon:(id)arg4 error:(id*)arg5;
+(id)objectsForNanoSyncRestoreWithStore:(id)arg1 deviceSourceIdentifier:(id)arg2 nowDate:(id)arg3 syncAnchorRange:(HDSyncAnchorRange)arg4 lastSyncAnchor:(long long*)arg5 healthDaemon:(id)arg6 error:(id*)arg7;
+(unsigned)syncObjectLimitForNanoSyncMessage;
+(int)nanoSyncObjectType;

@end
