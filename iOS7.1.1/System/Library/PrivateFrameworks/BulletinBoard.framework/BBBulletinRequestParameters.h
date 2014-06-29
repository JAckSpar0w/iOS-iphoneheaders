/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSSet;

@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _publisherDestination;
	long long _maximumCount;
	NSSet* _enabledSectionIDs;

}

@property (nonatomic,readonly) unsigned long long publisherDestination;              //@synthesize publisherDestination=_publisherDestination - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumCount; 
@property (nonatomic,readonly) NSSet * enabledSectionIDs; 
+(bool)supportsSecureCoding;
+(id)requestParametersForDestination:(unsigned long long)arg1 withMaximumCount:(long long)arg2 enabledSectionIDs:(id)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(unsigned long long)maximumCount;
-(id)initWithDestination:(unsigned long long)arg1 maximumCount:(long long)arg2 enabledSectionIDs:(id)arg3 ;
-(id)enabledSectionIDs;
-(unsigned long long)publisherDestination;
@end
