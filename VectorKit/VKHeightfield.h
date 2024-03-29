/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VKHeightfield : XXUnknownSuperclass {
@private
	float* _zBins;
	unsigned _rowCount;
	unsigned _columnCount;
}
-(void)dealloc;
-(id)initWithFootprintTile:(id)footprintTile heightfieldRows:(unsigned)rows heightfieldColumns:(unsigned)columns;
-(id)initWithRows:(unsigned)rows columns:(unsigned)columns;
@end

