/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface FindMyiPhoneController : NSObject {

	NSObject<OS_dispatch_semaphore>* _stateChangeSem;

}
+(id)shared;
-(void)locatorStateDidChange:(id)arg1 ;
-(id)preferredFindMyiPhoneAccount;
-(void)disablePhoneLocatorWithMessageString:(id)arg1 buttonTitle:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(BOOL)isFindMyiPhoneProvisioned;
-(BOOL)isFindMyiPhoneEnabled;
-(void)enablePhoneLocatorWithCompletion:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
@end
