/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MKAnnotation.h"
#import "PhotoLibrary-Structs.h"

@class NSString;

@interface PLPlacesMapAnnotation : XXUnknownSuperclass <MKAnnotation> {
	XXStruct_zYrK5D _coordinate;
	NSString* _title;
	NSString* _subtitle;
	id _context;
	NSObject* _photoAlbum;
	XXStruct_zYrK5D _animationOrigin;
	XXStruct_zYrK5D _animationDestination;
	unsigned _animationOriginSet : 1;
	unsigned _animationDestinationSet : 1;
	unsigned _isAnimationOnlyAnnotation : 1;
}
@property(retain, nonatomic) id context;	// @synthesize=_context
@property(assign, nonatomic) XXStruct_zYrK5D coordinate;	// @synthesize=_coordinate
@property(assign) XXStruct_zYrK5D animationDestination;	// converted property
@property(assign) XXStruct_zYrK5D animationOrigin;	// converted property
@property(retain) NSString* subtitle;	// converted property
@property(retain) NSString* title;	// converted property
@property(readonly, assign) NSObject* photoAlbum;	// converted property
// declared property setter: -(void)setCoordinate:(XXStruct_zYrK5D)coordinate;
// declared property setter: -(void)setContext:(id)context;
// declared property getter: -(id)context;
-(void)clearAnimationInformation;
// converted property setter: -(void)setAnimationDestination:(XXStruct_zYrK5D)destination;
// converted property getter: -(XXStruct_zYrK5D)animationDestination;
-(BOOL)hasAnimationDestination;
// converted property setter: -(void)setAnimationOrigin:(XXStruct_zYrK5D)origin;
// converted property getter: -(XXStruct_zYrK5D)animationOrigin;
-(BOOL)hasAnimationOrigin;
-(BOOL)isAnimationOnlyAnnotation;
-(void)resetAfterMapChangeWhenVisible;
-(void)resetAfterMapChange;
-(void)updateCoordinate:(XXStruct_zYrK5D)coordinate;
-(void)updateToTitle:(id)title subtitle:(id)subtitle album:(NSObject*)album;
// converted property getter: -(NSObject*)photoAlbum;
// converted property setter: -(void)setSubtitle:(id)subtitle;
// converted property getter: -(id)subtitle;
// converted property setter: -(void)setTitle:(id)title;
// converted property getter: -(id)title;
// declared property getter: -(XXStruct_zYrK5D)coordinate;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
-(id)initAnimationOnlyAnnotationWithLongitude:(double)longitude latitude:(double)latitude;
-(id)initWithLongitude:(double)longitude latitude:(double)latitude title:(id)title subtitle:(id)subtitle photoAlbum:(NSObject*)album;
@end
