/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSFaultHandler : NSObject
+(bool)accessInstanceVariablesDirectly;
+(void)initialize;
-(id)retainedFulfillAggregateFaultForObject:(id)arg1 andRelationship:(id)arg2 withContext:(id)arg3 ;
-(id)initWithPersistenceStore:(id)arg1 ;
-(id)fulfillFault:(id)arg1 withContext:(id)arg2 forIndex:(unsigned long long)arg3 ;
-(id)fulfillFault:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)fulfillFault:(id)arg1 withContext:(id)arg2 ;
-(void)turnObject:(id)arg1 intoFaultWithContext:(id)arg2 ;
-(void)_fireFirstAndSecondLevelFaultsForObject:(id)arg1 withContext:(id)arg2 ;
@end
