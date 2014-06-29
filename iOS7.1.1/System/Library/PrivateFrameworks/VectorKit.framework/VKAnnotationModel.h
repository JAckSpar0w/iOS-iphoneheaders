/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <VectorKit/VKMapLayer.h>
#import <VectorKit/VKStylesheetObserver.h>

@protocol VKAnnotationModelDelegate;
@class NSMutableArray, VKAnnotationMarker, NSMutableSet, VKMapModel, NSArray, VKStylesheet;

@interface VKAnnotationModel : VKModelObject <VKMapLayer, VKStylesheetObserver> {

	NSMutableArray* _annotationMarkers;
	VKAnnotationMarker* _selectedAnnotationMarker;
	NSMutableSet* _animatingMarkers;
	NSMutableArray* _markersToAnimate;
	<VKAnnotationModelDelegate>* _delegate;
	VKAnnotationMarker* _draggingAnnotationMarker;
	bool _didDragMarker;
	bool _hasEverDrawnSomething;
	SCD_Struct_VK122 _styleTransitionState;
	/*^block*/ id _annotationMarkerDeselectionCallback;
	VKMapModel* _mapModel;

}

@property (assign,nonatomic) <VKAnnotationModelDelegate> * delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) SCD_Struct_VK122 styleTransitionState;                        //@synthesize styleTransitionState=_styleTransitionState - In the implementation block
@property (nonatomic,readonly) NSArray * annotationMarkers;                                //@synthesize annotationMarkers=_annotationMarkers - In the implementation block
@property (nonatomic,readonly) VKAnnotationMarker * selectedAnnotationMarker; 
@property (nonatomic,readonly) bool needsLayout; 
@property (nonatomic,copy) id annotationMarkerDeselectionCallback;                         //@synthesize annotationMarkerDeselectionCallback=_annotationMarkerDeselectionCallback - In the implementation block
@property (assign,nonatomic) VKMapModel * mapModel;                                        //@synthesize mapModel=_mapModel - In the implementation block
@property (nonatomic,readonly) VKStylesheet * stylesheet; 
+(bool)reloadOnStylesheetChange;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(bool)needsLayout;
-(id).cxx_construct;
-(unsigned long long)mapLayerPosition;
-(id)stylesheet;
-(/*^block*/ id)annotationMarkerDeselectionCallback;
-(void)setAnnotationMarkerDeselectionCallback:(/*^block*/ id)arg1 ;
-(id)selectedAnnotationMarker;
-(id)annotationMarkers;
-(void)removeAnnotationMarker:(id)arg1 ;
-(void)addAnnotationMarker:(id)arg1 allowAnimation:(bool)arg2 ;
-(void)selectAnnotationMarker:(id)arg1 ;
-(void)deselectAnnotationMarker:(id)arg1 ;
-(/*^block*/ id)annotationRectTest;
-(/*^block*/ id)annotationCoordinateTest;
-(void)setMapModel:(id)arg1 ;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(id)annotationMarkerForSelectionAtPoint:(VKPoint)arg1 avoidCurrent:(bool)arg2 canvasSize:(CGSize)arg3 ;
-(unsigned)supportedRenderPasses;
-(void)drawScene:(id)arg1 withContext:(id)arg2 ;
-(void)setStyleTransitionState:(SCD_Struct_VK122)arg1 ;
-(SCD_Struct_VK122)styleTransitionState;
-(void)stylesheetDidChange;
-(id)mapModel;
-(void)anchorPositionChangedForMarker:(id)arg1 ;
@end
