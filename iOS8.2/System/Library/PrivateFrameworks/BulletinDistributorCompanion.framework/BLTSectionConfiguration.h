/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface BLTSectionConfiguration : NSObject {

	NSDictionary* _configurations;

}
+(id)sharedSectionConfiguration;
-(id)init;
-(id)_loadConfigurations;
-(char)hasSectionIDOptedOutOfCoordination:(id)arg1 ;
-(char)hasSectionIDOptedOutOfAttachmentCoordination:(id)arg1 ;
@end
