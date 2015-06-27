/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSSet;

@interface GKCompatibilityEntryInternal : GKInternalRepresentation {

	NSString* _bundleID;
	NSSet* _versions;

}

@property (nonatomic,retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSSet * versions;                 //@synthesize versions=_versions - In the implementation block
+(id)secureCodedPropertyKeys;
-(NSSet *)versions;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setVersions:(NSSet *)arg1 ;
@end
