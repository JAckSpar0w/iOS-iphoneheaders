/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SADistance : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * unit; 
@property (nonatomic,copy) NSString * units; 
@property (nonatomic,retain) NSNumber * value; 
+(id)distance;
+(id)distanceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)sirimovies_distanceAsString;
-(id)sirimovies_metersValue;
-(id)sirimovies_abbreviatedUnit;
-(long long)sirimovies_compare:(id)arg1 ;
-(id)afui_metersValue;
-(id)afui_abbreviatedUnit;
-(long long)afui_compare:(id)arg1 ;
-(id)groupIdentifier;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)unit;
-(void)setUnit:(id)arg1 ;
-(id)encodedClassName;
-(id)units;
-(void)setUnits:(id)arg1 ;
@end
