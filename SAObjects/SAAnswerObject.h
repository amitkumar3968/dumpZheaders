/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, NSArray;

@interface SAAnswerObject : SADomainObject {
}
@property(copy, nonatomic) NSString* title;
@property(copy, nonatomic) NSArray* lines;
+(id)objectWithDictionary:(id)dictionary context:(id)context;
+(id)object;
-(void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
// declared property setter: -(void)setLines:(id)lines;
// declared property getter: -(id)lines;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
