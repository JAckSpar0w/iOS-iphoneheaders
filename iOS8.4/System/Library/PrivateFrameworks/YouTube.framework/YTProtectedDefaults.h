/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface YTProtectedDefaults : NSObject {

	NSMutableDictionary* _internalDictionary;
	BOOL _shouldSynchronize;
	NSString* _plistPath;

}
+(id)sharedInstance;
-(id)init;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_protectedDataAvailable;
-(void)_protectedDataUnvailable;
@end
