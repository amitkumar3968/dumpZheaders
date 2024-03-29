/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SPSearchResultSection;

@interface SPApplication : XXUnknownSuperclass {
	NSString* _displayIdentifier;
	NSString* _displayName;
	NSString* _longDisplayName;
}
@property(readonly, assign, nonatomic) SPSearchResultSection* section;
@property(retain, nonatomic) NSString* longDisplayName;	// @synthesize=_longDisplayName
@property(retain, nonatomic) NSString* displayName;	// @synthesize=_displayName
@property(retain, nonatomic) NSString* displayIdentifier;	// @synthesize=_displayIdentifier
// declared property setter: -(void)setLongDisplayName:(id)name;
// declared property getter: -(id)longDisplayName;
// declared property setter: -(void)setDisplayName:(id)name;
// declared property getter: -(id)displayName;
// declared property setter: -(void)setDisplayIdentifier:(id)identifier;
// declared property getter: -(id)displayIdentifier;
-(void)dealloc;
// declared property getter: -(id)section;
-(id)description;
@end

