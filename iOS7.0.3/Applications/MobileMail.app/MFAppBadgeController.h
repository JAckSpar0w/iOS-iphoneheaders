/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/BBObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, BBObserver;

@interface MFAppBadgeController : NSObject <BBObserverDelegate> {

	int _oldBadgeCount;
	NSObject<OS_dispatch_queue>* _queue;
	int _waitingCalculateRequests;
	NSMutableDictionary* _subsectionInfoByID;
	BBObserver* _observer;

}
-(void)setBadgeCount:(int)arg1 ;
-(void)_mailboxUserInfoDidChange:(id)arg1 ;
-(void)requestObserverState;
-(void)_nts_calculateBadgeCount;
-(void)_updateSubsections:(id)arg1 ;
-(void)_nts_getAccountsExcludedFromUnreadCount:(out id*)arg1 includeUnreadVIPs:(out BOOL*)arg2 ;
-(void)dealloc;
-(id)init;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 ;
@end
