/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoAudioControl/NSCoding.h>

@interface _NACVolumeRecord : NSObject <NSCoding> {

	char _volumeControlAvailable;
	char _volumeWarningEnabled;
	char _muted;
	float _volumeValue;
	float _EUVolumeLimit;

}

@property (assign,nonatomic) float volumeValue;                                                        //@synthesize volumeValue=_volumeValue - In the implementation block
@property (assign,getter=isVolumeControlAvailable,nonatomic) char volumeControlAvailable;              //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,getter=isVolumeWarningEnabled,nonatomic) char volumeWarningEnabled;                  //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (assign,getter=isMuted,nonatomic) char muted;                                                //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) float EUVolumeLimit;                                                      //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
-(void)setVolumeValue:(float)arg1 ;
-(void)setMuted:(char)arg1 ;
-(float)EUVolumeLimit;
-(float)volumeValue;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setVolumeWarningEnabled:(char)arg1 ;
-(char)isVolumeControlAvailable;
-(void)setVolumeControlAvailable:(char)arg1 ;
-(char)isVolumeWarningEnabled;
-(void)setEUVolumeLimit:(float)arg1 ;
-(char)isMuted;
@end
