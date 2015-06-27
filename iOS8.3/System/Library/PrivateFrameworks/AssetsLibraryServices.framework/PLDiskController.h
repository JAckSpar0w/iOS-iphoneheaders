/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:44:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLDiskController : NSObject {

	double _lastFSCheck;
	long long _bytesRequiredForPhoto;
	struct {
		unsigned needToCheckDiskSpace : 1;
		unsigned probablyLowOnDiskSpace : 1;
		unsigned isAssetsd : 1;
		unsigned extra : 28;
	}  _flags;

}
+(id)sharedInstance;
+(long long)diskSpaceAvailableForUse;
+(long long)freeDiskSpaceThreshold;
-(void)dealloc;
-(id)init;
-(void)_actuallyUpdateCookie;
-(void)_updateCookie;
-(void)_diskSpaceDidBecomeLow;
-(char)hasEnoughDiskToTakePicture;
-(long long)bytesToAutomaticallyClear;
-(void)updateAvailableDiskSpace;
@end
