/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface GKBadgeController : NSObject
+(id)sharedController;
-(void)setBadgeCount:(unsigned)arg1 forBundleID:(id)arg2 badgeType:(unsigned)arg3 ;
-(BOOL)isBadgingEnabledForBundleID:(id)arg1 ;
-(void)badgeApplicationWithBundleID:(id)arg1 badgeCount:(unsigned)arg2 ;
-(id)valueKeyForBadgeType:(unsigned)arg1 ;
-(void)postBadgesForCacheObject:(id)arg1 ;
-(unsigned)badgeCountForBundleID:(id)arg1 badgeType:(unsigned)arg2 ;
-(void)badgeAllApplications;
-(void)unbadgeAllApplications;
@end
