/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCPhotoEvaluator : NSObject
+(id)sharedInstance;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)retain;
-(void)dealloc;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)evaluateImage:(CGImageRef)arg1 forCriteria:(int)arg2 inRect:(CGRect)arg3 ;
-(oneway void)release;
@end
