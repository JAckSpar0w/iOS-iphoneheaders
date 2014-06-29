/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackupAgent2/BackupAgent2-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableDictionary, NSString, NSDate, NSDictionary;

@interface MBApp : NSObject <NSCopying> {

	NSMutableDictionary* _plist;

}

@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,retain) NSString * containerDir; 
@property (nonatomic,readonly) NSString * safeHarborDir; 
@property (nonatomic,retain) NSDate * datePlacedInSafeHarbor; 
@property (nonatomic,readonly) NSDictionary * infoPlist;                         //@synthesize plist=_plist - In the implementation block
@property (nonatomic,readonly) BOOL isPlaceholder; 
@property (nonatomic,readonly) BOOL isSystemApp; 
@property (getter=isSafeHarbor,nonatomic,readonly) BOOL safeHarbor; 
+(id)appWithPropertyList:(id)arg1 ;
+(id)appWithBundleID:(id)arg1 ;
+(id)safeHarborWithPath:(id)arg1 ;
-(id)bundleID;
-(id)bundleVersion;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)domain;
-(id)copyWithZone:(NSZone)arg1 ;
-(BOOL)isPlaceholder;
-(id)propertyListForBackupProperties;
-(BOOL)isSafeHarbor;
-(id)datePlacedInSafeHarbor;
-(id)safeHarborDir;
-(void)setContainerDir:(id)arg1 ;
-(void)setDatePlacedInSafeHarbor:(id)arg1 ;
-(id)propertyListForSafeHarborInfo;
-(id)containerDir;
-(BOOL)isEqualToApp:(id)arg1 ;
-(id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)arg1 ;
-(BOOL)isSystemApp;
-(id)placeholderDomainWithCache:(id)arg1 ;
-(id)infoPlist;
-(id)initWithPropertyList:(id)arg1 ;
@end
