/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DCamera;

@interface TSCH3DGetBoundsProjector : NSObject {

	tmat4x4<float> mModelView;
	tmat4x4<float> mConstantDepthModelView;
	tmat4x4<float> mProjection;
	tmat4x4<float> mMVP;
	TSCH3DCamera* mCamera;
	ChartScenePropertyAccessor* mAccessor;
	BOOL mUseAggressiveBackProjection;

}
-(tvec3<float>)backProjectModelViewPoint:(const tvec3<float>*)arg1 ;
-(void)setCamera:(id)arg1 accessor:(ChartScenePropertyAccessor*)arg2 ;
-(void)resetTransformsForLayoutBounds;
-(void)resetTransformsForRenderBounds;
-(box<glm::detail::tvec3<float> >)projectBounds:(const box<glm::detail::tvec3<float> >*)arg1 type:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(void)reset;
@end
