/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:56 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <RemoteMediaServices/NSCopying.h>

@interface RMSAddToWishlistMessage : PBCodable <NSCopying> {

	unsigned long long _databaseID;
	unsigned long long _itemID;
	int _sessionIdentifier;
	SCD_Struct_RM5 _has;

}

@property (assign,nonatomic) char hasItemID; 
@property (assign,nonatomic) unsigned long long itemID;                  //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) char hasDatabaseID; 
@property (assign,nonatomic) unsigned long long databaseID;              //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) char hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(unsigned long long)databaseID;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)itemID;
-(void)setItemID:(unsigned long long)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(void)setHasSessionIdentifier:(char)arg1 ;
-(char)hasSessionIdentifier;
-(void)setHasItemID:(char)arg1 ;
-(char)hasItemID;
-(void)setHasDatabaseID:(char)arg1 ;
-(char)hasDatabaseID;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
