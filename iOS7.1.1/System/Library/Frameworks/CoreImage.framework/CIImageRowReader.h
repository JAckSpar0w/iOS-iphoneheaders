/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/ImageRowReading.h>

@interface CIImageRowReader : NSObject <ImageRowReading> {

	unsigned long long height;
	unsigned long long width;
	unsigned long long bpr;
	void* data;
	short red;
	short green;
	short blue;
	short alpha;
	CGColorSpaceRef cs;

}
+(id)forImage:(id)arg1 usingContext:(id)arg2 ;
+(id)fromImage:(CGImageRef)arg1 ;
+(id)forImage:(id)arg1 downscaleToMax:(unsigned)arg2 colorspace:(CGColorSpaceRef)arg3 ;
+(id)forImage:(id)arg1 downscaleToMax:(unsigned)arg2 colorspace:(CGColorSpaceRef)arg3 usingContext:(id)arg4 ;
+(id)forImage:(id)arg1 usingContext:(id)arg2 colorspace:(CGColorSpaceRef)arg3 ;
+(id)fromImageFile:(id)arg1 ;
+(id)forImage:(id)arg1 downscaleToMax:(unsigned)arg2 ;
+(id)withDictionary:(id)arg1 ;
-(void)_dumpImage:(id)arg1 colorspace:(CGColorSpaceRef)arg2 ;
-(void)dumpImage:(id)arg1 ;
-(void)dumpImageAsDeviceRGB:(id)arg1 ;
-(void)dumpImageAsDict:(id)arg1 ;
-(void)dealloc;
-(short)alpha;
-(id)init;
-(unsigned long long)width;
-(unsigned long long)height;
-(short)red;
-(short)green;
-(short)blue;
-(const char*)rowAtIndex:(unsigned)arg1 ;
-(unsigned)bytesPerPixel;
@end
