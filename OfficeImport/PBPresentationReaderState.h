/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class TSUNoCopyDictionary, OADTheme, NSMutableArray, PBOfficeArtReaderState, NSMutableDictionary, PBOutlineBulletDictionary, ESDContainer, ESDObject, ESDRoot, PBSlideState, PDPresentation, PDSlideBase;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface PBPresentationReaderState : XXUnknownSuperclass {
@private
	PptBinaryReader* mPptBinaryReader;
	PDPresentation* mTgtPresentation;
	ESDRoot* mDocumentRoot;
	ESDContainer* mSrcSlideListHolder;
	ChVector<int>* mCurrentSlideTextBlockStartIndexVector;
	unsigned long mSrcSlideId;
	NSMutableArray* mSlideIndexes;
	TSUNoCopyDictionary* mSlideMasterToMasterStyles;
	CFDictionaryRef mHyperlinkMap;
	PBOfficeArtReaderState* mOfficeArtState;
	NSMutableArray* mFontEntities;
	PDSlideBase* mTgtSlide;
	unsigned mTextLength;
	BOOL mHasCharacterPropertyBulletIndex;
	unsigned mBulletIndex;
	PBOutlineBulletDictionary* mPlaceholderBulletStyles;
	PBOutlineBulletDictionary* mPlaceholderMacCharStyles;
	ESDObject* mCurrentBulletStyle;
	ESDObject* mCurrentMacCharStyle;
	ChVector<PBReaderMasterStyleInfo>* mSrcDocMasterStyleInfoVector;
	ChVector<PBReaderMasterStyleInfo>* mSrcCurrentMasterStyleInfoVector;
	OADTheme* mDefaultTheme;
	PBSlideState* mSlideState;
	id<OCCancelDelegate> mCancel;
	BOOL mHasSlideNumberPlaceholder;
	NSMutableDictionary* mTargetShapeToSourceTextBoxContainerHolderMap;
}
@property(assign) BOOL hasSlideNumberPlaceholder;	// @synthesize=mHasSlideNumberPlaceholder
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// @synthesize=mCancel
@property(assign) ESDContainer* sourceSlideListHolder;	// @synthesize=mSrcSlideListHolder
@property(assign) unsigned bulletIndex;	// converted property
@property(assign) BOOL hasCharacterPropertyBulletIndex;	// converted property
@property(assign) unsigned textLength;	// converted property
@property(retain) id tgtSlide;	// converted property
@property(retain) id defaultTheme;	// converted property
@property(retain) id documentRoot;	// converted property
// declared property setter: -(void)setHasSlideNumberPlaceholder:(BOOL)placeholder;
// declared property getter: -(BOOL)hasSlideNumberPlaceholder;
// declared property setter: -(void)setCancelDelegate:(id)delegate;
// declared property getter: -(id)cancelDelegate;
// declared property setter: -(void)setSourceSlideListHolder:(id)holder;
// declared property getter: -(id)sourceSlideListHolder;
-(void)setSourceTextBoxContainerHolder:(id)holder forTargetShape:(id)targetShape;
-(id)sourceTextBoxContainerHolderForTargetShape:(id)targetShape;
-(id)hyperlinkInfoWithId:(unsigned long)anId createIfAbsent:(BOOL)absent;
-(BOOL)isCancelled;
-(void)setSourceSlideId:(unsigned long)anId;
-(ChVector<int>*)currentSlideTextBlockStartIndexVector;
-(PBReaderMasterStyleInfo*)currentSourceMasterStyleInfoOfType:(int)type;
-(PBReaderMasterStyleInfo*)docSourceMasterStyleInfoOfType:(int)type;
-(void)setCurrentSourceMasterStyleInfoVector:(ChVector<PBReaderMasterStyleInfo>*)vector;
-(BOOL)hasCurrentSourceMasterStyleInfoVector;
-(void)resetSlideState;
-(id)slideState;
-(id)masterStyles:(id)styles;
-(void)setMasterStyles:(id)styles slideMaster:(id)master;
-(void)setCurrentBulletStyle:(id)style macCharStyle:(id)style2;
-(void)setCurrentTextType:(int)type placeholderIndex:(unsigned long)index;
-(id)currentMacCharStyle;
-(id)currentBulletStyle;
-(void)setPlaceholderMacCharStyles:(id)styles;
-(void)setPlaceholderBulletStyles:(id)styles;
// converted property setter: -(void)setBulletIndex:(unsigned)index;
// converted property getter: -(unsigned)bulletIndex;
// converted property setter: -(void)setHasCharacterPropertyBulletIndex:(BOOL)index;
// converted property getter: -(BOOL)hasCharacterPropertyBulletIndex;
// converted property setter: -(void)setTextLength:(unsigned)length;
// converted property getter: -(unsigned)textLength;
// converted property setter: -(void)setTgtSlide:(id)slide;
// converted property getter: -(id)tgtSlide;
// converted property getter: -(id)defaultTheme;
// converted property setter: -(void)setDefaultTheme:(id)theme;
-(id)baseTextListStyle;
-(id)fontEntityAtIndex:(unsigned)index;
-(void)addFontEntity:(id)entity charSet:(int)set type:(int)type family:(int)family;
-(unsigned)fontEntityCount;
-(id)officeArtState;
-(id)slideIndexesRef;
-(int)getSlideIndexAt:(int)at;
-(void)addSlideIndex:(int)index;
-(int)numberOfSlideIndexes;
-(id)tgtPresentation;
// converted property setter: -(void)setDocumentRoot:(id)root;
// converted property getter: -(id)documentRoot;
-(PptBinaryReader*)reader;
-(void)dealloc;
-(id)initWithReader:(PptBinaryReader*)reader tgtPresentation:(id)presentation;
@end

