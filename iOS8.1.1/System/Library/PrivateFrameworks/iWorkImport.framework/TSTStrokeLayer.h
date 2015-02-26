/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@interface TSTStrokeLayer : NSObject <NSCopying> {

	vector<TSTStrokeLayerRun, std::__1::allocator<TSTStrokeLayerRun> >* mStrokeRuns;

}

@property (nonatomic,readonly) BOOL isEmpty; 
+(id)strokeLayer;
-(void)appendStroke:(id)arg1 inRange:(TSTSimpleRange)arg2 ;
-(void)insertStroke:(id)arg1 inRange:(TSTSimpleRange)arg2 ;
-(void)invalidateRange:(TSTSimpleRange)arg1 ;
-(id)findStrokeAndRangeAtIndex:(long long)arg1 ;
-(long long)startingIndex;
-(id)nextStrokeAndRange:(id)arg1 ;
-(void)p_mergeStrokeRunsAtPosition:(unsigned long long)arg1 ;
-(void)enumerateStrokesUsingBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
@end
