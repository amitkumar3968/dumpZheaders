/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PDSlideMaster, NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface PBMasterInfo : XXUnknownSuperclass {
@private
	PDSlideMaster* mSlideMaster;
	NSMutableArray* mTgtSlideLayoutArray;
	unsigned long mMainPbRef;
	unsigned long mTitlePbRef;
	NSDictionary* mLayoutMap;
	ChVector<PBReaderMasterStyleInfo>* mSrcTextStyling;
}
@property(assign) unsigned long titlePbRef;	// converted property
@property(assign) unsigned long mainPbRef;	// converted property
@property(retain) id slideMaster;	// converted property
-(ChVector<PBReaderMasterStyleInfo>*)sourceTextStyling;
-(id)slideLayoutForSlideHolder:(id)slideHolder;
-(void)cacheSlideLayouts;
-(id)allTargetLayoutTypes;
-(void)cacheTargetLayoutType:(int)type;
// converted property getter: -(unsigned long)titlePbRef;
// converted property setter: -(void)setTitlePbRef:(unsigned long)ref;
// converted property getter: -(unsigned long)mainPbRef;
// converted property setter: -(void)setMainPbRef:(unsigned long)ref;
// converted property getter: -(id)slideMaster;
// converted property setter: -(void)setSlideMaster:(id)master;
-(void)dealloc;
-(id)init;
@end

