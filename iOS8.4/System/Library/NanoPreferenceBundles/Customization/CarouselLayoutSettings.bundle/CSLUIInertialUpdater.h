/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CSLUIInertialUpdaterDelegate;
#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
@class CADisplayLink;

@interface CSLUIInertialUpdater : NSObject {

	BOOL _dragging;
	CGPoint _velocity;
	CGPoint _lastVelocity;
	CGPoint _target;
	CGPoint _clientTarget;
	CGPoint _offset;
	double _lastDecelerationUpdate;
	double _lastInteractionTime;
	CADisplayLink* _displayLink;
	id<CSLUIInertialUpdaterDelegate> _delegate;

}

@property (assign,nonatomic) id<CSLUIInertialUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_computeDecelerationTarget;
-(BOOL)_needsDisplayLink;
-(void)_beginDraggingIfNecessary;
-(CGPoint)_constrainedOffset:(CGPoint)arg1 ;
-(void)_updateDelegateWithDelta:(CGPoint)arg1 ;
-(void)_handleDragDelta:(CGPoint)arg1 ;
-(void)_finalizeOffset;
-(void)_decelerate:(double)arg1 ;
-(void)addDragDelta:(CGPoint)arg1 ;
-(void)endUpdating;
-(void)endDragging;
-(void)setDelegate:(id<CSLUIInertialUpdaterDelegate>)arg1 ;
-(id<CSLUIInertialUpdaterDelegate>)delegate;
-(void)_displayLinkFired:(id)arg1 ;
-(void)_updateDisplayLink;
@end
