/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PDAnimationInfoData;

__attribute__((visibility("hidden")))
@interface PDAnimationInfo : XXUnknownSuperclass {
@private
	PDAnimationInfoData* mEntrance;
	PDAnimationInfoData* mExit;
	PDAnimationInfoData* mMedia;
}
@property(retain, nonatomic) PDAnimationInfoData* mediaData;	// @synthesize=mMedia
@property(retain) id exitData;	// converted property
@property(retain) id entranceData;	// converted property
// declared property setter: -(void)setMediaData:(id)data;
// declared property getter: -(id)mediaData;
// converted property getter: -(id)exitData;
// converted property setter: -(void)setExitData:(id)data;
// converted property getter: -(id)entranceData;
// converted property setter: -(void)setEntranceData:(id)data;
-(void)dealloc;
@end
