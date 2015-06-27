/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:37 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface MKJunction : NSObject {

	SCD_Struct_MK31* _elements;
	unsigned long _count;
	int _type;
	/*function pointer*/void** _snapped[8];

}

@property (nonatomic,readonly) int type;              //@synthesize type=_type - In the implementation block
-(id)initWithType:(int)arg1 maneuver:(int)arg2 drivingSide:(int)arg3 elements:(SCD_Struct_MK31*)arg4 count:(unsigned long)arg5 ;
-(void)getArrowPath:(id*)arg1 arrowStrokePath:(id*)arg2 intersectionBackgroundPath:(id*)arg3 strokePath:(id*)arg4 withSize:(CGSize)arg5 metrics:(SCD_Struct_MK32)arg6 drivingSide:(int)arg7 visualCenter:(CGPoint*)arg8 ;
-(void)getRoundaboutArrowPath:(id*)arg1 intersectionBackgroundPath:(id*)arg2 strokePath:(id*)arg3 withSize:(CGSize)arg4 metrics:(SCD_Struct_MK32)arg5 drivingSide:(int)arg6 visualCenter:(CGPoint*)arg7 ;
-(void)getArrowPath:(id*)arg1 arrowStrokePath:(id*)arg2 pivot:(CGPoint*)arg3 withSize:(CGSize)arg4 metrics:(SCD_Struct_MK32)arg5 visualCenter:(CGPoint*)arg6 ;
-(id)roundaboutArrowWithSize:(CGSize)arg1 metrics:(SCD_Struct_MK32)arg2 outerRadius:(float)arg3 endAngle:(float)arg4 pivot:(CGPoint*)arg5 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)type;
@end
