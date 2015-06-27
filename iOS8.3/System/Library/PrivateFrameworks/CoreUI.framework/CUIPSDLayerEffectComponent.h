/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:22:27 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CUIPSDLayerEffectComponent : NSObject {

	char _visible;
	NSString* _name;

}

@property (assign) char visible;                 //@synthesize visible=_visible - In the implementation block
@property (retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setVisible:(char)arg1 ;
-(char)visible;
-(char)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)_colorFromShapeEffectValue:(/*function pointer*/void*)arg1 ;
-(unsigned)effectType;
@end
