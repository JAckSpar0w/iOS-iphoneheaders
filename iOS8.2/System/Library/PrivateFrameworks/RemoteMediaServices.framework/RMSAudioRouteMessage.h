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

@class NSString;

@interface RMSAudioRouteMessage : PBCodable <NSCopying> {

	long long _macAddress;
	NSString* _displayName;
	char _selected;
	char _supportsVideo;
	SCD_Struct_RM5 _has;

}

@property (nonatomic,readonly) char hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) char hasMacAddress; 
@property (assign,nonatomic) long long macAddress;                //@synthesize macAddress=_macAddress - In the implementation block
@property (assign,nonatomic) char hasSupportsVideo; 
@property (assign,nonatomic) char supportsVideo;                  //@synthesize supportsVideo=_supportsVideo - In the implementation block
@property (assign,nonatomic) char hasSelected; 
@property (assign,nonatomic) char selected;                       //@synthesize selected=_selected - In the implementation block
-(void)setDisplayName:(NSString *)arg1 ;
-(char)supportsVideo;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSelected:(char)arg1 ;
-(id)dictionaryRepresentation;
-(char)selected;
-(NSString *)displayName;
-(void)setMacAddress:(long long)arg1 ;
-(char)hasDisplayName;
-(long long)macAddress;
-(void)setHasMacAddress:(char)arg1 ;
-(char)hasMacAddress;
-(void)setSupportsVideo:(char)arg1 ;
-(void)setHasSupportsVideo:(char)arg1 ;
-(char)hasSupportsVideo;
-(void)setHasSelected:(char)arg1 ;
-(char)hasSelected;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
