/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SCATGestureProviderDelegate <NSObject>
@required
-(id)contentViewForGestureProvider:(id)arg1;
-(void)gestureProvider:(id)arg1 didShowFingers:(BOOL)arg2;
-(void)didChooseCreateCustomGestureFromGestureProvider:(id)arg1;
-(void)gestureProvider:(id)arg1 shouldResetScanningFromElement:(id)arg2;
-(void)shouldStartScanningGestureProvider:(id)arg1;
-(void)shouldEndScanningGestureProvider:(id)arg1;

@end
