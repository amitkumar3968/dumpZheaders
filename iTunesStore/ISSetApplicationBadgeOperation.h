/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation {
	id _badgeValue;
	NSString* _bundleIdentifier;
}
@property(retain) NSString* bundleIdentifier;	// @synthesize=_bundleIdentifier
@property(retain) id badgeValue;	// @synthesize=_badgeValue
// declared property setter: -(void)setBundleIdentifier:(id)identifier;
// declared property getter: -(id)bundleIdentifier;
// declared property setter: -(void)setBadgeValue:(id)value;
// declared property getter: -(id)badgeValue;
-(id)uniqueKey;
-(void)run;
-(void)dealloc;
@end
