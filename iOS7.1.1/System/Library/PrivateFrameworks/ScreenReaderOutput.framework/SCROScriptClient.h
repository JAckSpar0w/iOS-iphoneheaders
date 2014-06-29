/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSLock, SCROConnection, SCRCTargetSelectorTimer;

@interface SCROScriptClient : NSObject {

	NSLock* _lock;
	SCROConnection* _connection;
	SCRCTargetSelectorTimer* _timer;
	bool _isReady;

}
+(id)allocWithZone:(NSZone)arg1 ;
+(void)initialize;
+(id)sharedScriptClient;
-(bool)_isReady;
-(oneway void)release;
-(id)retain;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)_lazyConnection;
-(void)_killConnection;
-(bool)runScriptFile:(id)arg1 ;
-(void)handleCallback:(id)arg1 ;
@end
