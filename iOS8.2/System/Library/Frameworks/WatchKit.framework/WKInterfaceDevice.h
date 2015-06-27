/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WatchKit/WatchKit-Structs.h>
@class NSString, NSDictionary;

@interface WKInterfaceDevice : NSObject {

	float _screenScale;
	NSString* _preferredContentSizeCategory;
	CGRect _screenBounds;

}

@property (assign,nonatomic) CGRect screenBounds;                                //@synthesize screenBounds=_screenBounds - In the implementation block
@property (assign,nonatomic) float screenScale;                                  //@synthesize screenScale=_screenScale - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory;              //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedImages; 
+(id)currentDevice;
-(NSString *)preferredContentSizeCategory;
-(void)setScreenBounds:(CGRect)arg1 ;
-(CGRect)screenBounds;
-(float)screenScale;
-(void)setScreenScale:(float)arg1 ;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(NSDictionary *)cachedImages;
-(char)addCachedImage:(id)arg1 name:(id)arg2 ;
-(char)addCachedImageWithData:(id)arg1 name:(id)arg2 ;
-(void)removeCachedImageWithName:(id)arg1 ;
-(void)removeAllCachedImages;
@end
