/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDKnobTracker.h>
#import <iWorkImport/TSDDecorator.h>

@class CAShapeLayer;

@interface TSDShapeControlKnobTracker : TSDKnobTracker <TSDDecorator> {

	CAShapeLayer* mGuideLayer;

}
-(id)initWithRep:(id)arg1 knob:(id)arg2 ;
-(void)beginMovingKnob;
-(void)endMovingKnob;
-(void)p_hideHUD;
-(void)moveKnobToRepPosition:(CGPoint)arg1 ;
-(id)decoratorOverlayLayers;
-(void)p_updateGuideLayer;
-(void)p_hideGuideLayer;
-(void)p_updateHUDAtPoint:(CGPoint)arg1 ;
-(id)shapeControlRep;
-(id)shapeControlLayout;
-(void)dealloc;
@end
