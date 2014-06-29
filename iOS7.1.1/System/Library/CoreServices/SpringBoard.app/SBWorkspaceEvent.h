/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:55 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface SBWorkspaceEvent : NSObject {

	NSString* _label;
	/*^block*/ id _handler;
	NSArray* _callStackSymbols;

}

@property (nonatomic,copy) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSArray * callStackSymbols;              //@synthesize callStackSymbols=_callStackSymbols - In the implementation block
@property (nonatomic,copy) id handler;                              //@synthesize handler=_handler - In the implementation block
+(id)eventWithLabel:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)setCallStackSymbols:(id)arg1 ;
-(void)execute;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)callStackSymbols;
-(void)setHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)handler;
-(BOOL)isEqualToEvent:(id)arg1 ;
@end
