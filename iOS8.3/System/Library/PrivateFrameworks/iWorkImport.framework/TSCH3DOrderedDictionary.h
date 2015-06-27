/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSFastEnumeration.h>

@class NSMutableDictionary, NSMutableArray;

@interface TSCH3DOrderedDictionary : NSObject <NSFastEnumeration> {

	NSMutableDictionary* mStore;
	NSMutableArray* mKeyOrder;

}

@property (nonatomic,readonly) unsigned count; 
+(id)dictionaryWithMutableDictionaryStore:(id)arg1 ;
+(id)dictionary;
-(id)initWithMutableDictionaryStore:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_TS25*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
