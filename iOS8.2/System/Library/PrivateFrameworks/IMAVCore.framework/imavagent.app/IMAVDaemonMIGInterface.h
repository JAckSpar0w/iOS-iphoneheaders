/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/imavagent.app/imavagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IMAVDaemonMIGInterface : NSObject {

	NSObject*<OS_xpc_object> _server;
	int _notifyToken;
	id _delegate;
	char _shuttingDown;

}

@property (assign) id<IMAVDaemonMIGInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)acceptIncomingGrantRequests;
-(void)denyIncomingGrantRequests;
-(void)__setupServer;
-(void)setDelegate:(id<IMAVDaemonMIGInterfaceDelegate>)arg1 ;
-(id<IMAVDaemonMIGInterfaceDelegate>)delegate;
@end
