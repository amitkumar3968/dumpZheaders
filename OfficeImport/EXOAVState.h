/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAVState.h"

@class EXState;

__attribute__((visibility("hidden")))
@interface EXOAVState : OAVState {
@private
	EXState* mEXState;
}
-(id)exState;
-(id)initWithEXState:(id)exstate packagePart:(id)part;
@end

