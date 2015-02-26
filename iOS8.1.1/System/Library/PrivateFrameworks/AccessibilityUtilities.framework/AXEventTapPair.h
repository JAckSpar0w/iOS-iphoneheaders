/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSString;

@interface AXEventTapPair : NSObject {

	int priority;
	int _type;
	/*^block*/id handler;
	NSString* identifier;
	IOHIDEventSystemClientRef _systemClient;

}

@property (nonatomic,copy) id handler; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int priority; 
@property (assign,nonatomic) int type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) IOHIDEventSystemClientRef systemClient;              //@synthesize systemClient=_systemClient - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPriority:(int)arg1 ;
-(int)priority;
-(IOHIDEventSystemClientRef)systemClient;
-(void)setSystemClient:(IOHIDEventSystemClientRef)arg1 ;
@end
