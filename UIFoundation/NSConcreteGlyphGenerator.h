/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "NSGlyphGenerator.h"


__attribute__((visibility("hidden")))
@interface NSConcreteGlyphGenerator : NSGlyphGenerator {
@private
	char* bidiTypes;
	char* bidiLevels;
}
+(id)sharedGlyphGenerator;
-(void)generateGlyphsForGlyphStorage:(id)glyphStorage desiredNumberOfCharacters:(unsigned)characters glyphIndex:(unsigned*)index characterIndex:(unsigned*)index4;
@end

