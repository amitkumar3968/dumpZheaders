/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAStockSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString* refId;	// @dynamic
@property(copy, nonatomic) NSString* aceId;	// @dynamic
@property(copy, nonatomic) NSArray* stockReferences;
@property(copy, nonatomic) NSArray* stockList;
+(id)searchCompletedWithDictionary:(id)dictionary context:(id)context;
+(id)searchCompleted;
// declared property setter: -(void)setStockReferences:(id)references;
// declared property getter: -(id)stockReferences;
// declared property setter: -(void)setStockList:(id)list;
// declared property getter: -(id)stockList;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
