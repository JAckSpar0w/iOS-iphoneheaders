/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKListCacheObject.h>

@class NSString;

@interface GKCompatibilityListCacheObject : GKListCacheObject {

	NSString* _version;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * version;               //@synthesize version=_version - In the implementation block
+(Class)entryClass;
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 ;
-(id)bundleID;
-(void)setVersion:(id)arg1 ;
-(id)version;
-(void)setBundleID:(id)arg1 ;
@end
