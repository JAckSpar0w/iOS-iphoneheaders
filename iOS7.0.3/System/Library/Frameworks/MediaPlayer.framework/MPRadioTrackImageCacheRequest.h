/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPImageCacheRequest.h>

@class RadioTrack;

@interface MPRadioTrackImageCacheRequest : MPImageCacheRequest {

	long long _trackStoreID;
	BOOL _usePlaceholderAsFallback;
	RadioTrack* _radioTrack;

}

@property (nonatomic,readonly) RadioTrack * radioTrack;                  //@synthesize radioTrack=_radioTrack - In the implementation block
@property (assign,nonatomic) BOOL usePlaceholderAsFallback;              //@synthesize usePlaceholderAsFallback=_usePlaceholderAsFallback - In the implementation block
-(id)radioTrack;
-(void)setUsePlaceholderAsFallback:(BOOL)arg1 ;
-(id)placeholderImage;
-(id)uniqueKey;
-(id)copyRawImageReturningError:(id*)arg1 ;
-(BOOL)usePlaceholderAsFallback;
-(id)initWithRadioTrack:(id)arg1 ;
-(void).cxx_destruct;
@end
