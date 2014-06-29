/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/StarkWaypointsController.h>

@class AddressBookAddress, NSString;

@interface StarkAddressWaypointsController : StarkWaypointsController {

	AddressBookAddress* _address;
	NSString* _title;

}
-(id)destinationWaypoint;
-(id)titleForCurrentDestination;
-(id)subtitleForCurrentDestination;
-(id)initWithAddress:(id)arg1 overridingTitle:(id)arg2 ;
-(id)initWithAddress:(id)arg1 ;
-(void).cxx_destruct;
@end
