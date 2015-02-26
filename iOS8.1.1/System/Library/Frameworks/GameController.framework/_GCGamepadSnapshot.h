/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/_GCGamepad.h>
#import <GameController/_GCSnapshot.h>

@class NSData, GCMotion, NSString;

@interface _GCGamepadSnapshot : _GCGamepad <_GCSnapshot> {

	NSData* _snapshotData;
	GCMotion* _motion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSData * snapshotData;                             //@synthesize snapshotData=_snapshotData - In the implementation block
-(void)setSnapshotData:(NSData *)arg1 ;
-(id)motion;
-(id)initWithController:(id)arg1 snapshotData:(id)arg2 ;
-(void)set_motion:(id)arg1 ;
-(NSData *)snapshotData;
-(id)initWithSnapshotData:(id)arg1 ;
@end
