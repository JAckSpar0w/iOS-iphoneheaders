/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class MBSBackupAttributes, NSData, NSMutableArray;

@interface MBSBackup : PBCodable {

	unsigned long long _keysLastModified;
	unsigned long long _quotaUsed;
	MBSBackupAttributes* _attributes;
	NSData* _backupUDID;
	NSMutableArray* _snapshots;
	SCD_Struct_MB5 _has;

}

@property (getter=canRestoreSystemFiles,nonatomic,readonly) BOOL restoreSystemFiles; 
@property (nonatomic,readonly) BOOL hasBackupUDID; 
@property (nonatomic,retain) NSData * backupUDID;                                                 //@synthesize backupUDID=_backupUDID - In the implementation block
@property (assign,nonatomic) BOOL hasQuotaUsed; 
@property (assign,nonatomic) unsigned long long quotaUsed;                                        //@synthesize quotaUsed=_quotaUsed - In the implementation block
@property (nonatomic,retain) NSMutableArray * snapshots;                                          //@synthesize snapshots=_snapshots - In the implementation block
@property (nonatomic,readonly) BOOL hasAttributes; 
@property (nonatomic,retain) MBSBackupAttributes * attributes;                                    //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) BOOL hasKeysLastModified; 
@property (assign,nonatomic) unsigned long long keysLastModified;                                 //@synthesize keysLastModified=_keysLastModified - In the implementation block
+(id)backup;
-(unsigned)snapshotsCount;
-(void)setBackupUDID:(id)arg1 ;
-(BOOL)hasBackupUDID;
-(BOOL)hasQuotaUsed;
-(void)clearSnapshots;
-(id)snapshotAtIndex:(unsigned)arg1 ;
-(BOOL)hasKeysLastModified;
-(unsigned long long)keysLastModified;
-(void)setKeysLastModified:(unsigned long long)arg1 ;
-(void)setHasQuotaUsed:(BOOL)arg1 ;
-(void)setHasKeysLastModified:(BOOL)arg1 ;
-(void)addSnapshot:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(unsigned long long)quotaUsed;
-(void)setQuotaUsed:(unsigned long long)arg1 ;
-(id)backupUDID;
-(BOOL)canRestoreSystemFiles;
-(BOOL)readFrom:(id)arg1 ;
-(id)snapshots;
-(void)setSnapshots:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasAttributes;
@end
