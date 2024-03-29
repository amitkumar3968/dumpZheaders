/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SWVicFileLogger, NSString;

@interface SWAccessory : XXUnknownSuperclass {
	NSString* _transportType;
	NSString* _serialNumber;
	NSString* _linkState;
	NSString* _searchState;
	SWVicFileLogger* _vicFileLogger;
}
@property(retain, nonatomic) SWVicFileLogger* vicFileLogger;	// @synthesize=_vicFileLogger
@property(readonly, assign, nonatomic) NSString* searchState;	// @synthesize=_searchState
@property(readonly, assign, nonatomic) NSString* linkState;	// @synthesize=_linkState
@property(readonly, assign, nonatomic) NSString* serialNumber;	// @synthesize=_serialNumber
@property(readonly, assign, nonatomic) NSString* transportType;	// @synthesize=_transportType
// declared property setter: -(void)setVicFileLogger:(id)logger;
// declared property getter: -(id)vicFileLogger;
// declared property getter: -(id)searchState;
// declared property getter: -(id)linkState;
// declared property getter: -(id)serialNumber;
// declared property getter: -(id)transportType;
-(void)cancelSearching;
-(void)beginSearching;
-(void)unlink;
-(void)cancelLinking;
-(void)beginLinking;
-(void)deactivate;
-(void)dealloc;
-(id)init;
@end

