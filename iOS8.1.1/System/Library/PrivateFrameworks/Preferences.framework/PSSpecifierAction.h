/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:25 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PSSpecifierAction : NSObject {

	/*^block*/id _getter;
	/*^block*/id _setter;

}

@property (nonatomic,copy) id getter;              //@synthesize getter=_getter - In the implementation block
@property (nonatomic,copy) id setter;              //@synthesize setter=_setter - In the implementation block
+(id)actionWithBoolDetailClass:(Class)arg1 ;
+(id)actionWithGetter:(/*^block*/id)arg1 setter:(/*^block*/id)arg2 ;
-(id)setter;
-(void)setSetter:(id)arg1 ;
-(void)dealloc;
-(void)setGetter:(id)arg1 ;
-(id)getter;
@end
