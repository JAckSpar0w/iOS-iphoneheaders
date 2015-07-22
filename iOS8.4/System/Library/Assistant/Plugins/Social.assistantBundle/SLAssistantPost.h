/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/Plugins/Social.assistantBundle/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/CLLocationManagerDelegate.h>
#import <Social/SLAssistantServiceHandler.h>

@protocol SLAssistantPostDelegate;
@class SADomainObjectCommit, ACAccountStore, ACAccount, CLLocationManager, CLLocation, NSString;

@interface SLAssistantPost : NSObject <CLLocationManagerDelegate, SLAssistantServiceHandler> {

	id<SLAssistantPostDelegate> _delegate;
	SADomainObjectCommit* _object;
	ACAccountStore* _accountStore;
	ACAccount* _account;
	CLLocationManager* _locationManager;
	CLLocation* _bestLocation;
	BOOL _checkedForAccount;
	BOOL _updatingLocation;
	BOOL _shouldRetry;
	long long _remainingRetryCount;
	/*^block*/id _locationAcquiredHandler;
	BOOL _awaitingAccountCredentialVerification;
	BOOL _accountCredentialsVerified;
	BOOL _awaitingLocationSettingStatus;
	BOOL _locationSettingAllowed;
	BOOL _assistantWantsLocation;

}

@property (assign) id<SLAssistantPostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)locationPermissionBundleForSiri;
-(BOOL)_shouldInitializeLocationSearch;
-(void)initializeLocationSearch;
-(void)_makeLocationSwitchVisible;
-(void)_setLocationWithLatitude:(float)arg1 longitude:(float)arg2 ;
-(void)_createAndExecutePostRequestWithStatus:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_checkAccountGeoTagStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)waitUntilLocationAcquiredOrTimeElapsed:(float)arg1 andExecute:(/*^block*/id)arg2 ;
-(void)_stopUpdatingLocation;
-(void)_stopRetrying;
-(void)_callLocationAcquiredHandler;
-(void)performCreateWithObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_finishedPostRequest:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 responseData:(id)arg3 urlResponse:(id)arg4 error:(id)arg5 ;
-(void)_attemptPostRequest:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_checkLocationAndAccountsForObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processResponseFromServiceWithHandler:(/*^block*/id)arg1 ;
-(void)_checkAccountCredentialsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cleanupLocationServices;
-(void)performPostRequestWithObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<SLAssistantPostDelegate>)arg1 ;
-(id<SLAssistantPostDelegate>)delegate;
-(id)account;
-(id)accountStore;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
@end
