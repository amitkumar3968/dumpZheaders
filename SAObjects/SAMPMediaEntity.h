/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString;

@interface SAMPMediaEntity : SADomainObject {
}
@property(copy, nonatomic) NSString* title;
@property(copy, nonatomic) NSString* sortTitle;
+(id)mediaEntityWithDictionary:(id)dictionary context:(id)context;
+(id)mediaEntity;
-(void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
// declared property setter: -(void)setSortTitle:(id)title;
// declared property getter: -(id)sortTitle;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
