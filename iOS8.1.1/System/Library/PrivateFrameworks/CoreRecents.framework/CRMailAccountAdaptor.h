/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary;

@interface CRMailAccountAdaptor : NSObject {

	int _lock;
	NSDictionary* _cachedAccountInfo;

}
-(id)senderEmailAddresses;
-(BOOL)isSyncingDisabledForAccountWithAddress:(id)arg1 ;
-(BOOL)restrictedSyncingForAccountContainingAddress:(id)arg1 ;
-(id)copyMailAccountInfo;
-(id)_copyMailAccountInfo;
-(void)resetCachedAccountInfo;
-(void)dealloc;
-(id)init;
@end
