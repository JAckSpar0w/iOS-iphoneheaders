/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CRDelayedWorkQueue : NSObject {

	int _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _requests;

}
-(void)cancelWorkForKey:(id)arg1 ;
-(char)scheduleWorkForKey:(id)arg1 afterDelay:(double)arg2 work:(/*^block*/id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)flush;
@end
