/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:51:52 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/revisiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GSUserDefaults : NSObject {

	NSMutableDictionary* _cache;

}
+(id)defaults;
-(id)objectForKey:(id)arg1 validateWithBlock:(/*^block*/id)arg2 ;
-(id)init;
-(int)intForKey:(id)arg1 min:(int)arg2 max:(int)arg3 byDefault:(int)arg4 ;
-(double)doubleForKey:(id)arg1 min:(double)arg2 max:(double)arg3 byDefault:(double)arg4 ;
-(char)boolForKey:(id)arg1 byDefault:(char)arg2 ;
@end
