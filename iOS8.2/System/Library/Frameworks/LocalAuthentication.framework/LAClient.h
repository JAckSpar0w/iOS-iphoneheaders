/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LocalAuthentication/LAContextXPC.h>

@protocol LAContextXPC;
@class NSXPCConnection, NSError, NSMutableArray, NSString, NSData;

@interface LAClient : NSObject <LAContextXPC> {

	id<LAContextXPC> _remoteContext;
	NSXPCConnection* _daemonConnection;
	NSError* _permanentError;
	NSMutableArray* _callInvalidationBlocks;
	NSString* _creatorDisplayName;
	NSData* _externalizedContext;

}

@property (readonly) NSString * creatorDisplayName;              //@synthesize creatorDisplayName=_creatorDisplayName - In the implementation block
@property (readonly) NSData * externalizedContext;               //@synthesize externalizedContext=_externalizedContext - In the implementation block
+(void)clientWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
+(id)clientWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 error:(id*)arg3 ;
-(NSString *)creatorDisplayName;
-(NSData *)externalizedContext;
-(void)_setPermanentError:(id)arg1 ;
-(id)initWithDaemonConnection:(id)arg1 remoteContext:(id)arg2 constInfo:(id)arg3 ;
-(void)evaluatePolicy:(int)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)failProcessedEvent:(int)arg1 failureError:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)enterPassword:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)invalidate;
@end
