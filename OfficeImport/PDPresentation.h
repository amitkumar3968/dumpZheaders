/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"
#import "OfficeImport-Structs.h"

@class OADTextListStyle, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PDPresentation : OCDDocument {
@private
	NSMutableArray* mSlideMasters;
	NSMutableArray* mNotesMasters;
	NSMutableArray* mSlides;
	NSMutableArray* mBulletBlips;
	CGSize mSlideSize;
	CGSize mNotesSize;
	BOOL mIsAutoPlay;
	BOOL mIsCommentsVisible;
	BOOL mIsLooping;
	BOOL mIsKiosk;
	NSMutableDictionary* mCommentAuthors;
	OADTextListStyle* mDefaultTextStyle;
}
@property(assign) BOOL isKiosk;	// converted property
@property(assign) BOOL isLooping;	// converted property
@property(assign) BOOL isCommentsVisible;	// converted property
@property(assign) BOOL isAutoPlay;	// converted property
@property(assign) CGSize notesSize;	// converted property
@property(assign) CGSize slideSize;	// converted property
-(id).cxx_construct;
-(void)flushUnusedMastersAndLayouts;
-(id)defaultTextStyle;
-(void)setCommentAuthor:(id)author forId:(unsigned)anId;
-(id)commentAuthorForId:(unsigned)anId;
// converted property setter: -(void)setIsKiosk:(BOOL)kiosk;
// converted property getter: -(BOOL)isKiosk;
// converted property setter: -(void)setIsLooping:(BOOL)looping;
// converted property getter: -(BOOL)isLooping;
// converted property setter: -(void)setIsCommentsVisible:(BOOL)visible;
// converted property getter: -(BOOL)isCommentsVisible;
// converted property setter: -(void)setIsAutoPlay:(BOOL)play;
// converted property getter: -(BOOL)isAutoPlay;
// converted property setter: -(void)setNotesSize:(CGSize)size;
// converted property getter: -(CGSize)notesSize;
// converted property setter: -(void)setSlideSize:(CGSize)size;
// converted property getter: -(CGSize)slideSize;
-(id)bulletBlips;
-(unsigned long)bulletBlipCount;
-(unsigned long)addBulletBlip:(id)blip;
-(id)bulletBlipAtIndex:(long)index;
-(unsigned)indexOfSlide:(id)slide;
-(void)addSlide:(id)slide;
-(id)slideAtIndex:(unsigned)index;
-(unsigned)slideCount;
-(void)addNotesMaster:(id)master;
-(id)notesMasterAtIndex:(unsigned)index;
-(unsigned)notesMasterCount;
-(void)addSlideMaster:(id)master;
-(id)slideMasterAtIndex:(unsigned)index;
-(unsigned)slideMasterCount;
-(void)dealloc;
-(id)init;
@end

