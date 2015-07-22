/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <pairedsyncd/PSYConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class PSYConnection, NSObject, NSString;

@interface PSDSyncInitiator : NSObject <PSYConnectionDelegate> {

	PSYConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSyncInitiator;
-(void)syncSchedulerDidComplete:(id)arg1 ;
-(void)syncSchedulerDidCancel:(id)arg1 ;
-(void)startSyncIfNeeded;
-(BOOL)needsSync;
-(BOOL)canSync;
-(id)init;
-(void)deviceSyncStateDidChange:(id)arg1 ;
-(void)unregisterForFirstKeybagUnlockNotification;
-(void)keybagStateChanged;
-(void)registerForFirstKeybagUnlockNotification;
-(void)connectionDidBecomeInvalid:(id)arg1 ;
@end
