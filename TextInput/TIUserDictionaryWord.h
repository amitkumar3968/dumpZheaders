/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface TIUserDictionaryWord : XXUnknownSuperclass {
@private
	NSString* _sectionIndex;
}
@property(copy, nonatomic) NSString* sectionIndex;	// @synthesize=_sectionIndex
@property(copy, nonatomic) NSString* shortcut;	// @dynamic
@property(copy, nonatomic) NSString* target;	// @dynamic
+(BOOL)userWord:(id)word duplicatesTarget:(id)target andShortcut:(id)shortcut;
+(int)validateWithNewTarget:(id)newTarget newShortcut:(id)shortcut otherWords:(id)words;
+(id)predicateFilteringForSearchText:(id)searchText;
+(id)predicateMatchingTarget:(id)target shortcut:(id)shortcut;
+(id)sortDescriptors;
+(id)entityDescription;
// declared property setter: -(void)setSectionIndex:(id)index;
// declared property getter: -(id)sectionIndex;
// declared property setter: -(void)setShortcut:(id)shortcut;
// declared property setter: -(void)setTarget:(id)target;
-(id)changeDescription;
-(id)filteredValues:(id)values;
-(id)changeDescriptionKey:(id)key;
-(BOOL)hasChangesToTargetOrShortcut;
-(void)updateTimestamp;
-(id)copyWithContext:(id)context;
-(void)takeValuesFrom:(id)from overwriteExistingValues:(BOOL)values;
-(int)compare:(id)compare;
-(void)dealloc;
@end

