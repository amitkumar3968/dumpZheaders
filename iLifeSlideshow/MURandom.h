/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "MUPoolObject.h"


@interface MURandom : MUPoolObject {
	long _state[31];
	long* _frontPtr;
	long* _rearPtr;
	long* _endPtr;
}
+(id)randomGeneratorWithSeed:(unsigned long)seed;
+(BOOL)clearVars;
+(XXStruct_raCX$B*)poolInfo;
-(float)randomFloatInRange:(float)range :(float)arg2;
-(long)randomInt;
-(void)_seed:(unsigned long)seed;
@end
