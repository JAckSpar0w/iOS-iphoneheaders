/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class NSString, DeviceManager;

@interface ICDevice : NSObject {

	void* _deviceProperties;

}

@property (assign) <ICDeviceDelegate> * delegate; 
@property (copy) NSString * name; 
@property (copy) NSString * productKind; 
@property (readonly) CGImageRef icon; 
@property (copy) NSString * transportType; 
@property (copy) NSString * UUIDString; 
@property (assign) BOOL hasOpenSession; 
@property (assign) int usbLocationID; 
@property (assign) int usbProductID; 
@property (assign) int usbVendorID; 
@property (assign) DeviceManager * deviceManager; 
@property (assign) BOOL autoOpenSession; 
@property (assign) BOOL openSessionPending; 
@property (assign) BOOL closeSessionPending; 
-(BOOL)isCameraDevice;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)UUIDString;
-(void)setTransportType:(id)arg1 ;
-(void)setProductKind:(id)arg1 ;
-(void)setUUIDString:(id)arg1 ;
-(id)deviceManager;
-(void)setDeviceManager:(id)arg1 ;
-(int)usbLocationID;
-(void)setUsbLocationID:(int)arg1 ;
-(int)usbProductID;
-(void)setUsbProductID:(int)arg1 ;
-(int)usbVendorID;
-(void)setUsbVendorID:(int)arg1 ;
-(BOOL)hasOpenSession;
-(void)setHasOpenSession:(BOOL)arg1 ;
-(BOOL)autoOpenSession;
-(void)setAutoOpenSession:(BOOL)arg1 ;
-(BOOL)openSessionPending;
-(void)setOpenSessionPending:(BOOL)arg1 ;
-(BOOL)closeSessionPending;
-(void)setCloseSessionPending:(BOOL)arg1 ;
-(void)requestCloseSession;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(id)productKind;
-(void)requestOpenSession;
-(CGImageRef)icon;
-(id)transportType;
-(void)finalize;
@end
