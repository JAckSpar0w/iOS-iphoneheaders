/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>

@interface BWSampleBufferSinkNode : BWSinkNode {

	/*^block*/id _sampleBufferAvailableHandler;

}

@property (nonatomic,copy) id sampleBufferAvailableHandler;              //@synthesize sampleBufferAvailableHandler=_sampleBufferAvailableHandler - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setSampleBufferAvailableHandler:(id)arg1 ;
-(id)initWithInputMediaType:(unsigned)arg1 ;
-(id)sampleBufferAvailableHandler;
@end
