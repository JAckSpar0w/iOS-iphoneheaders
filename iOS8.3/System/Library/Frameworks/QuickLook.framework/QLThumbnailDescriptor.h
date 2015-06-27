/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:07:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@interface QLThumbnailDescriptor : NSObject {

	float _scaleFactor;
	CGSize _size;

}

@property (assign) CGSize size;                    //@synthesize size=_size - In the implementation block
@property (assign) float scaleFactor;              //@synthesize scaleFactor=_scaleFactor - In the implementation block
+(id)descriptorWithSize:(CGSize)arg1 scaleFactor:(float)arg2 ;
-(void)setScaleFactor:(float)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(float)scaleFactor;
@end
