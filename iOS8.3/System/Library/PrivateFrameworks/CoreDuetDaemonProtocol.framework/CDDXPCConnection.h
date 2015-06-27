/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:10:39 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSString, CDDebug;

@interface CDDXPCConnection : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	char _hasValidConnection;
	long long _sequenceNumber;
	NSString* _serviceName;
	CDDebug* _debug;

}

@property (readonly) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) CDDebug * debug;                     //@synthesize debug=_debug - In the implementation block
-(CDDebug *)debug;
-(char)establishConnection;
-(void)dealloc;
-(id)connection;
-(NSString *)serviceName;
-(id)initWithMachServiceName:(id)arg1 dispatchQueue:(id)arg2 ;
-(char)sendMessageAsync:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(id)makeStashWithId:(unsigned long long)arg1 ;
-(void)cancelConnection;
-(void)invalidateConnection;
-(void)sendBarrier:(/*^block*/id)arg1 ;
-(unsigned long long)sequenceNumber;
@end
