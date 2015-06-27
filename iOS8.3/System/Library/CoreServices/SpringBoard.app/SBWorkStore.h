/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject, NSArray;

@interface SBWorkStore : NSObject {

	NSMutableDictionary* _workItemsPerKey;
	NSMutableArray* _keysWithWork;
	NSMutableArray* _observers;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned _maxWorkPerKey;
	NSMutableDictionary* _workExpirationPeriods;
	double _defaultWorkExpirationPeriod;

}

@property (nonatomic,readonly) NSArray * keysWithWork;                             //@synthesize keysWithWork=_keysWithWork - In the implementation block
@property (assign,nonatomic) double defaultWorkExpirationPeriod;                   //@synthesize defaultWorkExpirationPeriod=_defaultWorkExpirationPeriod - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * workItemsPerKey;              //@synthesize workItemsPerKey=_workItemsPerKey - In the implementation block
@property (nonatomic,readonly) NSMutableArray * observers;                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) unsigned maxWorkPerKey;                             //@synthesize maxWorkPerKey=_maxWorkPerKey - In the implementation block
-(void)_queue_expireWorkForKey:(id)arg1 ;
-(void)_notifyObserversWorkDidChange;
-(id)dequeueWorkForKey:(id)arg1 ;
-(id)initWithMaximumNumberOfWorkItemsPerKey:(unsigned)arg1 ;
-(void)addWorkItem:(id)arg1 forKey:(id)arg2 ;
-(void)purgeWorkForKey:(id)arg1 ;
-(void)setWorkExpirationPeriod:(double)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)workItemsPerKey;
-(NSArray *)keysWithWork;
-(unsigned)maxWorkPerKey;
-(double)defaultWorkExpirationPeriod;
-(void)setDefaultWorkExpirationPeriod:(double)arg1 ;
-(void)dealloc;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(NSMutableArray *)observers;
-(void)addObserver:(id)arg1 ;
@end
