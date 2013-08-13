/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import "GenericProduction.h"

@class SimpleSlotSequence, NSArray;

@interface NewProduction : GenericProduction {
	NSArray* _indices;
	SimpleSlotSequence* _overlays;
}
@property(retain) SimpleSlotSequence* overlays;	// @synthesize=_overlays
@property(retain) NSArray* indices;	// @synthesize=_indices
+(id)productionWithSimpleSlotSequence:(id)simpleSlotSequence;
+(id)instanceFromPlist:(id)plist;
// declared property setter: -(void)setOverlays:(id)overlays;
// declared property getter: -(id)overlays;
// declared property setter: -(void)setIndices:(id)indices;
// declared property getter: -(id)indices;
-(id)description;
-(void)dealloc;
-(id)initWithOverlays:(id)overlays indices:(id)indices;
-(id)initWithSimpleSlotSequence:(id)simpleSlotSequence;
-(id)initFromPlist:(id)plist;
@end

