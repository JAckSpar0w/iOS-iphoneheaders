/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCNearbyServiceBrowserDelegate <NSObject>
@optional
-(void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2;

@required
-(void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
-(void)browser:(id)arg1 lostPeer:(id)arg2;

@end
