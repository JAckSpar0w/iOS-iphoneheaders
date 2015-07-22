/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreMIDI/CoreMIDI-Structs.h>
@class NSString;

@interface MIDINetworkHost : NSObject {

	MIDINetworkHostImpl* _impl;

}

@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * address; 
@property (nonatomic,readonly) unsigned long long port; 
@property (nonatomic,retain,readonly) NSString * netServiceName; 
@property (nonatomic,retain,readonly) NSString * netServiceDomain; 
+(id)hostWithName:(id)arg1 netServiceName:(id)arg2 netServiceDomain:(id)arg3 ;
+(id)hostWithName:(id)arg1 address:(id)arg2 port:(unsigned long long)arg3 ;
+(id)hostWithName:(id)arg1 netService:(id)arg2 ;
+(id)fromAddressAsText:(id)arg1 withName:(id)arg2 ;
-(NSString *)netServiceName;
-(NSString *)netServiceDomain;
-(BOOL)hasSameAddressAs:(id)arg1 ;
-(id)addressAsText;
-(NSString *)address;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)host;
-(id)displayName;
-(unsigned long long)port;
@end
