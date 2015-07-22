/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@interface TRDirectionalButtonPacketEvent : TRPacketEvent {

	long long _buttonType;
	long long _gestureState;
	long long _gestureType;

}

@property (nonatomic,readonly) long long buttonType;                //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,readonly) long long gestureState;              //@synthesize gestureState=_gestureState - In the implementation block
@property (nonatomic,readonly) long long gestureType;               //@synthesize gestureType=_gestureType - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(long long)gestureType;
-(long long)buttonType;
-(long long)gestureState;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithButtonType:(long long)arg1 gestureType:(long long)arg2 gestureState:(long long)arg3 ;
@end
