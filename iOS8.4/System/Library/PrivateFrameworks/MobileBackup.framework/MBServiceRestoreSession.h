/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDate;

@interface MBServiceRestoreSession : NSObject {

	NSString* _backupUDID;
	unsigned long long _snapshotID;
	NSDate* _startDate;
	BOOL _finishing;
	BOOL _cancelled;

}

@property (nonatomic,retain) NSString * backupUDID;                           //@synthesize backupUDID=_backupUDID - In the implementation block
@property (assign,nonatomic) unsigned long long snapshotID;                   //@synthesize snapshotID=_snapshotID - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (assign,getter=isFinishing,nonatomic) BOOL finishing;               //@synthesize finishing=_finishing - In the implementation block
@property (assign,getter=wasCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
+(id)currentRestoreSession;
+(void)clearCurrentRestoreSession;
+(id)restoreSessionWithPropertyList:(id)arg1 ;
-(void)setBackupUDID:(NSString *)arg1 ;
-(void)setSnapshotID:(unsigned long long)arg1 ;
-(void)setFinishing:(BOOL)arg1 ;
-(void)saveAtPath:(id)arg1 ;
-(BOOL)isFinishing;
-(id)propertyList;
-(id)initWithPropertyList:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)wasCancelled;
-(NSString *)backupUDID;
-(unsigned long long)snapshotID;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
@end
