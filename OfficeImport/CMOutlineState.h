/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CMOutlineState : XXUnknownSuperclass {
@private
	int counter[10];
	int listId;
}
@property(readonly, assign) int listId;	// converted property
-(void)increaseCounterAtLevel:(int)level;
-(int)counterAtLevel:(int)level;
-(void)setCounterTo:(int)to atLevel:(int)level;
// converted property getter: -(int)listId;
-(void)reset;
-(id)initWithListId:(int)listId;
-(id)init;
@end
