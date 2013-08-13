/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKPStyleProperties;

__attribute__((visibility("hidden")))
@interface VKPZoomProperty : XXUnknownSuperclass {
@private
	float _maxZ;
	float _minZ;
	VKPStyleProperties* _properties;
}
@property(retain, nonatomic) VKPStyleProperties* properties;	// @synthesize=_properties
@property(assign, nonatomic) float maxZ;	// @synthesize=_maxZ
@property(assign, nonatomic) float minZ;	// @synthesize=_minZ
// declared property setter: -(void)setProperties:(id)properties;
// declared property getter: -(id)properties;
// declared property setter: -(void)setMaxZ:(float)z;
// declared property getter: -(float)maxZ;
// declared property setter: -(void)setMinZ:(float)z;
// declared property getter: -(float)minZ;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(void)dealloc;
-(void)applyTo:(id)to zoom:(float)zoom;
@end

