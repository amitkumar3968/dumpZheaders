/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFPEffect.h"


__attribute__((visibility("hidden")))
@interface MFPColorCurveEffect : MFPEffect {
@private
	int mAdjustment;
	int mChannel;
	long mAdjustValue;
}
+(id)GUID;
-(id)initWithAdjustment:(int)adjustment channel:(int)channel adjustValue:(long)value;
@end

