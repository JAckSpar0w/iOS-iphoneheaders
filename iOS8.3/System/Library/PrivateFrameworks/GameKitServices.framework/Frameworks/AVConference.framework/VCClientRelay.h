/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:50:40 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCClientRelay : NSObject {

	int _vtpSocket;
	int _idsSocket;
	NSObject*<OS_dispatch_source> _idsReadSource;
	NSObject*<OS_dispatch_queue> _idsReadQueue;
	char _isConnectionResultSet;
	tagCONNRESULT* _connectionResult;
	sockaddr_storage _vtpDestination;
	unsigned _vtpDestinationLength;
	OpaqueFigThreadRef _vtpReceiveTID;
	char _stopVTPReceiveThread;

}

@property (readonly) char stopVTPReceiveThread;              //@synthesize stopVTPReceiveThread=_stopVTPReceiveThread - In the implementation block
-(void)dealloc;
-(void)setConnectionResult:(tagCONNRESULT*)arg1 ;
-(long)stopRelay;
-(long)startRelay;
-(id)initWithIDSSocket:(int)arg1 ;
-(long)setupVTPSocket;
-(char)relayIDSPacket;
-(char)relayVTPPacket;
-(char)stopVTPReceiveThread;
@end
