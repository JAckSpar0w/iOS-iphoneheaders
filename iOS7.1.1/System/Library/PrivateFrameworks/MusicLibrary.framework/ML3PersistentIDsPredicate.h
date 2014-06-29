/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@interface ML3PersistentIDsPredicate : ML3Predicate {

	unsigned long long _count;
	long long* _persistentIDs;
	bool _shouldContain;

}

@property (nonatomic,readonly) bool shouldContain;              //@synthesize shouldContain=_shouldContain - In the implementation block
+(id)predicateWithPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 shouldContain:(bool)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(id)initWithPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 shouldContain:(bool)arg3 ;
-(bool)shouldContain;
@end
