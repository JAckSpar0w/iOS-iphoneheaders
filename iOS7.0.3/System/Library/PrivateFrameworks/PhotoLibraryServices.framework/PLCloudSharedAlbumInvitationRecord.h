/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSNumber, NSDate, PLCloudSharedAlbum, NSArray;

@interface PLCloudSharedAlbumInvitationRecord : PLManagedObject

@property (nonatomic,@dynamic,retain) NSString * albumGUID; 
@property (nonatomic,@dynamic,retain) NSString * cloudGUID; 
@property (nonatomic,@dynamic,retain) NSNumber * invitationState; 
@property (nonatomic,@dynamic,retain) NSNumber * invitationStateLocal; 
@property (assign,nonatomic,@dynamic) NSNumber * inviteeEmailKey; 
@property (assign,nonatomic,@dynamic) NSString * inviteeHashedPersonID; 
@property (nonatomic,@dynamic,retain) NSString * inviteeFirstName; 
@property (nonatomic,@dynamic,retain) NSString * inviteeLastName; 
@property (nonatomic,@dynamic,retain) NSString * inviteeFullName; 
@property (assign,nonatomic,@dynamic) BOOL isMine; 
@property (nonatomic,@dynamic,retain) NSDate * inviteeSubscriptionDate; 
@property (nonatomic,@dynamic,retain) PLCloudSharedAlbum * album; 
@property (nonatomic,readonly) NSArray * inviteeEmails; 
@property (nonatomic,readonly) NSArray * inviteePhones; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(id)insertNewInvitationRecordIntoAlbum:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 emails:(id)arg5 phones:(id)arg6 inLibrary:(id)arg7 ;
+(id)cloudSharedAlbumInvitationRecordWithGUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)cloudSharedAlbumInvitationRecordsWithAlbumGUID:(id)arg1 inLibrary:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)delete;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)willSave;
-(id)inviteeDisplayNameIncludingEmail:(BOOL)arg1 ;
-(id)inviteeEmails;
-(id)inviteePhones;
-(void)setInviteeEmails:(id)arg1 phones:(id)arg2 ;
-(id)invitationStateDescription;
@end
