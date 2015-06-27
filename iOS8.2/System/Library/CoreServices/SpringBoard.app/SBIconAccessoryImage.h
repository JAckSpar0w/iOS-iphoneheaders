/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIImage.h>
#import <SpringBoard/SBCountedMapValue.h>

@class NSString;

@interface SBIconAccessoryImage : UIImage <SBCountedMapValue> {

	NSString* _countedMapKey;

}

@property (nonatomic,copy) NSString * countedMapKey;                //@synthesize countedMapKey=_countedMapKey - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCountedMapKey:(NSString *)arg1 ;
-(NSString *)countedMapKey;
-(void)dealloc;
-(id)initWithImage:(id)arg1 ;
@end
