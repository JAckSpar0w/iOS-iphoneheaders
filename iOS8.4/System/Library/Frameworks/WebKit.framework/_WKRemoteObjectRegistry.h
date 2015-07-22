/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface _WKRemoteObjectRegistry : NSObject {

	unique_ptr<WebKit::RemoteObjectRegistry, std::__1::default_delete<WebKit::RemoteObjectRegistry> >* _remoteObjectRegistry;
	RetainPtr<NSMapTable>* _remoteObjectProxies;
	HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >* _exportedObjects;

}

@property (nonatomic,readonly) RemoteObjectRegistry* remoteObjectRegistry; 
-(void)_invalidate;
-(void)_invokeMessageWithInterfaceIdentifier:(const String*)arg1 encodedInvocation:(const ImmutableDictionary*)arg2 ;
-(void)registerExportedObject:(id)arg1 interface:(id)arg2 ;
-(void)unregisterExportedObject:(id)arg1 interface:(id)arg2 ;
-(id)remoteObjectProxyWithInterface:(id)arg1 ;
-(id)_initWithMessageSender:(MessageSender*)arg1 ;
-(void)_sendInvocation:(id)arg1 interface:(id)arg2 ;
-(RemoteObjectRegistry*)remoteObjectRegistry;
-(BOOL)_invokeMethod:(const UserData*)arg1 ;
@end
