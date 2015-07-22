/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class NSMutableArray, PLXPCListenerOperatorComposition, PLEntry, NSString, NSDictionary;

@interface PLAudioAgent : PLAgent {

	BOOL _speakerIsPlayingAudio;
	NSMutableArray* _nsOutputNotifications;
	NSMutableArray* _nsRoutingNotifications;
	PLXPCListenerOperatorComposition* _audioAppXPCListener;
	PLXPCListenerOperatorComposition* _speakerAmpXPCListener;
	PLEntry* _entryRoutingOld;
	PLEntry* _entrySpeakerPowerOld;
	NSString* _audioHardware;
	NSDictionary* _audioPowerModel;

}

@property (readonly) NSMutableArray * nsOutputNotifications;                              //@synthesize nsOutputNotifications=_nsOutputNotifications - In the implementation block
@property (readonly) NSMutableArray * nsRoutingNotifications;                             //@synthesize nsRoutingNotifications=_nsRoutingNotifications - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * audioAppXPCListener;                //@synthesize audioAppXPCListener=_audioAppXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * speakerAmpXPCListener;              //@synthesize speakerAmpXPCListener=_speakerAmpXPCListener - In the implementation block
@property (retain) PLEntry * entryRoutingOld;                                             //@synthesize entryRoutingOld=_entryRoutingOld - In the implementation block
@property (assign) BOOL speakerIsPlayingAudio;                                            //@synthesize speakerIsPlayingAudio=_speakerIsPlayingAudio - In the implementation block
@property (retain) PLEntry * entrySpeakerPowerOld;                                        //@synthesize entrySpeakerPowerOld=_entrySpeakerPowerOld - In the implementation block
@property (readonly) NSString * audioHardware;                                            //@synthesize audioHardware=_audioHardware - In the implementation block
@property (readonly) NSDictionary * audioPowerModel;                                      //@synthesize audioPowerModel=_audioPowerModel - In the implementation block
+(void)load;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionAudioApp;
+(id)entryEventPointDefinitionSpeakerAmp;
+(id)entryEventForwardDefinitionOutput;
+(id)entryEventForwardDefinitionRouting;
-(id)init;
-(BOOL)active;
-(void)log;
-(void)initOperatorDependancies;
-(void)setupAVSystemController;
-(NSMutableArray *)nsOutputNotifications;
-(void)logEventForwardOutput;
-(void)logEventForwardRouting;
-(id)returnVolumeOrOutPutCategory:(int)arg1 ;
-(NSString *)audioHardware;
-(void)logEventPointAudioApp:(id)arg1 ;
-(void)setAudioAppXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointSpeakerAmp:(id)arg1 ;
-(void)setSpeakerAmpXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)createAudioAccountingEvents:(id)arg1 ;
-(void)createAirPlayAccountingEvents:(id)arg1 ;
-(void)createCarPlayAccountingEvents:(id)arg1 ;
-(void)createBluetoothAccountingEvents:(id)arg1 ;
-(void)modelAudioPowerSpeaker:(id)arg1 ;
-(BOOL)muted;
-(void)modelAudioPower;
-(int)nowPlayingAppPID;
-(id)activeRoute;
-(id)outputCategory;
-(BOOL)headphonesConnected;
-(BOOL)headsetHasInput;
-(PLEntry *)entryRoutingOld;
-(void)setEntryRoutingOld:(PLEntry *)arg1 ;
-(double)audioPowerForRoute:(id)arg1 forVolume:(double)arg2 ;
-(double)modelAudioPowerForK94:(double)arg1 ;
-(void)setSpeakerIsPlayingAudio:(BOOL)arg1 ;
-(NSDictionary *)audioPowerModel;
-(void)setEntrySpeakerPowerOld:(PLEntry *)arg1 ;
-(PLEntry *)entrySpeakerPowerOld;
-(BOOL)speakerIsPlayingAudio;
-(double)convertSpeakerProtectionModeledPowerToTotalSpeakerPower:(double)arg1 ;
-(NSMutableArray *)nsRoutingNotifications;
-(PLXPCListenerOperatorComposition *)audioAppXPCListener;
-(PLXPCListenerOperatorComposition *)speakerAmpXPCListener;
-(id)volume;
@end
