/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceTrigger/_VTStatePolicy.h>

@interface _VTVoiceTriggerEnabledPolicy : _VTStatePolicy {

	int _notificationToken;
	BOOL _enabled;
	BOOL _primedPhraseSpotter;

}
-(void)dealloc;
-(BOOL)isEnabled;
-(void)_update;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_listenForReload;
@end
