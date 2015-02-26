/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRTransferServerDelegate.h>

@protocol TRDeviceSetupServerDelegate;
@class TRTransferServer;

@interface TRDeviceSetupServer : NSObject <TRTransferServerDelegate> {

	TRTransferServer* _transferServer;
	BOOL _cancelledSetupInProgress;
	BOOL _setupInProgress;
	BOOL _started;
	<TRDeviceSetupServerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <TRDeviceSetupServerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)start;
-(void)stop;
-(void)server:(id)arg1 didFailToReceiveData:(id)arg2 ;
-(void)serverWillReceiveData:(id)arg1 ;
-(id)server:(id)arg1 didReceiveData:(id)arg2 ;
-(void)cancelActiveSetup;
-(void).cxx_destruct;
@end
