/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDTokenTreeNode : XXUnknownSuperclass {
@private
	unsigned mTokenIndex;
	int mTokenType;
	EDTokenTreeNode* mFirstChild;
	EDTokenTreeNode* mSibling;
}
@property(retain) id sibling;	// converted property
@property(retain) id firstChild;	// converted property
+(id)tokenTreeNodeWithIndexAndType:(unsigned)indexAndType type:(int)type;
// converted property setter: -(void)setSibling:(id)sibling;
// converted property getter: -(id)sibling;
// converted property setter: -(void)setFirstChild:(id)child;
// converted property getter: -(id)firstChild;
-(unsigned)tokenIndex;
-(void)dealloc;
-(id)initWithIndexAndType:(unsigned)indexAndType type:(int)type;
-(id)init;
@end

