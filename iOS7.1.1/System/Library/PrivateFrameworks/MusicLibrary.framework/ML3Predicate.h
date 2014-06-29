/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@interface ML3Predicate : NSObject <NSCoding, NSCopying>
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)predicateOptimizedForEntityClass:(Class)arg1 ;
-(bool)isDynamicForEntityClass:(Class)arg1 ;
-(id)spotlightPredicate;
-(bool)isTrueAlways;
-(bool)isFalseAlways;
@end
