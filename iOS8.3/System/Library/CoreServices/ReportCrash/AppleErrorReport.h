/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:17 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AppleErrorReport : NSObject {

	NSString* _incidentID;
	NSString* _logType;
	NSString* _deviceID;

}
+(void)logSafely:(/*^block*/id)arg1 ;
+(id)systemIDWithDescription:(char)arg1 ;
+(unsigned char)executeWithTimeout:(unsigned)arg1 Code:(/*^block*/id)arg2 ;
+(id)xattr_name;
+(id)kernelVersionDescription;
+(id)systemVersionDescription;
-(char)isAppleTV;
-(id)incidentID;
-(id)getSyslogForPid:(int)arg1 withPrefix:(id)arg2 ;
-(id)logType;
-(char)isInternalOrCarrierInstall;
-(void)dealloc;
-(id)description;
-(id)initWithType:(id)arg1 ;
-(unsigned)uid;
-(id)deviceID;
-(char)isCarrierInstall;
-(id)hardwareModel;
-(char)isInternalInstall;
@end
