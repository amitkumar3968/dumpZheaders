/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CloudRecents.framework/CloudRecents
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate, NSArray, NSMutableArray;

@interface CRRecentContact : XXUnknownSuperclass {
@private
	NSMutableArray* _recentDates;
	BOOL _searchedForExistingPerson;
	void* _existingPerson;
	void* _interimPerson;
	int _identifier;
	long long _recentID;
	NSString* _bundleIdentifier;
	int _property;
	NSString* _address;
	NSString* _lastSendingAddress;
	NSString* _displayName;
}
@property(copy, nonatomic) NSString* lastSendingAddress;	// @synthesize=_lastSendingAddress
@property(copy, nonatomic) NSArray* recentDates;
@property(copy, nonatomic) NSString* address;	// @synthesize=_address
@property(assign, nonatomic) int property;	// @synthesize=_property
@property(copy, nonatomic) NSString* bundleIdentifier;	// @synthesize=_bundleIdentifier
@property(assign, nonatomic) long long recentID;	// @synthesize=_recentID
@property(readonly, assign, nonatomic) NSDate* leastRecentDate;
@property(readonly, assign, nonatomic) NSDate* mostRecentDate;
@property(readonly, assign, nonatomic) unsigned countOfRecents;
@property(copy, nonatomic) NSString* displayName;	// @synthesize=_displayName
@property(readonly, assign) void* existingPerson;	// converted property
// declared property setter: -(void)setDisplayName:(id)name;
// declared property getter: -(id)displayName;
// declared property setter: -(void)setLastSendingAddress:(id)address;
// declared property getter: -(id)lastSendingAddress;
// declared property setter: -(void)setAddress:(id)address;
// declared property getter: -(id)address;
// declared property setter: -(void)setProperty:(int)property;
// declared property getter: -(int)property;
// declared property setter: -(void)setBundleIdentifier:(id)identifier;
// declared property getter: -(id)bundleIdentifier;
// declared property setter: -(void)setRecentID:(long long)anId;
// declared property getter: -(long long)recentID;
-(int)matchedIdentifier;
-(void*)person;
// converted property getter: -(void*)existingPerson;
-(void)recordRecentEventForDate:(id)date userInitiated:(BOOL)initiated;
// declared property setter: -(void)setRecentDates:(id)dates;
// declared property getter: -(id)recentDates;
// declared property getter: -(id)leastRecentDate;
// declared property getter: -(id)mostRecentDate;
// declared property getter: -(unsigned)countOfRecents;
-(BOOL)hasFullTextMatch:(id)match;
-(id)description;
-(void)dealloc;
-(id)initWithRFC822Address:(id)rfc822Address forProperty:(int)property withRecentDate:(id)recentDate bundleIdentifier:(id)identifier;
-(id)initWithRecentID:(long long)recentID;
-(id)initWithDictionary:(id)dictionary;
-(id)copyDictionaryRepresentation;
@end

