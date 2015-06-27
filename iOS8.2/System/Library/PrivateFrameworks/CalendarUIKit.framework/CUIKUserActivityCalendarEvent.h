/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSString, NSDate;

@interface CUIKUserActivityCalendarEvent : CUIKUserActivityWithSource {

	NSString* _title;
	NSString* _externalID;
	NSDate* _date;
	unsigned _view;

}

@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned view;                 //@synthesize view=_view - In the implementation block
-(id)initWithEvent:(id)arg1 view:(unsigned)arg2 forceLocal:(char)arg3 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)view;
-(id)dictionary;
-(NSString *)title;
-(id)initWithEvent:(id)arg1 view:(unsigned)arg2 ;
-(id)eventFromStore:(id)arg1 ;
@end
