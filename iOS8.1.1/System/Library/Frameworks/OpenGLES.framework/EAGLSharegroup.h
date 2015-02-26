/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpenGLES/OpenGLES-Structs.h>
@class NSString;

@interface EAGLSharegroup : NSObject {

	EAGLSharegroupPrivate* _private;
	NSString* debugLabel;

}

@property (nonatomic,copy) NSString * debugLabel; 
-(void)setDebugLabel:(NSString *)arg1 ;
-(unsigned long long)APIs;
-(id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(BOOL)arg2 ;
-(NSString *)debugLabel;
-(void)loadGLIPlugin:(_GLDPixelFormatRec*)arg1 sharedWithCompute:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(id)initWithAPI:(unsigned long long)arg1 ;
-(GLISharedRecRef)getGLIShared;
@end
