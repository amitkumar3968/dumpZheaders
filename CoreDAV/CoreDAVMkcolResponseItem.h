/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem {
	NSMutableSet* _propStats;
}
@property(retain) NSMutableSet* propStats;	// @synthesize=_propStats
+(id)copyParseRules;
// declared property setter: -(void)setPropStats:(id)stats;
// declared property getter: -(id)propStats;
-(BOOL)hasPropertyError;
-(void)addPropStat:(id)stat;
-(id)description;
-(void)dealloc;
-(id)init;
@end
