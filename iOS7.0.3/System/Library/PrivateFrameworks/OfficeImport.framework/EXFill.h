/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXFill : NSObject
+(id)edFillFromXmlFillElement:(xmlNode*)arg1 differentialFill:(bool)arg2 state:(id)arg3 ;
+(id)edPatternFillFromXmlElement:(xmlNode*)arg1 differentialFill:(bool)arg2 state:(id)arg3 ;
+(id)edGradientFillFromXmlElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edFillFromXmlFillElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)edPatternTypeFromXmlPatternTypeString:(id)arg1 ;
+(int)edGradientTypeFromXmlGradientTypeString:(id)arg1 state:(id)arg2 ;
+(id)edStopFromXmlGradientElement:(xmlNode*)arg1 state:(id)arg2 ;
@end
