/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:38:57 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FaceCore/FaceCore-Structs.h>
@class NSString;

@interface FCRLandmark : NSObject {

	NSString* type;
	unsigned pointCount;
	CGPoint* points;

}

@property (readonly) NSString * type; 
@property (readonly) unsigned pointCount; 
@property (readonly) CGPoint* points; 
+(id)landmarkWithType:(id)arg1 pointCount:(unsigned)arg2 points:(CGPoint*)arg3 ;
-(void)dealloc;
-(NSString *)type;
-(id)initWithType:(id)arg1 pointCount:(unsigned)arg2 points:(CGPoint*)arg3 ;
-(CGPoint*)points;
-(unsigned)pointCount;
@end
