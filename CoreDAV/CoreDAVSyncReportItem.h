/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVMultiStatusItem.h"

@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem {
	NSString* _syncToken;
}
@property(readonly, assign) NSString* syncToken;	// @synthesize=_syncToken
+(id)copyParseRules;
// declared property getter: -(id)syncToken;
-(void)_setSyncTokenItem:(id)item;
-(id)description;
-(void)dealloc;
@end

