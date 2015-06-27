/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:20:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UIButton.h>
#import <MPUFoundation/MPUTransportButton.h>
@class MPUTransportButtonEventHandler;


@protocol MPUTransportButton <NSObject>
@property (nonatomic,readonly) MPUTransportButtonEventHandler * transportButtonEventHandler; 
@required
-(void)applyTransportButtonAttributes:(id)arg1;
-(MPUTransportButtonEventHandler *)transportButtonEventHandler;

@end


@class MPUTransportButtonEventHandler, NSString;

@interface MPUTransportButton : UIButton <MPUTransportButton> {

	MPUTransportButtonEventHandler* _transportButtonEventHandler;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MPUTransportButtonEventHandler * transportButtonEventHandler; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)isEnabled;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)shouldTrack;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)applyTransportButtonAttributes:(id)arg1 ;
-(MPUTransportButtonEventHandler *)transportButtonEventHandler;
@end
