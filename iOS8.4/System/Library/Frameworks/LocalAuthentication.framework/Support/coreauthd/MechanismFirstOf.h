/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <coreauthd/MechanismBase.h>

@class NSArray, MechanismBase;

@interface MechanismFirstOf : MechanismBase {

	NSArray* _mechanisms;
	MechanismBase* _runningMechanism;
	unsigned long long _index;

}
+(id)mechanismWithMechanismsInOrder:(id)arg1 ;
-(BOOL)isAvailableWithError:(id*)arg1 ;
-(void)finishRunWithResult:(id)arg1 error:(id)arg2 ;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)findMechanismWithEventIdentifier:(long long)arg1 ;
-(id)findMechanismWithClass:(Class)arg1 ;
-(id)initWithMechanismsInOrder:(id)arg1 ;
-(void)_runNextMechanismWithLastError:(id)arg1 ;
-(id)description;
@end
