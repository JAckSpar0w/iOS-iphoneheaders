/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class BRCLocalContainer, BRCAccountSession, BRCItemID, NSMutableIndexSet, NSObject;

@interface BRCTreeEnumerator : NSObject {

	BRCLocalContainer* _container;
	BRCAccountSession* _session;
	/*^block*/id _handler;
	BRCItemID* _parentID;
	unsigned long long _rowID;
	NSMutableIndexSet* _seen;
	NSMutableIndexSet* _toVisit;
	NSObject*<OS_dispatch_group> _group;
	/*^block*/id _whenDone;

}

@property (nonatomic,copy) id whenDone;              //@synthesize whenDone=_whenDone - In the implementation block
-(void)done;
-(id)initWithContainer:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)enumerateBelow:(id)arg1 group:(id)arg2 ;
-(void)_scheduleAsync;
-(void)_iterate:(unsigned long long)arg1 ;
-(void)_iterateWithoutParent:(unsigned long long)arg1 ;
-(void)_visitNewParent:(unsigned long long)arg1 ;
-(id)whenDone;
-(void)setWhenDone:(id)arg1 ;
@end
