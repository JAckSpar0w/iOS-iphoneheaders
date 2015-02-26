/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface GKRingBuffer : NSObject {

	void* ringBufRef;
	unsigned long endTime;
	unsigned long capacity;
	unsigned long bytesPerFrame;

}
-(void)dealloc;
-(id)init;
-(id)initWithCapacity:(unsigned long)arg1 bytesPerFrame:(unsigned long)arg2 ;
-(void)increaseCapacity:(unsigned long)arg1 ;
-(BOOL)store:(char*)arg1 numSamples:(unsigned long)arg2 timestamp:(unsigned long)arg3 ;
-(long)needsNewNumSamples:(unsigned long)arg1 timestamp:(unsigned long)arg2 ;
-(long)fetch:(char*)arg1 numSamples:(unsigned long)arg2 timestamp:(unsigned long)arg3 ;
@end
