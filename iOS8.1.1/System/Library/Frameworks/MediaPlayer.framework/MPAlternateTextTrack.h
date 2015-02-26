/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAlternateTrack.h>

@class NSString, NSLocale;

@interface MPAlternateTextTrack : MPAlternateTrack {

	long long _type;
	NSString* _name;
	NSLocale* _locale;
	long long _tag;

}

@property (nonatomic,readonly) BOOL isInBand; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) long long type; 
@property (assign,nonatomic) long long tag;                    //@synthesize tag=_tag - In the implementation block
+(id)offTrack;
+(id)autoTrack;
-(BOOL)isInBand;
-(id)_displayNameForName:(id)arg1 ;
-(id)initWithType:(long long)arg1 name:(id)arg2 locale:(id)arg3 ;
-(long long)type;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSLocale *)locale;
-(id)displayName;
@end
