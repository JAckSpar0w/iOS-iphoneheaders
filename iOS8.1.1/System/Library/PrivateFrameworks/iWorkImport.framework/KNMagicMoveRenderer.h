/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNTransitionRenderer.h>

@class NSMutableArray, NSMapTable, NSDate, TSDFPSCounter, NSTimer, NSOperationQueue;

@interface KNMagicMoveRenderer : KNTransitionRenderer {

	NSMutableArray* mMatches;
	NSMutableArray* mAnimatedLayersRetained;
	NSMutableArray* mLayerToOldParentArray;
	NSMapTable* mLayerToOldHiddenMap;
	NSMutableArray* mMorphMatches;
	NSDate* mLastMorphDate;
	TSDFPSCounter* mMorphFPSCounter;
	double mMorphFrameDurationAverage;
	NSTimer* mMorphUpdateTimer;
	BOOL mIsRealtime;
	BOOL mIsDone;
	NSOperationQueue* mMorphOperationQueue;
	NSMutableArray* mMorphLayerUpdates;
	double mAnimationStartTime;

}
+(void)generateLayersForTexture:(id)arg1 inTextureSet:(id)arg2 isOutgoing:(BOOL)arg3 addToArray:(id)arg4 oldHiddenValuesMap:(id)arg5 ;
+(void)generateLayersForMatches:(id)arg1 addToArray:(id)arg2 oldHiddenValuesMap:(id)arg3 ;
-(void)setupPluginContext;
-(void)renderSlideIndex:(unsigned long long)arg1 ;
-(BOOL)addAnimationsAtTime:(double)arg1 relativeToCurrentMediaTime:(BOOL)arg2 ;
-(void)removeAnimationsAndFinish:(BOOL)arg1 ;
-(id)initWithEffectClass:(Class)arg1 direction:(unsigned long long)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6 ;
-(void)teardownTransitionIsExitingShow:(BOOL)arg1 ;
-(void)renderOutgoingSlideAndPrecacheIncomingSlide;
-(void)animateWithDelay:(double)arg1 ;
-(void)updateAnimationsForLayerTime:(double)arg1 ;
-(void)p_restoreLayerHierarchy;
-(void)p_updateMorphAnimations;
-(void)p_generateMagicMoveMatches;
-(void)addLayersForSlideIndex:(unsigned long long)arg1 ;
-(void)p_updateMorphAnimationsForTime:(double)arg1 ;
-(void)p_cleanUpUpdateMorphAnimations;
-(void)dealloc;
-(void)stopAnimations;
@end
