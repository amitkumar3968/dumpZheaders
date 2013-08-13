/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import </libobjc.A.h>
#import "MusicLibrary-Structs.h"


@interface ML3QuerySection : NSObject {
@private
	NSRange _range;
	unsigned _sectionIndex;
}
@property(assign, nonatomic) unsigned sectionIndex;	// @synthesize=_sectionIndex
@property(assign, nonatomic) NSRange range;	// @synthesize=_range
// declared property setter: -(void)setSectionIndex:(unsigned)index;
// declared property getter: -(unsigned)sectionIndex;
// declared property setter: -(void)setRange:(NSRange)range;
// declared property getter: -(NSRange)range;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)description;
-(id)initWithRange:(NSRange)range sectionIndex:(unsigned)index;
@end

