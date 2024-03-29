/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VKViewVolume : XXUnknownSuperclass {
@private
	XXStruct_taVrlB _corners[8];
	XXStruct_8tiOOA _faces[6];
}
@property(readonly, assign, nonatomic) XXStruct_8tiOOA farPlane;
@property(readonly, assign, nonatomic) const XXStruct_8tiOOA* faces;
@property(readonly, assign, nonatomic) const XXStruct_taVrlB* corners;
-(XXStruct_taVrlB)lerpPoint:(float*)point;
-(BOOL)distanceClipsPoint:(XXStruct_taVrlB)point;
-(BOOL)rejectsRect:(XXStruct_HKaJvA)rect;
-(void)updateWithFrustum:(XXStruct_TVSAjA)frustum matrix:(const XXStruct_$zuyAD*)matrix;
// declared property getter: -(XXStruct_8tiOOA)farPlane;
// declared property getter: -(const XXStruct_8tiOOA*)faces;
// declared property getter: -(const XXStruct_taVrlB*)corners;
@end

